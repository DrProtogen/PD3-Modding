#include "CrimeForgeModEntryList.h"
#include "CrimeForge.h"
#include "CrimeForgeModEntry.h"
#include "LegacyModImporter.h"
#include "Interfaces/IPluginManager.h"
#include "Slate.h"
#include "HAL/FileManager.h"
#include "Misc/Paths.h"
#include "Async/Async.h"

#define LOCTEXT_NAMESPACE "CrimeForgeModListEntry"

void SCrimeForgeModEntryList::Construct(const FArguments& Args) {
    ChildSlot[
        SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight()[
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot().AutoWidth()[
                SNew(SButton)
                .Text(LOCTEXT("PackageModCrimeForgeAll", "CrimeForge Selected!"))
                .OnClicked(this,& SCrimeForgeModEntryList::PackageAllMods)
            ]
            + SHorizontalBox::Slot().AutoWidth()[
                SNew(SButton)
                .Text(LOCTEXT("PackageModCheckAll", "Check All"))
                .OnClicked(this,& SCrimeForgeModEntryList::CheckAllMods)
            ]
            + SHorizontalBox::Slot().AutoWidth()[
                SNew(SButton)
                .Text(LOCTEXT("PackageModUncheckAll", "Check None"))
                .OnClicked(this,& SCrimeForgeModEntryList::UncheckAllMods)
            ]
            + SHorizontalBox::Slot().FillWidth(1.0f)
            + SHorizontalBox::Slot().AutoWidth()[
                SNew(SButton)
                .Text(LOCTEXT("ImportLegacyMod", "Import Legacy Mod"))
                .ToolTipText(LOCTEXT("ImportLegacyModTooltip", "Migrate an uncooked UE4 ModLoader mod folder into a PDML/CrimeForge mod plugin."))
                .OnClicked(this, &SCrimeForgeModEntryList::ImportLegacyMod)
            ]
            + SHorizontalBox::Slot().AutoWidth()[
                SNew(SButton)
                .Text(LOCTEXT("CreateMod", "Create Mod"))
                .OnClicked(this,& SCrimeForgeModEntryList::CreateMod)
            ]
        ]
        + SVerticalBox::Slot().FillHeight(1.0f)[
            SNew(SScrollBox)
            .Orientation(Orient_Vertical)
            .ScrollBarAlwaysVisible(true)
            + SScrollBox::Slot()[
                SAssignNew(ModList, SListView<TSharedRef<IPlugin>>)
                .SelectionMode(ESelectionMode::None)
                .ListItemsSource(&FilteredMods)
                .OnGenerateRow_Lambda(
                    [this](TSharedRef<IPlugin> Mod, const TSharedRef<STableViewBase>& List) {
                        return SNew(STableRow<TSharedRef<IPlugin>>, List)[
                            SNew(SCrimeForgeModEntry, Mod, SharedThis(this))
                        ];
                    })
            ]
        ]
    ];

    LoadMods();
    IPluginManager::Get().OnNewPluginCreated().AddSP(this, &SCrimeForgeModEntryList::OnNewPluginCreated);
}

bool DoesPluginHaveRuntime(const IPlugin& Plugin) {
    //Content plugins always have runtime component
    if (Plugin.GetDescriptor().bCanContainContent) {
        return true;
    }
    //C++ plugins have runtime component as long as one of their modules does
    for (const FModuleDescriptor& Module : Plugin.GetDescriptor().Modules) {
        if (Module.Type == EHostType::Runtime ||
            Module.Type == EHostType::RuntimeNoCommandlet ||
            Module.Type == EHostType::RuntimeAndProgram ||
            Module.Type == EHostType::ClientOnly ||
            Module.Type == EHostType::ClientOnlyNoCommandlet ||
            Module.Type == EHostType::ServerOnly ||
            Module.Type == EHostType::CookedOnly) {
            return true;
        }
    }
    return false;
}

