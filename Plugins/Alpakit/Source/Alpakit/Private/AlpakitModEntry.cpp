#include "AlpakitModEntry.h"
#include "Alpakit.h"
#include "AlpakitSettings.h"
#include "AlpakitStyle.h"
#include "ISourceControlModule.h"
#include "ISourceControlProvider.h"
#include "ISourceControlOperation.h"
#include "ModMetadataObject.h"
#include "SourceControlOperations.h"
#include "Async/Async.h"
#include "IUATHelperModule.h"
#include "Engine/PrimaryAssetLabel.h"
#include "EditorAssetLibrary.h"
#include "Modules/ModuleManager.h"
#include "HAL/FileManager.h"
#include "Misc/Paths.h"
#include "Misc/PackageName.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/IAssetRegistry.h"

#define LOCTEXT_NAMESPACE "AlpakitModListEntry"

namespace
{
	bool IsOutsidePluginMount(
		const FSoftObjectPath& AssetPath,
		const FString& PluginMountPath)
	{
		if (AssetPath.IsNull())
		{
			return false;
		}

		const FString PathString = AssetPath.ToString();

		return !PathString.StartsWith(
			PluginMountPath,
			ESearchCase::IgnoreCase
		);
	}

	int32 GetModChunkIdIfExternalContentExists(const IPlugin& Plugin)
	{
		FString PluginMountPath = Plugin.GetMountedAssetPath();
		if (!PluginMountPath.EndsWith(TEXT("/")))
		{
			PluginMountPath += TEXT("/");
		}

		const FString PluginName = Plugin.GetName();
		const FString PALPath =
			PluginMountPath + FString::Printf(TEXT("PAL_%s"), *PluginName);

		UPrimaryAssetLabel* Label =
			Cast<UPrimaryAssetLabel>(UEditorAssetLibrary::LoadAsset(PALPath));

		if (!Label)
		{
			UE_LOG(
				LogAlpakit,
				Display,
				TEXT(
					"No PAL found at %s. No external-content check is "
					"needed; using the normal plugin DLC cook."
				),
				*PALPath
			);
			return INDEX_NONE;
		}

		bool bHasExternalContent = false;

		// Explicit Assets can point outside /<PluginName>/ and are the main
		// mechanism used for /Game replacement assets.
		for (const TSoftObjectPtr<UObject>& ExplicitAsset : Label->ExplicitAssets)
		{
			const FSoftObjectPath AssetPath =
				ExplicitAsset.ToSoftObjectPath();

			if (IsOutsidePluginMount(AssetPath, PluginMountPath))
			{
				UE_LOG(
					LogAlpakit,
					Display,
					TEXT(
						"PAL %s manages external asset %s. "
						"Two-stage cook is required."
					),
					*PALPath,
					*AssetPath.ToString()
				);

				bHasExternalContent = true;
				break;
			}
		}

		// Explicit Blueprints are a separate PAL list in UE5. Treat them the
		// same way so class replacements outside the plugin also trigger pass 2.
		if (!bHasExternalContent)
		{
			for (const TSoftClassPtr<UObject>& ExplicitBlueprint :
				Label->ExplicitBlueprints)
			{
				const FSoftObjectPath AssetPath =
					ExplicitBlueprint.ToSoftObjectPath();

				if (IsOutsidePluginMount(
					AssetPath,
					PluginMountPath))
				{
					UE_LOG(
						LogAlpakit,
						Display,
						TEXT(
							"PAL %s manages external blueprint %s. "
							"Two-stage cook is required."
						),
						*PALPath,
						*AssetPath.ToString()
					);

					bHasExternalContent = true;
					break;
				}
			}
		}

		if (!bHasExternalContent)
		{
			UE_LOG(
				LogAlpakit,
				Display,
				TEXT(
					"PAL %s contains no Explicit Assets or Explicit "
					"Blueprints outside %s. Skipping PASS 2 and using "
					"the normal plugin DLC cook only."
				),
				*PALPath,
				*PluginMountPath
			);

			return INDEX_NONE;
		}

		const int32 ChunkId = Label->Rules.ChunkId;
		if (ChunkId < 0)
		{
			UE_LOG(
				LogAlpakit,
				Error,
				TEXT(
					"PAL %s contains external content but has no valid "
					"Chunk ID. External /Game content cannot be included "
					"by the two-stage cook."
				),
				*PALPath
			);

			return INDEX_NONE;
		}

		UE_LOG(
			LogAlpakit,
			Display,
			TEXT(
				"Two-stage packaging enabled for %s: %s -> Chunk %d"
			),
			*PluginName,
			*PALPath,
			ChunkId
		);

		return ChunkId;
	}
}


