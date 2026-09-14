

#include "Modules/Toolbar/Tools/ImportFolder.h"

#include "Modules/AssetBackend/AssetBackend.h"
#include "Modules/AssetReader/AssetReader.h"
#include "Modules/AssetBackend/BlockingRequest.h"
#include "Modules/Toolbar/Tools/ImportFromPath.h"
#include "Importers/Constructor/ImportConflict.h"
#include "Modules/UI/Import/SImportFolderDialog.h"
#include "Engine/EngineUtilities.h"
#include "Utilities/Dialog.h"

namespace {
void ImportListedFolderPaths(TArray<FString> Paths) {
	if (Paths.Num() == 0) {
		return;
	}

	int32 Imported = 0;
	int32 Attempted = 0;
	bool bCancelled = false;
	{
		const FScopedImportConflictBatch ConflictScope;

		/* Import opens a scope of its own per asset. This outer scope owns cancellation for the
		 * whole folder run so cancelling one request does not continue through the rest. */
		const FBlockingRequestScope BlockingScope(NSLOCTEXT("CrimeForgeJsonImporter", "ImportingFolder", "Importing folder"));

		for (const FString& Path : Paths) {
			Attempted++;

			if (TToolImportFromPath::Import(Path)) {
				Imported++;
			}

			if (FImportConflict::IsCancelled() || FBlockingRequestScope::Pump()) {
				bCancelled = true;
				break;
			}
		}
	}

	const bool bSuccessful = !bCancelled && Imported == Attempted;

	AppendNotification(
		FText::FromString(bCancelled ? "Import Folder Cancelled" : (bSuccessful ? "Imported Folder" : "Imported With Failures")),
		FText::FromString(FString::Printf(TEXT("%d of %d"), Imported, Paths.Num())),
		bSuccessful ? 2.0f : 5.0f,
		bSuccessful ? SNotificationItem::CS_Success : SNotificationItem::CS_Fail,
		true,
		310.0f
	);
}
}

void TToolImportFolder::Execute() {
	FString BackendError;
	if (!FCrimeForgeAssetReader::Get().EnsureInitialized(&BackendError)) {
		SpawnPrompt("Import Folder", BackendError);
		return;
	}

	/* Nothing here goes through the regular path-import button, so fetch the mounted game metadata
	 * before the folder browser starts asking AssetReader to enumerate package paths. */
	if (!AssetBackend::EnsureMetadataBlocking()) {
		SpawnPrompt("Import Folder", "PAYDAY 3 data could not be initialized, so paths cannot be resolved.");
		return;
	}

	/* Non-modal: the callback runs only when Import is pressed, after the user has had a chance to
	 * navigate the Content Browser, change folders, and preview the AssetReader listing. */
	SImportFolderDialog::Open([](TArray<FString> Paths) {
		ImportListedFolderPaths(MoveTemp(Paths));
	});
}
