#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "CrimeFactorySettings.generated.h"

UENUM()
enum class ECrimeFactoryStartGameType : uint8 {
    NONE = 0 UMETA(DisplayName = "Do not launch"),
    STEAM = 1 UMETA(DisplayName = "Steam"),
    MICROSOFT_STORE = 2 UMETA(DisplayName = "Microsoft Store / Xbox"),
    EPIC_GAMES = 3 UMETA(DisplayName = "Epic Games Store"),
};

/**
 * Single Project Settings object for all CrimeFactory configuration.
 *
 * It is registered manually under Project Settings -> Plugins -> CrimeFactory so the editor shows
 * one CrimeFactory page with normal expandable categories.
 */
UCLASS(config = EditorPerProjectUserSettings)
class CRIMEFACTORY_API UCrimeFactorySettings : public UObject
{
    GENERATED_BODY()

public:
    static UCrimeFactorySettings* Get();
    void SaveSettings();
    static void OnCookedEditorSettingsChanged(UObject* Object, FPropertyChangedEvent& Event);

    virtual bool CanEditChange(const FProperty* Property) const override;

    /* General ------------------------------------------------------------------------------ */

    UPROPERTY(EditAnywhere, Config, Category = "General|PAYDAY 3", meta = (DisplayName = "PAYDAY 3 Game Path", ToolTip = "Uses the PAYDAY 3 Cooked Editor installation directory when configured. Otherwise, choose a game directory here."))
    FDirectoryPath PD3GamePath;

    UPROPERTY(EditAnywhere, Config, Category = "General|PAYDAY 3", meta = (DisplayName = "Copy Mods To Game"))
    bool bCopyModsToGame = false;

    UPROPERTY(EditAnywhere, Config, Category = "General|PAYDAY 3", meta = (DisplayName = "Launch Game After Packing"))
    ECrimeFactoryStartGameType LaunchGameAfterPacking = ECrimeFactoryStartGameType::NONE;

    /* Internal state ----------------------------------------------------------------------- */

    UPROPERTY(Config)
    TMap<FString, bool> ModSelection;

    UPROPERTY(Config)
    bool bMigratedLegacyCrimeFactoryGameSettings = false;

private:
    bool UpdateGamePathFromCookedEditor();
};
