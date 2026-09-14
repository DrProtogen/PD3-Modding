

#include "Modules/Toolbar/Tools/ImportFromPath.h"

#include "Containers/Export.h"
#include "Importers/Constructor/ImportReader.h"
#include "Importers/Constructor/ImportConflict.h"
#include "Importers/Types/Texture/TextureImporter.h"
#include "Importers/Types/Texture/TextureTypes.h"
#include "Modules/AssetBackend/AssetBackend.h"
#include "Modules/AssetReader/AssetReader.h"
#include "Modules/AssetBackend/BlockingRequest.h"
#include "Modules/UI/Import/SImportPathsDialog.h"
#include "Engine/EngineUtilities.h"
#include "Utilities/Dialog.h"

void TToolImportFromPath::Execute() {
	/* The importer is deliberately non-modal because its selected-asset tools operate on the
	 * Content Browser's live selection. The window dispatches ImportPaths when Import is clicked. */
	SImportPathsDialog::Open();
}

void TToolImportFromPath::ImportPaths(const TArray<FString>& Paths) {
	if (Paths.Num() == 0) {
		return;
	}

	/* AssetReader is built automatically on first real game-data use. */
	FString BackendError;
	if (!FCrimeForgeAssetReader::Get().EnsureInitialized(&BackendError)) {
		SpawnPrompt("CrimeForge JSON Importer", BackendError);
		return;
	}

	if (!AssetBackend::EnsureMetadataBlocking()) {
		SpawnPrompt("CrimeForge JSON Importer", "PAYDAY 3 data could not be initialized, so paths cannot be resolved.");
		return;
	}

	int32 Imported = 0;
	bool bCancelled = false;
	{
		const FScopedImportConflictBatch ConflictScope;

		for (const FString& Path : Paths) {
			if (Import(Path)) {
				Imported++;
			}

			if (FImportConflict::IsCancelled()) {
				bCancelled = true;
				break;
			}
		}
	}

	const bool Successful = !bCancelled && Imported == Paths.Num();

	AppendNotification(
		FText::FromString(bCancelled ? "Import Cancelled" : (Successful ? "Imported From Path" : "Imported With Failures")),
		FText::FromString(FString::Printf(TEXT("%d of %d"), Imported, Paths.Num())),
		Successful ? 2.0f : 5.0f,
		Successful ? SNotificationItem::CS_Success : SNotificationItem::CS_Fail,
		true,
		310.0f
	);
}

bool TToolImportFromPath::Import(const FString& InPath) {
	/* Nestable, so this also makes a direct call safe when it was not started by ImportPaths or
	 * Import Game Folder. */
	const FScopedImportConflictBatch ConflictScope;

	/* Take whatever gets pasted: Type'/Game/Path/Asset.Asset', a path with an extension on it,
	 * or a bare package path */
	FString PackagePath = StripObjectOuter(InPath.TrimStartAndEnd());
	PackagePath.ReplaceInline(TEXT("\\"), TEXT("/"));

	/* The game-data backend cuts everything from the first dot, so an export name or an extension makes no
	 * difference to it, and the editor path below has to be cut the same way to match */
	int32 Dot;

	if (PackagePath.FindChar(TEXT('.'), Dot)) {
		LeftInline(PackagePath, Dot);
	}

	PackagePath.TrimStartAndEndInline();

	if (PackagePath.IsEmpty()) {
		return false;
	}

	/* Reached straight off a menu click, so nothing here has a continuation to hand a callback to.
	 * The scope is what keeps the editor drawn and cancellable while the requests run. */
	const FBlockingRequestScope BlockingScope(FText::Format(
		NSLOCTEXT("CrimeForgeJsonImporter", "ImportingPath", "Importing {0}"),
		FText::FromString(PackagePath)
	));

	const TSharedPtr<FJsonObject> Response = AssetBackend::Export::GetRawBlocking(PackagePath);
	if (Response == nullptr) {
		UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("AssetReader returned no response while exporting \"%s\""), *PackagePath);
		return false;
	}

	if (!Response->HasField(TEXT("exports"))) {
		FString ErrorCode;
		FString ErrorMessage;
		Response->TryGetStringField(TEXT("errorCode"), ErrorCode);
		Response->TryGetStringField(TEXT("errorMessage"), ErrorMessage);

		double StatusCodeValue = 0.0;
		Response->TryGetNumberField(TEXT("__crimeForgeStatusCode"), StatusCodeValue);
		const int32 StatusCode = static_cast<int32>(StatusCodeValue);

		if (StatusCode == 404) {
			UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("PAYDAY 3 does not contain a mounted package at \"%s\""), *PackagePath);
		}
		else {
			UE_LOG(
				LogCrimeForgeJsonImporter,
				Error,
				TEXT("AssetReader could not export \"%s\" (HTTP %d, %s): %s"),
				*PackagePath,
				StatusCode,
				ErrorCode.IsEmpty() ? TEXT("unknown_error") : *ErrorCode,
				ErrorMessage.IsEmpty() ? TEXT("No error details were returned") : *ErrorMessage
			);
		}

		return false;
	}

	const TArray<TSharedPtr<FJsonValue>> Exports = Response->GetArrayField(TEXT("exports"));
	if (Exports.Num() == 0) {
		UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("AssetReader found \"%s\" but exported zero UObject entries"), *PackagePath);

		return false;
	}

	const TSharedPtr<FJsonObject> Export = Exports[0]->AsObject();

	FString Type;
	if (!Export.IsValid() || !Export->TryGetStringField(TEXT("Type"), Type)) {
		return false;
	}

	FString AssetName;
	PackagePath.Split(TEXT("/"), nullptr, &AssetName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

	if (FTextureTypes::IsSupported(Type)) {
		UTexture* Texture = nullptr;

		return FTextureImport::FromCloud(PackagePath + "." + AssetName, PackagePath, Texture);
	}

	IImporter* OutImporter = nullptr;

	return IImportReader::ReadExportsAndImport(Exports, PackagePath, OutImporter, false, false);
}