void SAlpakitModEntry::Construct(const FArguments& Args, TSharedRef<IPlugin> InMod, TSharedRef<SAlpakitModEntryList> InOwner) {
    Mod = InMod;
	Owner = InOwner;

    UAlpakitSettings* Settings = UAlpakitSettings::Get();
    const FString PluginName = Mod->GetName();

    Checkbox = SNew(SCheckBox)
        .OnCheckStateChanged(this, &SAlpakitModEntry::OnEnableCheckboxChanged)
        .IsChecked(Settings->ModSelection.FindOrAdd(PluginName, false));

    ChildSlot[
        SNew(SHorizontalBox)
        + SHorizontalBox::Slot().AutoWidth().Padding(0, 0, 5, 0).VAlign(VAlign_Center)[
            Checkbox.ToSharedRef()
        ]
        + SHorizontalBox::Slot().AutoWidth().Padding(0, 0, 5, 0).VAlign(VAlign_Center)[
            SNew(SButton)
            .Text(LOCTEXT("PackageModAlpakit", "Alpakit!"))
            .OnClicked_Lambda([this](){
                PackageMod(TArray<TSharedPtr<SAlpakitModEntry>>());
                return FReply::Handled();
            })
            .ToolTipText_Lambda([this](){
                return FText::FromString(FString::Printf(TEXT("Alpakit %s"), *this->Mod->GetName()));
            })
        ]
        + SHorizontalBox::Slot().AutoWidth().Padding(0, 0, 5, 0).VAlign(VAlign_Center)[
            SNew(SButton)
            .Text(LOCTEXT("EditModAlpakit", "Edit"))
            .OnClicked_Lambda([this](){
				this->OnEditMod();
                return FReply::Handled();
            })
            .ToolTipText_Lambda([this](){
                return FText::FromString(FString::Printf(TEXT("Edit %s"), *this->Mod->GetName()));
            })
        ]
        + SHorizontalBox::Slot().AutoWidth().Padding(0, 0, 5, 0).VAlign(VAlign_Center)[
            SNew(SButton)
            .Text(LOCTEXT("DeleteModAlpakit", "Delete"))
            .OnClicked(this, &SAlpakitModEntry::OnDeleteMod)
            .Visibility_Lambda([this]()
            {
                if (!Mod.IsValid())
                {
                    return EVisibility::Collapsed;
                }

                FString ModBaseDir =
                    FPaths::ConvertRelativePathToFull(Mod->GetBaseDir());

                FString ProjectModsDir =
                    FPaths::ConvertRelativePathToFull(
                        FPaths::Combine(
                            FPaths::ProjectDir(),
                            TEXT("Mods")));

                FPaths::NormalizeDirectoryName(ModBaseDir);
                FPaths::NormalizeDirectoryName(ProjectModsDir);

                const FString ProjectModsPrefix =
                    ProjectModsDir.EndsWith(TEXT("/"))
                        ? ProjectModsDir
                        : ProjectModsDir + TEXT("/");

                const bool bIsInsideProjectMods =
                    ModBaseDir.StartsWith(
                        ProjectModsPrefix,
                        ESearchCase::IgnoreCase) &&
                    ModBaseDir.Len() > ProjectModsPrefix.Len();

                return bIsInsideProjectMods
                    ? EVisibility::Visible
                    : EVisibility::Collapsed;
            })
            .ToolTipText_Lambda([this]()
            {
                return Mod.IsValid()
                    ? FText::FromString(
                        FString::Printf(
                            TEXT("Permanently delete %s"),
                            *Mod->GetName()))
                    : FText::GetEmpty();
            })
        ]
        + SHorizontalBox::Slot().FillWidth(1).VAlign(VAlign_Center)[
            SNew(STextBlock)
            .Text_Lambda([InMod]() {
                const FString DisplayText = FString::Printf(TEXT("%s (%s)"), *InMod->GetDescriptor().FriendlyName, *InMod->GetName());
                return FText::FromString(DisplayText);
            })
            .HighlightText_Lambda([InOwner]() {
                return FText::FromString(InOwner->GetLastFilter());
            })
        ]
    ];
}
void SAlpakitModEntry::OnEditMod()
{
	// Construct the plugin metadata object using the descriptor for this plugin
	UModMetadataObject* MetadataObject = NewObject<UModMetadataObject>();
	MetadataObject->TargetIconPath = Mod->GetBaseDir() / TEXT("Resources/Icon128.png");
	MetadataObject->PopulateFromDescriptor(Mod->GetDescriptor());
	MetadataObject->AddToRoot();

	// Create a property view
	FPropertyEditorModule& EditModule = FModuleManager::Get().GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	EditModule.RegisterCustomClassLayout(UModMetadataObject::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FModMetadataCustomization::MakeInstance));
	TSharedRef<IDetailsView> PropertyView = EditModule.CreateDetailView(FDetailsViewArgs(false, false, false, FDetailsViewArgs::ActorsUseNameArea, true));
	PropertyView->SetObject(MetadataObject, true);

	// Create the window
	PropertiesWindow = SNew(SWindow)
		.ClientSize(FVector2D(800.0f, 700.0f))
		.Title(LOCTEXT("ModMetadata", "Mod Properties"))
		.Content()
		[
			SNew(SBorder)
			.Padding(FMargin(8.0f, 8.0f))
			[
				SNew(SVerticalBox)

				+SVerticalBox::Slot()
				.AutoHeight()
				.Padding(FMargin(5.0f, 10.0f, 5.0f, 5.0f))
				[
					SNew(STextBlock)
					.Text(FText::FromString(Mod->GetName()))
				]

				+ SVerticalBox::Slot()
				.Padding(5)
				[
					PropertyView
				]

				+ SVerticalBox::Slot()
				.AutoHeight()
				.Padding(5)
				.HAlign(HAlign_Right)
				[
					SNew(SButton)
					.ContentPadding(FMargin(20.0f, 2.0f))
					.Text(LOCTEXT("OkButtonLabel", "Ok"))
					.OnClicked(this, &SAlpakitModEntry::OnEditModFinished, MetadataObject)
				]
			]
		];

	FSlateApplication::Get().AddModalWindow(PropertiesWindow.ToSharedRef(), Owner);
}

