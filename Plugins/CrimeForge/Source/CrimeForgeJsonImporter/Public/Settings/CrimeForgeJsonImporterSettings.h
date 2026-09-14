

#pragma once

#include "CoreMinimal.h"
#include "CrimeForgeSettings.h"
#include "CrimeForgeJsonImporterSettings.generated.h"

/**
 * Hidden compatibility object used only to read settings saved by older CrimeForge builds.
 *
 * This intentionally does not derive from UDeveloperSettings, so it does not create a second
 * Project Settings entry. Values are migrated once into UCrimeForgeSettings by the importer module.
 */
UCLASS(Config = EditorPerProjectUserSettings)
class CRIMEFORGEJSONIMPORTER_API UCrimeForgeJsonImporterSettings : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(Config)
    FFilePath MappingsFile;

    UPROPERTY(Config)
    FString AESKey;

    UPROPERTY(Config)
    FRSettings AssetSettings;

    UPROPERTY(Config)
    bool EnableExperiments = false;
};
