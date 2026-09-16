#pragma once

#include "CoreMinimal.h"
#include "Importers/Constructor/ImportConflict.h"
#include "Modules/Tools/ToolBase.h"

/* Imports assets straight out of the asset backend by path. */
class TToolImportFromPath : public TToolBase {
public:
	void Execute();

	/* Imports every queued path from the non-modal importer window. */
	static void ImportPaths(
		const TArray<FString>& Paths,
		bool bImportReferencesRecursively = true,
		ECrimeForgeImportMode Mode = ECrimeForgeImportMode::Update,
		bool bResetDiagnostics = true);

	/* Imports one asset. False when the backend has nothing at that path, the user skipped it,
	 * it was already up to date, or reconstruction failed. Diagnostics distinguish those cases. */
	static bool Import(const FString& InPath, bool bImportReferencesRecursively = true);
};