void SCrimeForgeModEntryList::LoadMods() {
    Mods.Empty();

    const FString ProjectModsDir =
        FPaths::ConvertRelativePathToFull(
            FPaths::Combine(
                FPaths::ProjectDir(),
                TEXT("Mods")));

    /*
     * /Mods is a custom CrimeForge plugin root rather than Unreal's normal
     * /Plugins directory. Make it an active IPluginManager search path for the
     * running editor before doing any discovery.
     */
    IPluginManager::Get().AddPluginSearchPath(
        ProjectModsDir,
        false);

    /*
     * A newly-created legacy mod can exist on disk before Unreal considers it
     * "enabled" in the current session. Explicitly register each descriptor
     * found under /Mods; AddToPluginsList() is specifically intended for
     * adding one plugin without relying on a full discovery pass.
     */
    TArray<FString> ModDescriptorFiles;
    IFileManager::Get().FindFilesRecursive(
        ModDescriptorFiles,
        *ProjectModsDir,
        TEXT("*.uplugin"),
        true,
        false,
        false);

    for (const FString& DescriptorFile : ModDescriptorFiles)
    {
        FText AddFailure;
        if (!IPluginManager::Get().AddToPluginsList(
                DescriptorFile,
                &AddFailure))
        {
            UE_LOG(
                LogCrimeForge,
                Warning,
                TEXT(
                    "CrimeForge could not register mod descriptor '%s': %s"
                ),
                *DescriptorFile,
                *AddFailure.ToString());
        }
    }

    /*
     * Do not use GetEnabledPlugins() for the CrimeForge browser. A just-created
     * plugin can be fully discovered and mounted but not yet reflected in the
     * enabled-plugin cache until project state is flushed/reloaded.
     *
     * We only render entries physically under <Project>/Mods anyway, so
     * GetDiscoveredPlugins() is the correct source for this UI.
     */
    TArray<TSharedRef<IPlugin>> CandidatePlugins =
        IPluginManager::Get().GetDiscoveredPlugins();

    for (TSharedRef<IPlugin> Plugin : CandidatePlugins) {
        /*
         * Remove deleted mods from the CrimeForge list immediately, even if
         * IPluginManager still has a stale in-memory entry for a frame.
         */
        FString PluginBaseDir =
            FPaths::ConvertRelativePathToFull(Plugin->GetBaseDir());

        FString NormalizedProjectModsDir = ProjectModsDir;
        FPaths::NormalizeDirectoryName(PluginBaseDir);
        FPaths::NormalizeDirectoryName(NormalizedProjectModsDir);

        const FString ProjectModsPrefix =
            NormalizedProjectModsDir.EndsWith(TEXT("/"))
                ? NormalizedProjectModsDir
                : NormalizedProjectModsDir + TEXT("/");

        const bool bLivesInProjectMods =
            PluginBaseDir.StartsWith(
                ProjectModsPrefix,
                ESearchCase::IgnoreCase);

        if (bLivesInProjectMods &&
            !IFileManager::Get().DirectoryExists(*PluginBaseDir))
        {
            continue;
        }

        //Only include project plugins for now
        //TODO make sure UAT task supports engine plugins
        if (bLivesInProjectMods ||
            (bShowEngine && Plugin->GetType() == EPluginType::Engine) ||
            (bShowProject && Plugin->GetType() == EPluginType::Project) ||
            Plugin->GetType() == EPluginType::Mod) {
            
            const bool bHasRuntime = DoesPluginHaveRuntime(Plugin.Get());
            if (bHasRuntime) {
                Mods.Add(Plugin);
            }
        }
    }
    Mods.Sort([](const TSharedRef<IPlugin> Plugin1, const TSharedRef<IPlugin> Plugin2) {
        return Plugin1->GetName() < Plugin2->GetName();
    });
    Filter(LastFilter);
}

bool PluginMatchesSearchTokens(const IPlugin& Plugin, const TArray<FString>& Tokens) {
    const FString PluginName = Plugin.GetName();
    const FString FriendlyName = Plugin.GetDescriptor().FriendlyName;
    const FString Description = Plugin.GetDescriptor().Description;

    for (const FString& Token : Tokens) {
        if (PluginName.Contains(Token) ||
            FriendlyName.Contains(Token) ||
            Description.Contains(Token)) {
            return true;
        }
    }
    return false;
}

void SCrimeForgeModEntryList::Filter(const FString& InFilter) {
    LastFilter = InFilter;
    FilteredMods.Empty();

    if (InFilter.IsEmpty()) {
        FilteredMods = Mods;
    } else {
        // tokenize filter keywords
        TArray<FString> FilterTokens;
        InFilter.ParseIntoArray(FilterTokens, TEXT(" "), true);

        // check each mod for it to contain the tokens
        for (TSharedRef<IPlugin> Mod : Mods) {
            // check each token in mod name
            if (PluginMatchesSearchTokens(Mod.Get(), FilterTokens)) {
                FilteredMods.Add(Mod);
            }
        }
    }

    ModList->RequestListRefresh();
}

FString SCrimeForgeModEntryList::GetLastFilter() const {
    return LastFilter;
}

void SCrimeForgeModEntryList::SetShowEngine(bool bInShowEngine) {
    bShowEngine = bInShowEngine;
    LoadMods();
}

void SCrimeForgeModEntryList::SetShowProject(bool bInShowProject) {
    bShowProject = bInShowProject;
    LoadMods();
}

void SCrimeForgeModEntryList::OnNewPluginCreated(IPlugin& Plugin)
{
    LoadMods();
}

