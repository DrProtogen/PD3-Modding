#include "Alpakit.h"
#include "AlpakitStyle.h"
#include "AlpakitCommands.h"
#include "AlpakitSettings.h"
#include "AlpakitWidget.h"
#include "ContentBrowserModule.h"
#include "ISettingsContainer.h"
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "LevelEditor.h"
#include "IPluginBrowser.h"
#include "ModWizardDefinition.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetRegistry/IAssetRegistry.h"
#include "Engine/AssetManager.h"
#include "Engine/AssetManagerSettings.h"
#include "Engine/Engine.h"
#include "Engine/PrimaryAssetLabel.h"
#include "Misc/ConfigCacheIni.h"
#include "Misc/Paths.h"

static const FName AlpakitTabName("Alpakit");

#define LOCTEXT_NAMESPACE "FAlpakitModule"

DEFINE_LOG_CATEGORY(LogAlpakit)

const FName FAlpakitModule::ModCreatorTabName(TEXT("ModCreator"));

void FAlpakitModule::StartupModule() {
    //Register editor settings
    RegisterSettings();

    //Register mod templates
    RegisterModTemplates();

    //Initialize Slate stuff, including commands
    FAlpakitStyle::Initialize();
    FAlpakitStyle::ReloadTextures();
    FAlpakitCommands::Register();
    
    PluginCommands = MakeShareable(new FUICommandList);
    PluginCommands->MapAction(
        FAlpakitCommands::Get().OpenPluginWindow,
        FExecuteAction::CreateLambda([](){
            FGlobalTabmanager::Get()->TryInvokeTab(AlpakitTabName);
        }),
        FCanExecuteAction());
    FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
    
    //Register Alpakit Settings in Editor's Project Menu
    TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
    MenuExtender->AddMenuExtension(TEXT("FileProject"), EExtensionHook::After, PluginCommands,
        FMenuExtensionDelegate::CreateLambda([](FMenuBuilder& Builder){
            Builder.AddMenuEntry(FAlpakitCommands::Get().OpenPluginWindow);
        }));
    LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
    
    //Register Alpakit Settings in Editor's Toolbar
    TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
    ToolbarExtender->AddToolBarExtension(TEXT("Play"), EExtensionHook::After, PluginCommands,
        FToolBarExtensionDelegate::CreateLambda([](FToolBarBuilder& Builder) {
            Builder.AddToolBarButton(FAlpakitCommands::Get().OpenPluginWindow);
        }));
    LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);

    //Register normal alpakit settings tab spawner
    FGlobalTabmanager::Get()->RegisterNomadTabSpawner(AlpakitTabName,
        FOnSpawnTab::CreateLambda([](const FSpawnTabArgs&){
            const TSharedRef<SAlpakitWidget> AlpakitWidget = SNew(SAlpakitWidget);
            return SNew(SDockTab)
                .TabRole(NomadTab)
                // TODO: Save settings when tab is closed automatically
                //.OnTabClosed_Lambda([AlpakitWidget](TSharedRef<SDockTab>) { AlpakitWidget->SaveSettings(); })
                [ AlpakitWidget ];
        }))
        .SetDisplayName(LOCTEXT("FAlpakitTabTitle", "Alpakit"))
        .SetMenuType(ETabSpawnerMenuType::Hidden);
    
    FGlobalTabmanager::Get()->RegisterNomadTabSpawner(
        ModCreatorTabName,
        FOnSpawnTab::CreateRaw(this, &FAlpakitModule::HandleSpawnModCreatorTab))
        .SetDisplayName(LOCTEXT("NewPluginTabHeader", "New Mod"))
        .SetMenuType(ETabSpawnerMenuType::Hidden);
}

void FAlpakitModule::ShutdownModule() {
    if (UObjectInitialized()) {
        UnregisterSettings();
    }
    
    FAlpakitStyle::Shutdown();
    FAlpakitCommands::Unregister();

    FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(AlpakitTabName);
}

