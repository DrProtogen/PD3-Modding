#pragma once

#include "CoreMinimal.h"

struct FUObjectExport;
struct FUObjectExportContainer;

enum class ECrimeForgeImportMode : uint8 {
	Reference,
	Update,
	ForceRebuild
};

/*
 * One conflict policy is shared by a complete user-started import operation. Nested dependency
 * imports join the same policy, which is important for Replace All and the import mode.
 */
class CRIMEFORGEJSONIMPORTER_API FImportConflict {
public:
	static void BeginBatch(ECrimeForgeImportMode Mode = ECrimeForgeImportMode::Update);
	static void EndBatch();

	static bool IsCancelled();
	static void CancelBatch();
	static ECrimeForgeImportMode GetMode();

	/* Returns false when this asset should not be rebuilt. In Update mode an asset whose stored
	 * CrimeForge source fingerprint matches the incoming data is automatically left alone. */
	static bool ShouldImportAsset(
		const FString& ObjectPath,
		const FString& Type,
		FUObjectExport* IncomingExport = nullptr,
		FUObjectExportContainer* Container = nullptr,
		const FString& SourcePath = FString());

	static bool IsReplacementApproved(const FString& ObjectPath);
	static bool WasSkipped(const FString& ObjectPath);
	static bool WasUpToDate(const FString& ObjectPath);
};

class CRIMEFORGEJSONIMPORTER_API FScopedImportConflictBatch {
public:
	explicit FScopedImportConflictBatch(ECrimeForgeImportMode Mode = ECrimeForgeImportMode::Update) { FImportConflict::BeginBatch(Mode); }
	~FScopedImportConflictBatch() { FImportConflict::EndBatch(); }

	FScopedImportConflictBatch(const FScopedImportConflictBatch&) = delete;
	FScopedImportConflictBatch& operator=(const FScopedImportConflictBatch&) = delete;
};
