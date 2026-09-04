#include "ModWizardDefinition.h"

#include "Alpakit.h"
#include "AlpakitSettings.h"
#include "Dom/JsonObject.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Features/IPluginsEditorFeature.h"
#include "GenericPlatform/GenericPlatformFile.h"
#include "Interfaces/IPluginManager.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/App.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/IAssetRegistry.h"   
#include "UObject/SavePackage.h"
#include "Modules/ModuleManager.h"
#include "PluginDescriptor.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"
#include "Subsystems/EditorAssetSubsystem.h"
#include "Engine/PrimaryAssetLabel.h"
#include "EditorAssetLibrary.h"

#define LOCTEXT_NAMESPACE "NewModWizard"


namespace
{
	static bool EnsurePDMLDependencyInUPlugin(
		const FString& PluginDescriptorFileName,
		const FString& PluginName)
	{
		if (PluginName.Equals(TEXT("PDML"), ESearchCase::IgnoreCase))
		{
			return true;
		}

		const FString PDMLPluginName = TEXT("PDML");
		FString PDMLSemVersion;

		if (const TSharedPtr<IPlugin> PDMLPlugin =
				IPluginManager::Get().FindPlugin(PDMLPluginName);
			PDMLPlugin.IsValid())
		{
			PDMLSemVersion = PDMLPlugin->GetDescriptor().VersionName;
		}
		else
		{
			UE_LOG(
				LogAlpakit,
				Warning,
				TEXT("PDML was not found while creating mod %s. "
					 "The dependency will be written with an empty SemVersion."),
				*PluginName
			);
		}

		FString JsonText;
		if (!FFileHelper::LoadFileToString(JsonText, *PluginDescriptorFileName))
		{
			UE_LOG(
				LogAlpakit,
				Error,
				TEXT("Failed to read new mod descriptor: %s"),
				*PluginDescriptorFileName
			);
			return false;
		}

		TSharedPtr<FJsonObject> RootObject;
		const TSharedRef<TJsonReader<>> Reader =
			TJsonReaderFactory<>::Create(JsonText);

		if (!FJsonSerializer::Deserialize(Reader, RootObject) ||
			!RootObject.IsValid())
		{
			UE_LOG(
				LogAlpakit,
				Error,
				TEXT("Failed to parse new mod descriptor JSON: %s"),
				*PluginDescriptorFileName
			);
			return false;
		}

		TArray<TSharedPtr<FJsonValue>> PluginDependencies;
		const TArray<TSharedPtr<FJsonValue>>* ExistingDependencies = nullptr;

		if (RootObject->TryGetArrayField(
				TEXT("Plugins"),
				ExistingDependencies) &&
			ExistingDependencies)
		{
			PluginDependencies = *ExistingDependencies;
		}

		TSharedPtr<FJsonObject> PDMLDependencyObject;

		for (const TSharedPtr<FJsonValue>& DependencyValue :
			 PluginDependencies)
		{
			if (!DependencyValue.IsValid())
			{
				continue;
			}

			const TSharedPtr<FJsonObject>* DependencyObjectPtr = nullptr;
			if (!DependencyValue->TryGetObject(DependencyObjectPtr) ||
				!DependencyObjectPtr ||
				!DependencyObjectPtr->IsValid())
			{
				continue;
			}

			FString DependencyName;
			if ((*DependencyObjectPtr)->TryGetStringField(
					TEXT("Name"),
					DependencyName) &&
				DependencyName.Equals(
					PDMLPluginName,
					ESearchCase::IgnoreCase))
			{
				PDMLDependencyObject = *DependencyObjectPtr;
				break;
			}
		}

		if (!PDMLDependencyObject.IsValid())
		{
			PDMLDependencyObject = MakeShared<FJsonObject>();
			PluginDependencies.Add(
				MakeShared<FJsonValueObject>(PDMLDependencyObject)
			);
		}

		PDMLDependencyObject->SetStringField(
			TEXT("Name"),
			PDMLPluginName
		);
		PDMLDependencyObject->SetBoolField(
			TEXT("Enabled"),
			true
		);
		PDMLDependencyObject->SetStringField(
			TEXT("SemVersion"),
			PDMLSemVersion
		);

		// Make PDML a hard dependency if an old optional entry was present.
		PDMLDependencyObject->RemoveField(TEXT("Optional"));

		RootObject->SetArrayField(
			TEXT("Plugins"),
			PluginDependencies
		);

		FString UpdatedJson;
		const TSharedRef<TJsonWriter<>> Writer =
			TJsonWriterFactory<>::Create(&UpdatedJson);

		if (!FJsonSerializer::Serialize(
				RootObject.ToSharedRef(),
				Writer))
		{
			UE_LOG(
				LogAlpakit,
				Error,
				TEXT("Failed to serialize new mod descriptor JSON: %s"),
				*PluginDescriptorFileName
			);
			return false;
		}

		if (!FFileHelper::SaveStringToFile(
				UpdatedJson,
				*PluginDescriptorFileName,
				FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM))
		{
			UE_LOG(
				LogAlpakit,
				Error,
				TEXT("Failed to save PDML dependency to: %s"),
				*PluginDescriptorFileName
			);
			return false;
		}

		UE_LOG(
			LogAlpakit,
			Display,
			TEXT("Wrote PDML dependency to %s (SemVersion=%s)"),
			*PluginDescriptorFileName,
			*PDMLSemVersion
		);

		return true;
	}