TSharedRef<SDockTab> FAlpakitModule::HandleSpawnModCreatorTab(const FSpawnTabArgs& SpawnTabArgs)
{
    IPluginBrowser& PluginBrowser = FModuleManager::Get().GetModuleChecked<IPluginBrowser>(TEXT("PluginBrowser"));
    return PluginBrowser.SpawnPluginCreatorTab(SpawnTabArgs, MakeShared<FModWizardDefinition>());
}

void FAlpakitModule::RegisterSettings() const {
    if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>(TEXT("Settings"))) {
        // Create the new category
        ISettingsContainerPtr SettingsContainer = SettingsModule->GetContainer(TEXT("Project"));
        SettingsContainer->DescribeCategory(TEXT("Alpakit Settings"),
            LOCTEXT("RuntimeWDCategoryName", "Alpakit Settings"),
            LOCTEXT("RuntimeWDCategoryDescription", "Alpakit Settings. Can also be edited in the Alpakit menu"));

        // Register the settings
        ISettingsSectionPtr SettingsSection = SettingsModule->RegisterSettings(TEXT("Project"), TEXT("Alpakit"), TEXT("General"),
            LOCTEXT("RuntimeGeneralSettingsName", "General"),
            LOCTEXT("RuntimeGeneralSettingsDescription", "Alpakit Settings. Can also be edited in the Alpakit menu"),
            UAlpakitSettings::Get()
        );
        // Register the save handler to your settings, you might want to use it to
        // validate those or just act to settings changes.
        if (SettingsSection.IsValid()) {
            SettingsSection->OnModified().BindLambda([](){
                UAlpakitSettings::Get()->SaveSettings();
                return true;
            });
        }
    }
}

void FAlpakitModule::UnregisterSettings() const {
    if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>(TEXT("Settings"))) {
        SettingsModule->UnregisterSettings(TEXT("Project"), TEXT("Alpakit"), TEXT("General"));
    }
}

bool IsPluginAMod(IPlugin& Plugin) {
    //Mod plugins are always considered mods
    if (Plugin.GetType() == EPluginType::Mod) {
        return true;
    }
    //Project plugins are considered mods too, for now
    if (Plugin.GetType() == EPluginType::Project) {
        return true;
    }
    return false;
}

