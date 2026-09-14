

#include "Modules/Metadata.h"

#include "Interfaces/IPluginManager.h"
#include "Engine/EngineUtilities.h"

FName GCrimeForgeJsonImporterName = FName("CrimeForge");

TSharedPtr<IPlugin> FRMetadata::Plugin = nullptr;
FString FRMetadata::Version = "";

void FRMetadata::Initialize() {
    Plugin = GetPlugin(GCrimeForgeJsonImporterName.ToString());
    Version = Plugin->GetDescriptor().VersionName;
}