	class FAlpakitPluginTemplateDescription final : public FPluginTemplateDescription
	{
	public:
		FAlpakitPluginTemplateDescription(
			const FText& InName,
			const FText& InDescription,
			const FString& InOnDiskPath,
			bool bInCanContainContent,
			EHostType::Type InModuleDescriptorType)
			: FPluginTemplateDescription(
				InName,
				InDescription,
				InOnDiskPath,
				bInCanContainContent,
				InModuleDescriptorType)
		{
		}

		virtual void CustomizeDescriptorBeforeCreation(FPluginDescriptor& Descriptor) override
		{
			FPluginTemplateDescription::CustomizeDescriptorBeforeCreation(Descriptor);

			const FString PDMLPluginName = TEXT("PDML");
			FString PDMLSemVersion;

			const TSharedPtr<IPlugin> PDMLPlugin =
				IPluginManager::Get().FindPlugin(PDMLPluginName);

			if (PDMLPlugin.IsValid())
			{
				PDMLSemVersion = PDMLPlugin->GetDescriptor().VersionName;
			}
			else
			{
				UE_LOG(
					LogAlpakit,
					Warning,
					TEXT("PDML was not found while creating a mod. "
						 "The dependency will be created with an empty SemVersion.")
				);
			}

			FPluginReferenceDescriptor* ExistingPDML =
				Descriptor.Plugins.FindByPredicate(
					[&PDMLPluginName](const FPluginReferenceDescriptor& Reference)
					{
						return Reference.Name.Equals(
							PDMLPluginName,
							ESearchCase::IgnoreCase
						);
					}
				);

			if (ExistingPDML)
			{
				ExistingPDML->bEnabled = true;
				ExistingPDML->bOptional = false;
				ExistingPDML->AdditionalFieldsToWrite.Add(
					TEXT("SemVersion"),
					MakeShared<FJsonValueString>(PDMLSemVersion)
				);
			}
			else
			{
				FPluginReferenceDescriptor PDMLDependency(
					PDMLPluginName,
					true
				);

				PDMLDependency.bOptional = false;
				PDMLDependency.AdditionalFieldsToWrite.Add(
					TEXT("SemVersion"),
					MakeShared<FJsonValueString>(PDMLSemVersion)
				);

				Descriptor.Plugins.Add(PDMLDependency);
			}

			UE_LOG(
				LogAlpakit,
				Display,
				TEXT("Pre-creation descriptor: added PDML dependency (SemVersion=%s)"),
				*PDMLSemVersion
			);
		}
	};
}

FModWizardDefinition::FModWizardDefinition()
{
	PluginBaseDir = IPluginManager::Get().FindPlugin(TEXT("Alpakit"))->GetBaseDir();

	ModTemplateDefinitions = FModuleManager::GetModuleChecked<FAlpakitModule>(TEXT("Alpakit")).GetModTemplates();
	for (TSharedRef<FModTemplateDescription> Template : ModTemplateDefinitions)
	{
		TemplateDefinitions.Add(Template->TemplateDescription);
	}
}

const TArray<TSharedRef<FPluginTemplateDescription>>& FModWizardDefinition::GetTemplatesSource() const
{
	return TemplateDefinitions;
}