bool FAlpakitModule::RegisterPrimaryAssetLabelsFromPlugin(IPlugin& Plugin)
{
    if (!Plugin.CanContainContent())
    {
        return false;
    }

    UAssetManagerSettings* AssetManagerSettings =
        GetMutableDefault<UAssetManagerSettings>();

    if (!AssetManagerSettings)
    {
        UE_LOG(LogAlpakit, Error,
            TEXT("Unable to get UAssetManagerSettings while registering PALs for %s"),
            *Plugin.GetName());
        return false;
    }

    FPrimaryAssetTypeInfo* PrimaryAssetLabelType =
        AssetManagerSettings->PrimaryAssetTypesToScan.FindByPredicate(
            [](const FPrimaryAssetTypeInfo& TypeInfo)
            {
                return TypeInfo.PrimaryAssetType ==
                    FName(TEXT("PrimaryAssetLabel"));
            });

    if (!PrimaryAssetLabelType)
    {
        UE_LOG(LogAlpakit, Error,
            TEXT("Asset Manager has no PrimaryAssetLabel entry in Primary Asset Types to Scan. "
                 "Create that entry once; Alpakit will manage its Specific Assets automatically."));
        return false;
    }

    FString PluginMountPath = Plugin.GetMountedAssetPath();
    PluginMountPath.RemoveFromEnd(TEXT("/"));

    if (PluginMountPath.IsEmpty())
    {
        return false;
    }

    FAssetRegistryModule& AssetRegistryModule =
        FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));
    IAssetRegistry& AssetRegistry = AssetRegistryModule.Get();

    FARFilter Filter;
    Filter.PackagePaths.Add(FName(*PluginMountPath));
    Filter.ClassPaths.Add(UPrimaryAssetLabel::StaticClass()->GetClassPathName());
    Filter.bRecursivePaths = true;
    Filter.bRecursiveClasses = true;

    TArray<FAssetData> PrimaryAssetLabels;
    AssetRegistry.GetAssets(Filter, PrimaryAssetLabels);

    // FPrimaryAssetTypeInfo keeps Directories/SpecificAssets protected in UE5.5.
    // Work on config copies and rebuild the type info if anything changes.
    const FPrimaryAssetTypeInfo& CurrentTypeInfo = *PrimaryAssetLabelType;
    TArray<FDirectoryPath> Directories = CurrentTypeInfo.GetDirectories();
    TArray<FSoftObjectPath> SpecificAssets = CurrentTypeInfo.GetSpecificAssets();

    bool bChanged = false;

    for (const FAssetData& AssetData : PrimaryAssetLabels)
    {
        const FSoftObjectPath PALPath = AssetData.GetSoftObjectPath();

        if (!SpecificAssets.Contains(PALPath))
        {
            SpecificAssets.Add(PALPath);
            bChanged = true;

            UE_LOG(LogAlpakit, Display,
                TEXT("Asset Manager: registered mod PAL as a Specific Asset: %s"),
                *PALPath.ToString());
        }
    }

    if (bChanged)
    {
        UClass* AssetBaseClass =
            CurrentTypeInfo.GetAssetBaseClass().LoadSynchronous();

        if (!AssetBaseClass)
        {
            UE_LOG(LogAlpakit, Error,
                TEXT("Could not load Asset Base Class for PrimaryAssetLabel settings; PAL registration was not saved."));
            return false;
        }

        FPrimaryAssetTypeInfo UpdatedTypeInfo(
            CurrentTypeInfo.PrimaryAssetType,
            AssetBaseClass,
            CurrentTypeInfo.bHasBlueprintClasses,
            CurrentTypeInfo.bIsEditorOnly,
            MoveTemp(Directories),
            MoveTemp(SpecificAssets));

        UpdatedTypeInfo.Rules = CurrentTypeInfo.Rules;
        *PrimaryAssetLabelType = MoveTemp(UpdatedTypeInfo);
    }

    // Alpakit's packaging convention expects PAL_<PluginName> at the root.
    // The registry query above supports PALs anywhere in the mod, but emit a
    // useful message if the conventional PAL was not found.
    const FString ConventionalPALPackage = FString::Printf(
        TEXT("%s/PAL_%s"),
        *PluginMountPath,
        *Plugin.GetName());

    const bool bFoundConventionalPAL = PrimaryAssetLabels.ContainsByPredicate(
        [&ConventionalPALPackage](const FAssetData& AssetData)
        {
            return AssetData.PackageName.ToString().Equals(
                ConventionalPALPackage,
                ESearchCase::IgnoreCase);
        });

    if (!bFoundConventionalPAL)
    {
        UE_LOG(LogAlpakit, Verbose,
            TEXT("No conventional PAL found for %s at %s (other PALs in the plugin are still registered)."),
            *Plugin.GetName(),
            *ConventionalPALPackage);
    }

    return bChanged;
}

void FAlpakitModule::SaveAndRefreshAssetManagerSettings()
{
    UAssetManagerSettings* AssetManagerSettings =
        GetMutableDefault<UAssetManagerSettings>();

    if (!AssetManagerSettings)
    {
        return;
    }

    // Persist to the project's source DefaultGame.ini, not only the generated
    // editor Game.ini. This is important because PASS 2 runs in a separate
    // cook commandlet process and must see the same Specific Assets list.
    const FString DefaultGameIni = FPaths::Combine(
        FPaths::ProjectConfigDir(),
        TEXT("DefaultGame.ini"));

    AssetManagerSettings->SaveConfig(CPF_Config, *DefaultGameIni);

    if (GConfig)
    {
        GConfig->Flush(false, DefaultGameIni);
    }

#if WITH_EDITOR
    /*
     * Alpakit can reach this function from StartupModule(), before GEngine and
     * UAssetManager have finished initializing. Calling ReinitializeFromConfig()
     * that early crashes inside Engine.
     *
     * The config/CDO has already been updated above, so during early startup the
     * normal Asset Manager initialization will consume the new settings. For
     * mods mounted later in an already-running editor, refresh immediately.
     */
    if (GEngine != nullptr && UAssetManager::IsInitialized())
    {
        UAssetManager::Get().ReinitializeFromConfig();

        UE_LOG(
            LogAlpakit,
            Verbose,
            TEXT("Asset Manager already initialized; refreshed Primary Asset configuration.")
        );
    }
    else
    {
        UE_LOG(
            LogAlpakit,
            Display,
            TEXT("Asset Manager is not initialized yet; PAL configuration was saved and will be picked up during normal initialization.")
        );
    }
#endif

    UE_LOG(LogAlpakit, Display,
        TEXT("Asset Manager PAL registration saved to %s"),
        *DefaultGameIni);
}

