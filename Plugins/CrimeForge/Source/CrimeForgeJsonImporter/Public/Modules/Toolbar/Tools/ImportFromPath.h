

#pragma once

#include "CoreMinimal.h"
#include "Modules/Tools/ToolBase.h"

/* Imports assets straight out of the asset backend by path.
 *
 * Everything else in CrimeForge JSON Importer starts from something already in the project: a selected asset, a
 * folder of json, a reference another import ran into. This one starts from the path alone, which
 * is the only way to reach an asset nothing in the project points at yet. */
class TToolImportFromPath : public TToolBase {
public:
	void Execute();

	/* Imports every queued path from the non-modal importer window. */
	static void ImportPaths(const TArray<FString>& Paths);

	/* Imports one asset. The path can be in either asset-backend or editor form, with or without an extension, an export name or a Type'...' wrapper around it.
	 * False when the asset backend has nothing at that path, or the import itself failed. */
	static bool Import(const FString& InPath);
};