void FModWizardDefinition::OnTemplateSelectionChanged(TSharedPtr<FPluginTemplateDescription> InSelectedItem, ESelectInfo::Type SelectInfo)
{
	if (InSelectedItem.IsValid())
	{
		TSharedRef<FModTemplateDescription>* Found = ModTemplateDefinitions.FindByPredicate([InSelectedItem](TSharedRef<FModTemplateDescription> Template)
			{ return Template->TemplateDescription == InSelectedItem; });
		if(Found) {
			CurrentTemplateDefinition = *Found;
		}
	}
}

TSharedPtr<FPluginTemplateDescription> FModWizardDefinition::GetSelectedTemplate() const
{
	if(!CurrentTemplateDefinition.IsValid()) {
		return nullptr;
	}
	return CurrentTemplateDefinition->TemplateDescription;
}

bool FModWizardDefinition::HasValidTemplateSelection() const
{
	return CurrentTemplateDefinition.IsValid();
}

void FModWizardDefinition::ClearTemplateSelection()
{
	CurrentTemplateDefinition.Reset();
}

bool FModWizardDefinition::HasModules() const
{
	FString SourceFolderPath = GetPluginFolderPath() / TEXT("Source");
	
	return FPaths::DirectoryExists(SourceFolderPath);
}

bool FModWizardDefinition::IsMod() const
{
	return true;
}

FText FModWizardDefinition::GetInstructions() const
{
	return LOCTEXT("ChooseModTemplate", "Choose a template and then specify a name to create a new mod. Remember, your plugin name (mod reference) can no longer be changed after you release the mod! See the docs for more info.");
}

bool FModWizardDefinition::GetPluginIconPath(FString& OutIconPath) const
{
	if(!CurrentTemplateDefinition.IsValid()) {
		return false;
	}
	return GetTemplateIconPath(CurrentTemplateDefinition.ToSharedRef()->TemplateDescription, OutIconPath);
}

EHostType::Type FModWizardDefinition::GetPluginModuleDescriptor() const
{
	EHostType::Type ModuleDescriptorType = EHostType::Runtime;

	if (CurrentTemplateDefinition.IsValid())
	{
		ModuleDescriptorType = CurrentTemplateDefinition->TemplateDescription->ModuleDescriptorType;
	}

	return ModuleDescriptorType;
}

ELoadingPhase::Type FModWizardDefinition::GetPluginLoadingPhase() const
{
	ELoadingPhase::Type Phase = ELoadingPhase::Default;

	if (CurrentTemplateDefinition.IsValid())
	{
		Phase = CurrentTemplateDefinition->TemplateDescription->LoadingPhase;
	}

	return Phase;
}

bool FModWizardDefinition::GetTemplateIconPath(TSharedRef<FPluginTemplateDescription> Template, FString& OutIconPath) const
{
	bool bRequiresDefaultIcon = false;

	FString TemplateFolderName = GetFolderForTemplate(Template);

	OutIconPath = TemplateFolderName / TEXT("Resources/Icon128.png");
	if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*OutIconPath))
	{
		OutIconPath = PluginBaseDir / TEXT("Resources/DefaultIcon128.png");
		bRequiresDefaultIcon = true;
	}

	return bRequiresDefaultIcon;
}

TArray<FString> FModWizardDefinition::GetFoldersForSelection() const
{
	TArray<FString> SelectedFolders;

	if (CurrentTemplateDefinition.IsValid())
	{
		SelectedFolders.Add(GetFolderForTemplate(CurrentTemplateDefinition.ToSharedRef()->TemplateDescription));
	}

	return SelectedFolders;
}

