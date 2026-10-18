#pragma once

#include "CoreMinimal.h"

class IPlugin;
class UModMetadataObject;

/** Shared editor metadata only. Never regenerates Mod Actors, Heists or other gameplay data. */
namespace CrimeFactoryMetadataSync
{
    void Initialize();
    void Shutdown();
    void FlushPending();
    bool Synchronize(IPlugin& Plugin, bool bSaveAsset, FString& OutError);
    bool ReloadDescriptor(IPlugin& Plugin, FString& OutError);
    void PopulateProperties(IPlugin& Plugin, UModMetadataObject& Properties);

    /** Also used by focused tests with a real PDA_ModMeta instance. */
    bool SynchronizeAsset(IPlugin& Plugin, UObject& Asset, bool bSaveAsset, FString& OutError);
}