FReply SAlpakitModEntry::OnEditModFinished(UModMetadataObject* MetadataObject)
{
	FPluginDescriptor OldDescriptor = Mod->GetDescriptor();

	// Update the descriptor with the new metadata
	FPluginDescriptor NewDescriptor = OldDescriptor;
	MetadataObject->CopyIntoDescriptor(NewDescriptor);
	MetadataObject->RemoveFromRoot();

	// Close the properties window
	PropertiesWindow->RequestDestroyWindow();

	// Write both to strings
	FString OldText;
	OldDescriptor.Write(OldText);
	FString NewText;
	NewDescriptor.Write(NewText);
	if(OldText.Compare(NewText, ESearchCase::CaseSensitive) != 0)
	{
		FString DescriptorFileName = Mod->GetDescriptorFileName();

		// First attempt to check out the file if SCC is enabled
		ISourceControlModule& SourceControlModule = ISourceControlModule::Get();
		if(SourceControlModule.IsEnabled())
		{
			ISourceControlProvider& SourceControlProvider = SourceControlModule.GetProvider();
			TSharedPtr<ISourceControlState, ESPMode::ThreadSafe> SourceControlState = SourceControlProvider.GetState(DescriptorFileName, EStateCacheUsage::ForceUpdate);
			if(SourceControlState.IsValid() && SourceControlState->CanCheckout())
			{
				SourceControlProvider.Execute(ISourceControlOperation::Create<FCheckOut>(), DescriptorFileName);
			}
		}

		// Write to the file and update the in-memory metadata
		FText FailReason;
		if(!Mod->UpdateDescriptor(NewDescriptor, FailReason))
		{
			FMessageDialog::Open(EAppMsgType::Ok, FailReason);
		}
	}
	return FReply::Handled();
}

