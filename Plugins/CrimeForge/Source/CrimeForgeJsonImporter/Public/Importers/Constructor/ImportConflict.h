

#pragma once

#include "CoreMinimal.h"

/*
 * One conflict policy is shared by a complete user-started import operation. Nested dependency
 * imports join the same policy, which is important for Replace All: choosing it once must apply to
 * the folder/path/JSON import that started the work rather than being forgotten by the next
 * dependency.
 */
class CRIMEFORGEJSONIMPORTER_API FImportConflict {
public:
	static void BeginBatch();
	static void EndBatch();

	static bool IsCancelled();
	static void CancelBatch();

	/* Returns false only when the user cancelled the current import. If ObjectPath does not already
	 * exist, or this path has already been approved/started during this batch, no dialog is shown. */
	static bool ShouldImportAsset(const FString& ObjectPath, const FString& Type);
};

/* Nestable scope for synchronous import entry points. The across-frame import job owns one of
 * these for its full lifetime instead. */
class CRIMEFORGEJSONIMPORTER_API FScopedImportConflictBatch {
public:
	FScopedImportConflictBatch() { FImportConflict::BeginBatch(); }
	~FScopedImportConflictBatch() { FImportConflict::EndBatch(); }

	FScopedImportConflictBatch(const FScopedImportConflictBatch&) = delete;
	FScopedImportConflictBatch& operator=(const FScopedImportConflictBatch&) = delete;
};
