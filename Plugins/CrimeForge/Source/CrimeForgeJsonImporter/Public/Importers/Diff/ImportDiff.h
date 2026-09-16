#pragma once

#include "CoreMinimal.h"

struct FUObjectExport;
struct FUObjectExportContainer;

struct FCrimeForgeImportDiffResult {
	bool bHasExistingAsset = false;
	bool bSourceHashMatches = false;
	bool bModifiedSinceLastImport = false;
	bool bHasMeaningfulDifference = true;
	int32 ComparedProperties = 0;
	int32 ChangedProperties = 0;
	int32 ComplexProperties = 0;
	int32 SourceComponents = INDEX_NONE;
	int32 ExistingComponents = INDEX_NONE;
	int32 SourceVariables = INDEX_NONE;
	int32 ExistingVariables = INDEX_NONE;
	int32 SourceFunctions = INDEX_NONE;
	int32 ExistingFunctions = INDEX_NONE;
	FString SourceHash;
	FString Summary;
};

/* Non-destructive comparison used before a replacement prompt. Primitive/default properties are
 * compared directly; Blueprints additionally compare variables/components/functions. Complex
 * fields that cannot be compared safely are counted and reported rather than guessed. */
class CRIMEFORGEJSONIMPORTER_API FCrimeForgeImportDiff {
public:
	static FCrimeForgeImportDiffResult Compare(const FString& ObjectPath, const FString& Type, FUObjectExport* IncomingExport, FUObjectExportContainer* Container);
	static FString ComputeSourceHash(FUObjectExportContainer* Container);
	static FString ReadStoredSourceHash(UObject* ExistingAsset);
	static void StoreProvenance(UObject* Asset, const FString& SourceHash, const FString& SourceType);
};
