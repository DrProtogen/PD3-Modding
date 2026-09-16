#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CrimeForgeSettings.generated.h"

UENUM()
enum class ECrimeForgeStartGameType : uint8 {
    NONE = 0 UMETA(DisplayName = "Do not launch"),
    STEAM = 1 UMETA(DisplayName = "Steam"),
    MICROSOFT_STORE = 2 UMETA(DisplayName = "Microsoft Store / Xbox"),
    EPIC_GAMES = 3 UMETA(DisplayName = "Epic Games Store"),
};

/* Legacy importer setting structs are kept here so existing config can be migrated into the
 * unified CrimeForge settings object without keeping a second visible Project Settings page. */
USTRUCT()
struct CRIMEFORGE_API FRAnimationBlueprintSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Config)
    bool NodeIDComments = false;
};

USTRUCT()
struct CRIMEFORGE_API FRTextureSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Config)
    bool ReflectExistingTextures = false;
};

USTRUCT()
struct CRIMEFORGE_API FRMaterialSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Config)
    bool Stubs = false;
};

USTRUCT()
struct CRIMEFORGE_API FRSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Config)
    FRAnimationBlueprintSettings AnimationBlueprint;

    UPROPERTY(EditAnywhere, Config)
    FRTextureSettings Texture;

    UPROPERTY(EditAnywhere, Config)
    FRMaterialSettings Material;

    UPROPERTY(EditAnywhere, Config)
    bool SaveAssets = false;

    UPROPERTY(EditAnywhere, Config)
    bool AutoFormatBlueprintGraphs = true;

    UPROPERTY(EditAnywhere, Config)
    bool ImportBlueprintDependenciesBeforeGraphs = true;
};

/**
 * Single Project Settings object for all CrimeForge configuration.
 *
 * It is registered manually under Project Settings -> Plugins -> CrimeForge so the editor shows
 * one CrimeForge page with normal expandable categories instead of separate General and JSON
 * Importer entries.
 */
UCLASS(config = EditorPerProjectUserSettings)
class CRIMEFORGE_API UCrimeForgeSettings : public UObject
{
    GENERATED_BODY()

public:
    static UCrimeForgeSettings* Get();
    static bool AreExperimentalFeaturesEnabled();
    void SaveSettings();

    /* General ------------------------------------------------------------------------------ */

    UPROPERTY(EditAnywhere, Config, Category = "General|PAYDAY 3", meta = (DisplayName = "PAYDAY 3 Game Path"))
    FDirectoryPath PD3GamePath;

    UPROPERTY(EditAnywhere, Config, Category = "General|PAYDAY 3", meta = (DisplayName = "Copy Mods To Game"))
    bool bCopyModsToGame = false;

    UPROPERTY(EditAnywhere, Config, Category = "General|PAYDAY 3", meta = (DisplayName = "Launch Game After Packing"))
    ECrimeForgeStartGameType LaunchGameAfterPacking = ECrimeForgeStartGameType::NONE;

    UPROPERTY(EditAnywhere, Config, Category = "Experimental", meta = (DisplayName = "Enable Experimental Features", ToolTip = "Enables experimental PAYDAY 3 asset reading/importing features and shows the JSON Import toolbar button. Disabled by default."))
    bool bEnableExperimentalFeatures = false;

    /* JSON Importer ------------------------------------------------------------------------ */

    UPROPERTY(EditAnywhere, Config, Category = "JSON Importer|PAYDAY 3 Data", meta = (DisplayName = "Mappings File", FilePathFilter = "usmap", ToolTip = "PAYDAY 3 .usmap mappings used by AssetReader/CUE4Parse."))
    FFilePath MappingsFile;

    UPROPERTY(EditAnywhere, Config, Category = "JSON Importer|PAYDAY 3 Data", meta = (DisplayName = "AES Key", PasswordField = "true", ToolTip = "PAYDAY 3 AES key used to decrypt encrypted .pak/.utoc/.ucas containers. Paste the full 256-bit key here. Leave blank only if the installed game data is not encrypted."))
    FString AESKey;

    UPROPERTY(EditAnywhere, Config, Category = "JSON Importer|Import", meta = (DisplayName = "Save Imported Assets"))
    bool bSaveImportedAssets = false;

    UPROPERTY(EditAnywhere, Config, Category = "JSON Importer|Import", AdvancedDisplay, meta = (DisplayName = "Auto Format Blueprint Graphs"))
    bool bAutoFormatBlueprintGraphs = true;

    UPROPERTY(EditAnywhere, Config, Category = "JSON Importer|Import", AdvancedDisplay, meta = (DisplayName = "Import Blueprint Dependencies Before Graphs"))
    bool bImportBlueprintDependenciesBeforeGraphs = true;

    UPROPERTY(EditAnywhere, Config, Category = "JSON Importer|Textures", AdvancedDisplay, meta = (DisplayName = "Reimport Existing Textures", ToolTip = "Import textures even when they already exist. This can significantly increase import time."))
    bool bReflectExistingTextures = false;

    UPROPERTY(EditAnywhere, Config, Category = "JSON Importer|Materials", AdvancedDisplay, meta = (DisplayName = "Create Material Stubs"))
    bool bCreateMaterialStubs = false;

    UPROPERTY(EditAnywhere, Config, Category = "JSON Importer|Blueprints", AdvancedDisplay, meta = (DisplayName = "Store Animation Blueprint Node IDs In Comments"))
    bool bAnimationBlueprintNodeIdComments = false;

    UPROPERTY(EditAnywhere, Config, Category = "JSON Importer|Experimental", AdvancedDisplay, meta = (DisplayName = "Enable Experiments"))
    bool bEnableImporterExperiments = false;

    /* Internal state ----------------------------------------------------------------------- */

    UPROPERTY(Config)
    TMap<FString, bool> ModSelection;

    UPROPERTY(Config)
    bool bMigratedLegacyJsonImporterSettings = false;

    UPROPERTY(Config)
    bool bMigratedLegacyCrimeForgeGameSettings = false;
};