void FModWizardDefinition::RenameTemplateAssetsForMods(const FString& PluginName) const
{
	UE_LOG(
		LogAlpakit,
		Display,
		TEXT("[TemplatePALFixV2] RenameTemplateAssetsForMods running for '%s'"),
		*PluginName
	);

	// Find the mounted asset path of the target plugin.
	TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(PluginName);
	if (!Plugin.IsValid())
	{
		UE_LOG(LogTemp, Error, TEXT("Plugin not found: %s"), *PluginName);
		return;
	}

	const FString PluginContentPath = Plugin->GetMountedAssetPath();

	/*
	 * A mod plugin has just been copied/created, so do not assume the Asset
	 * Registry has already discovered its template assets. Scan the mounted
	 * plugin root synchronously before trying to find PLACEHOLDER_* assets.
	 */
	FAssetRegistryModule& AssetRegistryModule =
		FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

	TArray<FString> PathsToScan;
	PathsToScan.Add(PluginContentPath);

	AssetRegistry.ScanPathsSynchronous(
		PathsToScan,
		true // bForceRescan
	);

	TArray<FAssetData> AssetDataArray;
	AssetRegistry.GetAssetsByPath(
		FName(*PluginContentPath),
		AssetDataArray,
		true // bRecursive
	);

	UE_LOG(
		LogTemp,
		Log,
		TEXT("Found %d template assets under '%s'."),
		AssetDataArray.Num(),
		*PluginContentPath
	);

	TArray<FAssetRenameData> RenameDataList;

	for (const FAssetData& AssetData : AssetDataArray)
	{
		const FString OldName = AssetData.AssetName.ToString();

		// Check if asset name starts with "PLACEHOLDER_" and ends with "MODNAME".
		if (OldName.StartsWith(TEXT("PLACEHOLDER_")) &&
			OldName.EndsWith(TEXT("MODNAME")))
		{
			// Remove prefix "PLACEHOLDER_".
			FString NewName = OldName.RightChop(12);

			// Remove suffix "MODNAME".
			NewName = NewName.LeftChop(7);

			// Append the actual plugin name.
			NewName += PluginName;

			UObject* Asset = AssetData.GetAsset();
			if (!Asset)
			{
				UE_LOG(
					LogTemp,
					Warning,
					TEXT("Could not load template asset '%s' for rename."),
					*AssetData.GetObjectPathString()
				);
				continue;
			}

			RenameDataList.Add(
				FAssetRenameData(
					Asset,
					AssetData.PackagePath.ToString(),
					NewName
				)
			);
		}
	}

	if (RenameDataList.Num() > 0)
	{
		// Use AssetTools to rename assets and update references safely.
		FAssetToolsModule& AssetToolsModule =
			FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

		const bool bRenameSucceeded =
			AssetToolsModule.Get().RenameAssets(RenameDataList);

		if (bRenameSucceeded)
		{
			UE_LOG(
				LogTemp,
				Log,
				TEXT("Renamed %d assets in plugin '%s'."),
				RenameDataList.Num(),
				*PluginName
			);
		}
		else
		{
			UE_LOG(
				LogTemp,
				Error,
				TEXT("One or more template assets failed to rename in plugin '%s'."),
				*PluginName
			);
		}
	}
	else
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT("No assets matched rename criteria in plugin '%s'."),
			*PluginName
		);
	}

	/*
	 * Fix the PAL's explicit DA reference.
	 *
	 * The previous code unconditionally wrote ExplicitAssets[0]. A freshly
	 * created PAL is allowed to have zero explicit assets, which caused:
	 *
	 *   Array index out of bounds: 0 into an array of size 0
	 *
	 * Preserve any additional explicit assets, but create element 0 when the
	 * array is empty.
	 */
	const FString PALName =
		PluginContentPath +
		FString::Printf(TEXT("PAL_%s"), *PluginName);

	UPrimaryAssetLabel* Label =
		Cast<UPrimaryAssetLabel>(
			UEditorAssetLibrary::LoadAsset(*PALName)
		);

	if (!Label)
	{
		UE_LOG(
			LogTemp,
			Error,
			TEXT("Failed to load PrimaryAssetLabel at %s"),
			*PALName
		);
		return;
	}

	const FString DataAssetName =
		PluginContentPath +
		FString::Printf(TEXT("DA_%s"), *PluginName) +
		TEXT(".") +
		FString::Printf(TEXT("DA_%s"), *PluginName);

	const FSoftObjectPath DataAssetPath(*DataAssetName);

	/*
	 * The generated PAL only needs its generated DA as an explicit asset.
	 * Reset + Add avoids ALL direct TArray index access here, so an empty
	 * ExplicitAssets array can never trigger an Array.h bounds assertion.
	 */
	Label->ExplicitAssets.Reset();
	
	const TSoftObjectPtr DataAssetSoftPtr(DataAssetPath);
	Label->ExplicitAssets.Add(DataAssetSoftPtr);

	// Load directly from the soft path rather than indexing ExplicitAssets.
	UObject* LoadedAsset = DataAssetPath.TryLoad();

	if (!LoadedAsset)
	{
		UE_LOG(
			LogTemp,
			Warning,
			TEXT("Failed to load new explicit asset %s"),
			*DataAssetName
		);
	}
	else
	{
		UE_LOG(
			LogTemp,
			Log,
			TEXT("Loaded new explicit asset %s successfully"),
			*DataAssetName
		);
	}

	// Mark package dirty for Editor.
	Label->MarkPackageDirty();

	// Save the updated asset.
	UEditorAssetSubsystem* AssetSubsystem =
		GEditor
			? GEditor->GetEditorSubsystem<UEditorAssetSubsystem>()
			: nullptr;

	if (AssetSubsystem && AssetSubsystem->SaveAsset(*PALName))
	{
		UE_LOG(
			LogTemp,
			Log,
			TEXT("Successfully replaced explicit asset and saved %s"),
			*PALName
		);
	}
	else
	{
		UE_LOG(
			LogTemp,
			Error,
			TEXT("Failed to save PrimaryAssetLabel asset %s"),
			*PALName
		);
	}
}


