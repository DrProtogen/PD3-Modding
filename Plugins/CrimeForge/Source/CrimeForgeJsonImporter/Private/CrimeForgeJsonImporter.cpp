

#include "CrimeForgeJsonImporter.h"

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if ENGINE_UE4
#if !UE4_23_BELOW
#include "ToolMenus.h"
#endif
#include "LevelEditor.h"
#endif

#include "Http.h"

#include "Modules/UI/StyleModule.h"
#include "Modules/UI/Validation/ValidationTab.h"
#include "Modules/UI/Import/SImportPathsDialog.h"
#include "Modules/Toolbar/Toolbar.h"
#include "Engine/EngineUtilities.h"
#include "Modules/AssetBackend/AssetBackend.h"
#include "Modules/AssetReader/AssetReader.h"
#include "Importers/Cache/ImportDependencyCache.h"

#include "Logging/LogVerbosity.h"
#include "JsonGlobals.h"
#include "Settings/Runtime.h"
#include "Settings/CrimeForgeJsonImporterSettings.h"
#include "CrimeForgeSettings.h"
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#ifdef _MSC_VER
#undef GetObject
#endif

namespace
{
    void MigrateLegacyJsonImporterSettings()
    {
        UCrimeForgeSettings* UnifiedSettings = UCrimeForgeSettings::Get();
        if (!UnifiedSettings || UnifiedSettings->bMigratedLegacyJsonImporterSettings)
        {
            return;
        }

        const UCrimeForgeJsonImporterSettings* LegacySettings = GetDefault<UCrimeForgeJsonImporterSettings>();
        if (LegacySettings)
        {
            UnifiedSettings->MappingsFile = LegacySettings->MappingsFile;
            UnifiedSettings->AESKey = LegacySettings->AESKey;
            UnifiedSettings->bSaveImportedAssets = LegacySettings->AssetSettings.SaveAssets;
            UnifiedSettings->bAutoFormatBlueprintGraphs = LegacySettings->AssetSettings.AutoFormatBlueprintGraphs;
            UnifiedSettings->bImportBlueprintDependenciesBeforeGraphs = LegacySettings->AssetSettings.ImportBlueprintDependenciesBeforeGraphs;
            UnifiedSettings->bReflectExistingTextures = LegacySettings->AssetSettings.Texture.ReflectExistingTextures;
            UnifiedSettings->bCreateMaterialStubs = LegacySettings->AssetSettings.Material.Stubs;
            UnifiedSettings->bAnimationBlueprintNodeIdComments = LegacySettings->AssetSettings.AnimationBlueprint.NodeIDComments;
            UnifiedSettings->bEnableImporterExperiments = LegacySettings->EnableExperiments;
        }

        UnifiedSettings->bMigratedLegacyJsonImporterSettings = true;
        UnifiedSettings->SaveSettings();
    }
}

void FCrimeForgeJsonImporterModule::StartupModule() {
	MigrateLegacyJsonImporterSettings();
	FCrimeForgeImportDependencyCache::Load();

	LogHttp.SetVerbosity(ELogVerbosity::Error);

	/* Exports are read by asking for fields that may not be there, which is how the reader tells
	 * an absent one from an empty one. Json warns on every miss, so one import can bury the log
	 * in complaints about something working as intended. */
	LogJson.SetVerbosity(ELogVerbosity::NoLogging);

	FRMetadata::Initialize();
	
    /* Initialize plugin style, reload textures */
    FCrimeForgeJsonImporterStyle::Initialize();
    FCrimeForgeJsonImporterStyle::ReloadTextures();

#if ENGINE_UE5
	FValidationTab::Register();
#endif

	/* The importer is a global nomad tab so it can dock into the editor layout instead of
	 * living in a separate native SWindow. */
	SImportPathsDialog::RegisterTabSpawner();

    /* Register Toolbar */
	Toolbar = NewObject<UCrimeForgeJsonImporterToolbar>();
	Toolbar->AddToRoot();
	
#if ENGINE_UE5
	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateUObject(Toolbar, &UCrimeForgeJsonImporterToolbar::Register));
#else
	{
    	const TSharedPtr<FUICommandList> PluginCommands = MakeShareable(new FUICommandList);

    	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
    	const TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
    	ToolbarExtender->AddToolBarExtension(
			"Settings",
			EExtensionHook::After,
			PluginCommands,
			FToolBarExtensionDelegate::CreateUObject(Toolbar, &UCrimeForgeJsonImporterToolbar::UE4Register)
		);

    	LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
#endif
	
	/* CrimeForge owns plugin versioning; do not check upstream importer releases independently. */
	GCrimeForgeJsonImporterRuntime.Update();
}

void FCrimeForgeJsonImporterModule::ShutdownModule() {
	FCrimeForgeImportDependencyCache::Flush();

	/* The AssetReader provider belongs to this editor module, not a separate Core process. */
	FCrimeForgeAssetReader::Get().Shutdown();

	/* Unregister startup callback and tool menus */
#if !UE4_23_BELOW
	UToolMenus::UnRegisterStartupCallback(this);
	UToolMenus::UnregisterOwner(this);
#endif

	SImportPathsDialog::UnregisterTabSpawner();

#if ENGINE_UE5
	/* The main menu bar entry is owned by the toolbar, not the module */
	if (Toolbar) {
		UToolMenus::UnregisterOwner(Toolbar);
	}

	FValidationTab::Unregister();
#endif

	/* Shutdown the plugin style */
	FCrimeForgeJsonImporterStyle::Shutdown();

	if (Toolbar) {
#if UE4_23_BELOW
		if (!GIsRequestingExit) {
#else
		if (!IsEngineExitRequested()) {
#endif
			Toolbar->RemoveFromRoot();
		}
		Toolbar = nullptr;
	}
}

IMPLEMENT_MODULE(FCrimeForgeJsonImporterModule, CrimeForgeJsonImporter)