FString GetArgumentForLaunchType(EAlpakitStartGameType LaunchMode) {
	return TEXT("");
}

FText GetCurrentPlatformName() {
#if PLATFORM_WINDOWS
    return LOCTEXT("PlatformName_Windows", "Windows");
#elif PLATFORM_MAC
    return LOCTEXT("PlatformName_Mac", "Mac");
#elif PLATFORM_LINUX
    return LOCTEXT("PlatformName_Linux", "Linux");
#else
    return LOCTEXT("PlatformName_Other", "Other OS");
#endif
}

void SAlpakitModEntry::PackageMod(const TArray<TSharedPtr<SAlpakitModEntry>>& NextEntries) const {
    UAlpakitSettings* Settings = UAlpakitSettings::Get();
    const FString PluginName = Mod->GetName();
    const FString GamePath = Settings->PD3GamePath.Path;

    // Make the game path persistence independent of when the details view
    // decides that editing has finished.
    Settings->SaveSettings();

    const FString ProjectPath = FPaths::IsProjectFilePathSet()
        ? FPaths::ConvertRelativePathToFull(FPaths::GetProjectFilePath())
        : FPaths::RootDir() / FApp::GetProjectName() / FApp::GetProjectName() + TEXT(".uproject");

    FString AdditionalUATArguments;
    if (Settings->bCopyModsToGame) {
        AdditionalUATArguments.Append(TEXT("-CopyToGameDir "));
    }
    if (Settings->LaunchGameAfterPacking != EAlpakitStartGameType::NONE && NextEntries.Num() == 0) {
        AdditionalUATArguments.Append(TEXT("-LaunchGame "));
        AdditionalUATArguments.Append(GetArgumentForLaunchType(Settings->LaunchGameAfterPacking)).Append(TEXT(" "));
    }

    /*
     * Repair/ensure Asset Manager registration immediately before UAT starts.
     * This also fixes already-created mods: /<ModName> is persisted into the
     * PrimaryAssetLabel Directories list and the PAL is added to SpecificAssets.
     */
    FAlpakitModule& AlpakitModule =
        FModuleManager::LoadModuleChecked<FAlpakitModule>(TEXT("Alpakit"));

    AlpakitModule.EnsureAssetManagerRegistrationForPlugin(*Mod);

    // Only request PASS 2 when the PAL explicitly manages content outside
    // the plugin mount. Mods containing only plugin assets stay on the fast
    // original single-stage DLC path.
    const int32 ChunkId = GetModChunkIdIfExternalContentExists(*Mod);
    if (ChunkId >= 0)
    {
        AdditionalUATArguments.Append(
            FString::Printf(TEXT("-ChunkId=%d "), ChunkId)
        );
    }

    UE_LOG(LogAlpakit, Display, TEXT("Packaging plugin \"%s\". %d remaining"), *PluginName, NextEntries.Num());

    const FString CommandLine = FString::Printf(
        TEXT("-ScriptsForProject=\"%s\" PackagePlugin -Project=\"%s\" -PluginName=\"%s\" -GameDir=\"%s\" %s"),
        *ProjectPath,
        *ProjectPath,
        *PluginName,
        *GamePath,
        *AdditionalUATArguments
    );

    const FText PlatformName = GetCurrentPlatformName();
    IUATHelperModule::Get().CreateUatTask(
        CommandLine,
        PlatformName,
        LOCTEXT("PackageModTaskName", "Packaging Mod"),
        LOCTEXT("PackageModTaskShortName", "Package Mod Task"),
        FAlpakitStyle::Get().GetBrush("Alpakit.OpenPluginWindow"),
        nullptr,
        NextEntries.Num() == 0 ? (IUATHelperModule::UatTaskResultCallack)nullptr : [NextEntries](FString resultType, double runTime) {
            AsyncTask(ENamedThreads::GameThread, [NextEntries]() {
                TSharedPtr<SAlpakitModEntry> NextMod = NextEntries[0];

                TArray<TSharedPtr<SAlpakitModEntry>> RemainingEntries = NextEntries.FilterByPredicate([NextMod](const TSharedPtr<SAlpakitModEntry>& X) {
                    return X != NextMod;
                });

                NextMod->PackageMod(RemainingEntries);
            });
        }
    );
}