void FModWizardDefinition::PluginCreated(const FString& PluginName, bool bWasSuccessful) const
{
	if(!bWasSuccessful)
	{
		UE_LOG(LogAlpakit, Error, TEXT("Failed to create mod %s"), *PluginName);
		return;
	}

	TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(PluginName);

	if(!Plugin.IsValid())
	{
		UE_LOG(LogAlpakit, Error, TEXT("Created mod %s was invalid"), *PluginName);
		return;
	}

	/*
	 * Write the dependency directly into the .uplugin JSON.
	 *
	 * In this UE5.5 Alpakit path, FPluginDescriptor::Plugins was not being
	 * persisted even though other descriptor fields (for example SemVersion)
	 * were. Writing the JSON directly makes the dependency deterministic.
	 *
	 * Do this BEFORE RenameTemplateAssetsForMods(), because those template
	 * assets can reference /PDML and AssetReferenceRestrictions needs to see
	 * the dependency first.
	 */
	const FString NewPluginDescriptorFile =
		Plugin->GetDescriptorFileName();

	if (!EnsurePDMLDependencyInUPlugin(
			NewPluginDescriptorFile,
			PluginName))
	{
		UE_LOG(
			LogAlpakit,
			Error,
			TEXT("Unable to add required PDML dependency to mod %s"),
			*PluginName
		);
		return;
	}

	// Reload plugin descriptors so AssetReferenceRestrictions sees PDML as a
	// dependency of the newly-created mod in this same editor session.
	IPluginManager::Get().RefreshPluginsList();
	Plugin = IPluginManager::Get().FindPlugin(PluginName);

	if (!Plugin.IsValid())
	{
		UE_LOG(
			LogAlpakit,
			Error,
			TEXT("Mod %s was not found after refreshing the plugin list"),
			*PluginName
		);
		return;
	}

	// Initialize required fields
	FPluginDescriptor Descriptor = Plugin->GetDescriptor();
	if (Descriptor.FriendlyName.IsEmpty()) {
		Descriptor.FriendlyName = PluginName;
	}
	// Core fields
	Descriptor.Version = 1;
	Descriptor.VersionName = TEXT("1.0.0");
	Descriptor.bCanContainContent = true;
	Descriptor.EnabledByDefault = EPluginEnabledByDefault::Enabled;
	Descriptor.AdditionalFieldsToWrite.Add( TEXT("SemVersion"), MakeShared<FJsonValueString>( TEXT("1.0.0") ) );
	
	// Initialize extra dependencies
	for (const TSharedPtr<FModTemplateDependency>& Dependency : CurrentTemplateDefinition->Dependencies) {
		FPluginReferenceDescriptor DependencyDescriptor(Dependency->Name, true);
		DependencyDescriptor.AdditionalFieldsToWrite.Add( TEXT("SemVersion"), MakeShared<FJsonValueString>( TEXT("^") + Dependency->Version ) );
		if(Dependency->bOptional) {
			DependencyDescriptor.bOptional = true;
		}
		if(Dependency->bBasePlugin) {
			DependencyDescriptor.AdditionalFieldsToWrite.Add( TEXT("BasePlugin"), MakeShared<FJsonValueBoolean>( true ) );
		}
		Descriptor.Plugins.Add(DependencyDescriptor);
	}


	FText FailReason;
	if(!Plugin->UpdateDescriptor(Descriptor, FailReason))
	{
		UE_LOG(LogAlpakit, Error, TEXT("Failed to update descriptor for mod %s: %s"), *PluginName, *FailReason.ToString());
		return;
	}

	// Explicitly update the .uplugin on disk as well. The dependency is already
	// injected before creation, but this makes the post-create path deterministic
	// and preserves any fields written by the Plugin Browser.
	FText PluginFileFailReason;
	if (!Descriptor.UpdatePluginFile(Plugin->GetDescriptorFileName(), PluginFileFailReason))
	{
		UE_LOG(
			LogAlpakit,
			Error,
			TEXT("Failed to write descriptor file for mod %s: %s"),
			*PluginName,
			*PluginFileFailReason.ToString()
		);
		return;
	}

	if (!EnsurePDMLDependencyInUPlugin(
			Plugin->GetDescriptorFileName(),
			PluginName))
	{
		return;
	}

	IPluginManager::Get().RefreshPluginsList();

	UE_LOG(
		LogAlpakit,
		Display,
		TEXT("Verified PDML dependency in descriptor for mod %s: %s"),
		*PluginName,
		*Plugin->GetDescriptorFileName()
	);

	UE_LOG(LogAlpakit, Log, TEXT("Created mod %s"), *PluginName);

	RenameTemplateAssetsForMods(PluginName);
}

