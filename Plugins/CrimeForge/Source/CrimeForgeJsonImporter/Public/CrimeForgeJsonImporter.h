

#pragma once

#include "CoreMinimal.h"
#include "Modules/Toolbar/Toolbar.h"
#include "Engine/Compatibility.h"

#if ENGINE_UE4
#include "Modules/ModuleInterface.h"
#endif

struct GitHub {
    static inline FString URL = "https://github.com/JsonAsAsset/Reflection";
    
    struct README {
        static inline FString Link = URL + "?tab=readme-ov-file#asset-types";
        static inline FString AssetTypes = Link + "#asset-types";
        static inline FString AssetBackend = URL + "#asset-backend";
    };
};


class FCrimeForgeJsonImporterModule : public IModuleInterface {
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
    UCrimeForgeJsonImporterToolbar* Toolbar = nullptr;
};