FReply SCrimeForgeModEntryList::PackageAllMods() {
    TSharedPtr<SCrimeForgeModEntry> First;
    TArray<TSharedPtr<SCrimeForgeModEntry>> NextEntries;

    UE_LOG(LogCrimeForge, Display, TEXT("CrimeForge Selected!"));

    for (TSharedRef<IPlugin> Mod : FilteredMods) {
        UE_LOG(LogCrimeForge, Display, TEXT("Collecting Plugin %s!"), *Mod->GetName());

        TSharedPtr<ITableRow> TableRow = ModList->WidgetFromItem(Mod);
        if (!TableRow.IsValid()) {
            UE_LOG(LogCrimeForge, Display, TEXT("TableRow not found!"));
            continue;
        }

        TSharedPtr<SCrimeForgeModEntry> ModEntry = StaticCastSharedPtr<SCrimeForgeModEntry>(TableRow->GetContent());
        if (!ModEntry.IsValid()) {
            UE_LOG(LogCrimeForge, Display, TEXT("TableRow content is not valid!"));
            continue;
        }

        if(!ModEntry->IsSelected()) {
            UE_LOG(LogCrimeForge, Display, TEXT("Plugin is not selected: %s"), * Mod->GetName());
            continue;
        }

        if (!First) {
            First = ModEntry.ToSharedRef();
        } else {
            NextEntries.Add(ModEntry.ToSharedRef());
        }
    }

    if (First) {
        First->PackageMod(NextEntries);
    }

    return FReply::Handled();
}

FReply SCrimeForgeModEntryList::CheckAllMods() {
    for (TSharedRef<IPlugin> Mod : FilteredMods) {
        TSharedPtr<ITableRow> TableRow = ModList->WidgetFromItem(Mod);
        if (!TableRow.IsValid()) {
            UE_LOG(LogCrimeForge, Display, TEXT("TableRow not found!"));
            continue;
        }

        TSharedPtr<SCrimeForgeModEntry> ModEntry = StaticCastSharedPtr<SCrimeForgeModEntry>(TableRow->GetContent());
        if (!ModEntry.IsValid()) {
            UE_LOG(LogCrimeForge, Display, TEXT("TableRow content is not valid!"));
            continue;
        }
        ModEntry->SetSelected(true);
    }
    return FReply::Handled();
}


FReply SCrimeForgeModEntryList::UncheckAllMods() {
    for (TSharedRef<IPlugin> Mod : FilteredMods) {
        TSharedPtr<ITableRow> TableRow = ModList->WidgetFromItem(Mod);
        if (!TableRow.IsValid()) {
            UE_LOG(LogCrimeForge, Display, TEXT("TableRow not found!"));
            continue;
        }

        TSharedPtr<SCrimeForgeModEntry> ModEntry = StaticCastSharedPtr<SCrimeForgeModEntry>(TableRow->GetContent());
        if (!ModEntry.IsValid()) {
            UE_LOG(LogCrimeForge, Display, TEXT("TableRow content is not valid!"));
            continue;
        }
        ModEntry->SetSelected(false);
    }
    return FReply::Handled();
}

FReply SCrimeForgeModEntryList::ImportLegacyMod()
{
    FString ImportedModName;
    FString ImportReport;

    if (FLegacyModImporter::ImportFromFolderDialog(
            ImportedModName,
            ImportReport))
    {
        /*
         * FPluginUtils::CreateAndLoadNewPlugin() gives the importer a valid
         * plugin immediately, but IPluginManager::GetEnabledPlugins() can still
         * be one refresh/frame behind when the modal migration dialog returns.
         *
         * Force PluginManager discovery first, then rebuild the CrimeForge rows.
         */
        const FString ProjectModsDir =
            FPaths::ConvertRelativePathToFull(
                FPaths::Combine(
                    FPaths::ProjectDir(),
                    TEXT("Mods")));

        IPluginManager::Get().AddPluginSearchPath(
            ProjectModsDir,
            true);

        LoadMods();

        /*
         * Do a second refresh on the next game-thread task as well. This covers
         * the UE5.5 case where the plugin descriptor/search-path update is
         * finalized after the import call unwinds.
         */
        TWeakPtr<SCrimeForgeModEntryList> WeakEntryList =
            SharedThis(this);

        AsyncTask(
            ENamedThreads::GameThread,
            [WeakEntryList, ImportedModName]()
            {
                const TSharedPtr<SCrimeForgeModEntryList> PinnedThis =
                    WeakEntryList.Pin();

                if (!PinnedThis.IsValid())
                {
                    return;
                }

                const FString ProjectModsDir =
                    FPaths::ConvertRelativePathToFull(
                        FPaths::Combine(
                            FPaths::ProjectDir(),
                            TEXT("Mods")));

                IPluginManager::Get().AddPluginSearchPath(
                    ProjectModsDir,
                    true);

                PinnedThis->LoadMods();

                UE_LOG(
                    LogCrimeForge,
                    Display,
                    TEXT(
                        "Legacy import UI refresh complete for mod '%s'."
                    ),
                    *ImportedModName);
            });
    }

    return FReply::Handled();
}

FReply SCrimeForgeModEntryList::CreateMod()
{
    FGlobalTabmanager::Get()->TryInvokeTab(FCrimeForgeModule::ModCreatorTabName);
    return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