FString FModWizardDefinition::GetPluginFolderPath() const
{
	return FPaths::Combine(FPaths::ProjectDir(), TEXT("Mods"));
}

FString FModWizardDefinition::GetFolderForTemplate(TSharedRef<FPluginTemplateDescription> InTemplate) const
{
	return InTemplate->OnDiskPath;
}

TSharedPtr<FModTemplateDependency> FModTemplateDependency::Load(const TSharedPtr<FJsonObject> JSON, FString& Error)
{
	FString DependencyName;
	if(!JSON->TryGetStringField(TEXT("name"), DependencyName)) {
		Error = TEXT("\"name\" not in dependency");
		return nullptr;
	}

	FString DependencyVersion;
	if(!JSON->TryGetStringField(TEXT("version"), DependencyVersion)) {
		TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(DependencyName);
		if(!Plugin.IsValid()) {
			Error = TEXT("\"version\" not in dependency and plugin not installed");
			return nullptr;
		}
		DependencyVersion = Plugin->GetDescriptor().VersionName;
	}

	bool bOptional = false;
	JSON->TryGetBoolField(TEXT("optional"), bOptional);

	bool bBasePlugin = false;
	JSON->TryGetBoolField(TEXT("basePlugin"), bBasePlugin);

	return MakeShareable(new FModTemplateDependency(DependencyName, DependencyVersion, bOptional, bBasePlugin));
}

TSharedPtr<FModTemplateDescription> FModTemplateDescription::Load(const TSharedPtr<FJsonObject> JSON, const FString TemplatesPath, FString& Error)
{
	FString TemplateName;
	if(!JSON->TryGetStringField(TEXT("name"), TemplateName)) {
		Error = TEXT("\"name\" not in template");
		return nullptr;
	}

	FString TemplateDescription;
	if(!JSON->TryGetStringField(TEXT("description"), TemplateDescription)) {
		Error = TEXT("\"description\" not in template");
		return nullptr;
	}

	FString TemplateFolderName;
	if(!JSON->TryGetStringField(TEXT("path"), TemplateFolderName)) {
		Error = TEXT("\"path\" not in template");
		return nullptr;
	}

	TArray<TSharedPtr<FModTemplateDependency>> Dependencies;
	const TArray<TSharedPtr<FJsonValue>>* DependenciesPtr;
	if(JSON->TryGetArrayField(TEXT("dependencies"), DependenciesPtr)) {
		int i = 0;
		for(const TSharedPtr<FJsonValue>& Item : *DependenciesPtr) {
			i++;
			const TSharedPtr<FJsonObject>* DependencyObjPtr;
			if(!Item->TryGetObject(DependencyObjPtr)) {
				Error = FString::Printf(TEXT("dependency %d: not an object"), i);
				return nullptr;
			}

			FString DependencyError;
			TSharedPtr<FModTemplateDependency> Dependency = FModTemplateDependency::Load(*DependencyObjPtr, DependencyError);
			if (!Dependency.IsValid()) {
				Error = FString::Printf(TEXT("dependency %d: %s"), i, *DependencyError);
				return nullptr;
			}
			
			Dependencies.Add(Dependency);
		}
	}

	TSharedRef<FPluginTemplateDescription> PluginTemplateDescription = MakeShareable(new FAlpakitPluginTemplateDescription(
			FText::FromString(TemplateName),
			FText::FromString(TemplateDescription),
			TemplatesPath / TemplateFolderName,
			true,
			EHostType::Runtime));
	PluginTemplateDescription->bCanBePlacedInEngine = false;
    return MakeShareable(new FModTemplateDescription(PluginTemplateDescription, Dependencies));
}

#undef LOCTEXT_NAMESPACE