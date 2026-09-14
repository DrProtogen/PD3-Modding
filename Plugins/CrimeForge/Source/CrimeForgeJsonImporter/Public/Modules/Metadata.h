

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/IPluginManager.h"

extern FName GCrimeForgeJsonImporterName;

/* Caches basic metadata about CrimeForge JSON Importer */
struct FRMetadata {
	static TSharedPtr<IPlugin> Plugin;
	static FString Version;

	static void Initialize();
};