FReply SAlpakitModEntry::OnDeleteMod()
{
    if (!Mod.IsValid())
    {
        return FReply::Handled();
    }

    const FString PluginName = Mod->GetName();
    const FString PluginMountPath = Mod->GetMountedAssetPath();
    const FString DescriptorFileName = Mod->GetDescriptorFileName();

    // Capture the mount's physical content directory before deleting it.
    FString PluginContentDir =
        FPaths::ConvertRelativePathToFull(Mod->GetContentDir());
    FPaths::NormalizeDirectoryName(PluginContentDir);

    FString ModBaseDir =
        FPaths::ConvertRelativePathToFull(Mod->GetBaseDir());

    FString ProjectModsDir =
        FPaths::ConvertRelativePathToFull(
            FPaths::Combine(
                FPaths::ProjectDir(),
                TEXT("Mods")));

    FPaths::NormalizeDirectoryName(ModBaseDir);
    FPaths::NormalizeDirectoryName(ProjectModsDir);

    const FString ProjectModsPrefix =
        ProjectModsDir.EndsWith(TEXT("/"))
            ? ProjectModsDir
            : ProjectModsDir + TEXT("/");

    /*
     * Never allow this button to recursively delete anything outside the
     * project's Mods directory, even if an unexpected plugin descriptor is
     * classified as EPluginType::Mod.
     */
    if (!ModBaseDir.StartsWith(
            ProjectModsPrefix,
            ESearchCase::IgnoreCase) ||
        ModBaseDir.Len() <= ProjectModsPrefix.Len())
    {
        const FText ErrorText = FText::FromString(
            FString::Printf(
                TEXT(
                    "Alpakit refused to delete '%s' because its directory is "
                    "outside the project's Mods folder.\n\n%s"
                ),
                *PluginName,
                *ModBaseDir));

        FMessageDialog::Open(
            EAppMsgType::Ok,
            ErrorText);

        return FReply::Handled();
    }

    const FText ConfirmationText = FText::FromString(
        FString::Printf(
            TEXT(
                "Permanently delete mod '%s'?\n\n"
                "This will permanently delete the entire mod folder:\n"
                "%s\n\n"
                "Alpakit will also remove the mod from the Asset Manager "
                "PrimaryAssetLabel directories and specific assets.\n\n"
                "THIS CANNOT BE UNDONE.\n\n"
                "Are you sure you want to continue?"
            ),
            *PluginName,
            *ModBaseDir));

    if (FMessageDialog::Open(
            EAppMsgType::YesNo,
            ConfirmationText) != EAppReturnType::Yes)
    {
        return FReply::Handled();
    }

    /*
     * Delete the folder first. If Windows has a loaded DLL or another file
     * locked, leave the Asset Manager configuration untouched and report the
     * failure instead of creating a half-deleted registration state.
     */
    if (!IFileManager::Get().DeleteDirectory(
            *ModBaseDir,
            false, // RequireExists
            true)) // Tree
    {
        const FText ErrorText = FText::FromString(
            FString::Printf(
                TEXT(
                    "Failed to delete mod '%s'.\n\n"
                    "The directory could not be removed:\n%s\n\n"
                    "A file may still be in use. The mod has NOT been removed "
                    "from the Asset Manager."
                ),
                *PluginName,
                *ModBaseDir));

        FMessageDialog::Open(
            EAppMsgType::Ok,
            ErrorText);

        return FReply::Handled();
    }

    /*
     * Refresh the Asset Registry against the now-deleted directory while the
     * package mount still exists. A force rescan drops the old on-disk asset
     * entries and finds nothing to replace them with.
     */
    FString RegistryMountPath = PluginMountPath;
    RegistryMountPath.RemoveFromEnd(TEXT("/"));

    FAssetRegistryModule& AssetRegistryModule =
        FModuleManager::LoadModuleChecked<FAssetRegistryModule>(
            TEXT("AssetRegistry"));

    IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

    TArray<FString> DeletedScanPaths;
    DeletedScanPaths.Add(RegistryMountPath);

    AssetRegistry.ScanPathsSynchronous(
        DeletedScanPaths,
        true // bForceRescan
    );

    /*
     * Remove any now-empty cached subpaths as well. Do deepest paths first so
     * parents can be removed cleanly afterwards.
     */
    TArray<FString> CachedSubPaths;
    AssetRegistry.GetSubPaths(
        RegistryMountPath,
        CachedSubPaths,
        true);

    CachedSubPaths.Sort(
        [](const FString& A, const FString& B)
        {
            return A.Len() > B.Len();
        });

    for (const FString& CachedSubPath : CachedSubPaths)
    {
        AssetRegistry.RemovePath(CachedSubPath);
    }

    AssetRegistry.RemovePath(RegistryMountPath);

    /*
     * Remove the package mount itself. Content Browser listens to mount/path
     * changes, so this removes the deleted mod root from the Sources panel
     * instead of leaving an empty /<ModName> folder until editor restart.
     */
    FString RootMountPath = RegistryMountPath;
    if (!RootMountPath.EndsWith(TEXT("/")))
    {
        RootMountPath += TEXT("/");
    }

    FPackageName::UnRegisterMountPoint(
        RootMountPath,
        PluginContentDir);

    // Remove /<ModName> and any /<ModName>/... Specific Assets.
    FAlpakitModule& AlpakitModule =
        FModuleManager::LoadModuleChecked<FAlpakitModule>(
            TEXT("Alpakit"));

    AlpakitModule.RemoveAssetManagerRegistrationForPlugin(
        PluginName,
        PluginMountPath);

    // Remove the saved checkbox selection for the deleted mod.
    if (UAlpakitSettings* Settings = UAlpakitSettings::Get())
    {
        Settings->ModSelection.Remove(PluginName);
        Settings->SaveSettings();
    }

    /*
     * Remove the deleted descriptor from PluginManager's discovered list and
     * refresh discovery. The content mount may remain alive until editor
     * restart if assets from the mod were already loaded, but it will no
     * longer exist on disk or in Alpakit's list.
     */
    FText RemovePluginFailReason;
    if (!IPluginManager::Get().RemoveFromPluginsList(
            DescriptorFileName,
            &RemovePluginFailReason))
    {
        UE_LOG(
            LogAlpakit,
            Warning,
            TEXT(
                "Mod %s was deleted from disk, but PluginManager could not "
                "remove its descriptor from the current in-memory list: %s"
            ),
            *PluginName,
            *RemovePluginFailReason.ToString());
    }

    IPluginManager::Get().RefreshPluginsList();

    UE_LOG(
        LogAlpakit,
        Display,
        TEXT("Permanently deleted mod %s from %s"),
        *PluginName,
        *ModBaseDir);

    /*
     * Refresh the list after this Slate click handler returns, so this widget
     * is not destroyed while one of its own member functions is executing.
     */
    TWeakPtr<SAlpakitModEntryList> WeakOwner = Owner;

    AsyncTask(
        ENamedThreads::GameThread,
        [WeakOwner]()
        {
            if (TSharedPtr<SAlpakitModEntryList> PinnedOwner =
                    WeakOwner.Pin())
            {
                PinnedOwner->LoadMods();
            }
        });

    return FReply::Handled();
}

void SAlpakitModEntry::OnEnableCheckboxChanged(ECheckBoxState NewState) {
    // Save new checked state for the mod at the
    UAlpakitSettings* Settings = UAlpakitSettings::Get();
    const FString PluginName = Mod->GetName();

    Settings->ModSelection.Add(PluginName, NewState == ECheckBoxState::Checked);

    Settings->SaveSettings();
}

#undef LOCTEXT_NAMESPACE