void FAlpakitModule::RegisterModTemplates() {
    bool bAssetManagerChanged = false;

    TArray<TSharedRef<IPlugin>> EnabledPlugins = IPluginManager::Get().GetEnabledPlugins();
    for (TSharedRef<IPlugin> Plugin : EnabledPlugins) {
        if (IsPluginAMod(Plugin.Get())) {
            bAssetManagerChanged |= RegisterPrimaryAssetLabelsFromPlugin(Plugin.Get());
            AddModTemplatesFromPlugin(Plugin.Get());
        }
    }

    if (bAssetManagerChanged)
    {
        SaveAndRefreshAssetManagerSettings();
    }

    IPluginManager::Get().OnNewPluginMounted().AddLambda([this](IPlugin& Plugin){
        if (IsPluginAMod(Plugin)) {
            if (RegisterPrimaryAssetLabelsFromPlugin(Plugin))
            {
                SaveAndRefreshAssetManagerSettings();
            }
            AddModTemplatesFromPlugin(Plugin);
        }
    });
}

void FAlpakitModule::AddModTemplatesFromPlugin(IPlugin& Plugin) {
    FString TemplatesPath = Plugin.GetBaseDir() / TEXT("Templates");
    if (!FPaths::DirectoryExists(TemplatesPath)) {
        return;
    }
    FString TemplatesJSONPath = TemplatesPath / TEXT("templates.json");
    if (!FPaths::FileExists(TemplatesJSONPath)) {
        return;
    }
    FString TemplatesJSON;
    if (!FFileHelper::LoadFileToString(TemplatesJSON, *TemplatesJSONPath)) {
        return;
    }
    const TSharedRef<TJsonReader<>> JsonReader = TJsonReaderFactory<>::Create(TemplatesJSON);
    TSharedPtr<FJsonObject> TemplatesJSONObj;
    if (!FJsonSerializer::Deserialize(JsonReader, TemplatesJSONObj)) {
        UE_LOG(LogAlpakit, Error, TEXT("Invalid templates for mod %s: invalid json"), *Plugin.GetName());
        return;
    }

    const TArray<TSharedPtr<FJsonValue>>* TemplatesArrayPtr;
    if(!TemplatesJSONObj->TryGetArrayField(TEXT("templates"), TemplatesArrayPtr)) {
        UE_LOG(LogAlpakit, Error, TEXT("Invalid templates for mod %s: \"templates\" not in json"), *Plugin.GetName());
        return;
    }
    int i = 0;
    for(TSharedPtr<FJsonValue> Item : *TemplatesArrayPtr)
    {
        i++;
        const TSharedPtr<FJsonObject>* ItemObjPtr;
        if(!Item->TryGetObject(ItemObjPtr)) {
            UE_LOG(LogAlpakit, Error, TEXT("Invalid template for mod %s: template %d: not an object"), *Plugin.GetName(), i);
            continue;
        }

        FString Error;
        TSharedPtr<FModTemplateDescription> ModTemplate = FModTemplateDescription::Load(*ItemObjPtr, TemplatesPath, Error);
        if(!ModTemplate.IsValid())
        {
            UE_LOG(LogAlpakit, Error, TEXT("Invalid templates for mod %s: template %d: %s"), *Plugin.GetName(), i, *Error);
            continue;
        }
        ModTemplates.Add(ModTemplate.ToSharedRef());
    }    
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FAlpakitModule, Alpakit)