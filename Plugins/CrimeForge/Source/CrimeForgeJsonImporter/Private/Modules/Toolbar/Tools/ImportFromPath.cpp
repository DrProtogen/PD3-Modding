

#include "Modules/Toolbar/Tools/ImportFromPath.h"
#include "CrimeForgeSettings.h"

#include "Containers/Export.h"
#include "Importers/Constructor/ImportReader.h"
#include "Importers/Constructor/ImportConflict.h"
#include "Importers/Types/Texture/TextureImporter.h"
#include "Importers/Types/Texture/TextureTypes.h"
#include "Modules/AssetBackend/AssetBackend.h"
#include "Modules/AssetReader/AssetReader.h"
#include "Modules/AssetBackend/BlockingRequest.h"
#include "Modules/UI/Import/SImportPathsDialog.h"
#include "Settings/Runtime.h"
#include "Engine/EngineUtilities.h"
#include "Importers/Diagnostics/ImportDiagnostics.h"
#include "Importers/Cache/ImportDependencyCache.h"
#include "Utilities/Dialog.h"

void TToolImportFromPath::Execute() {
	if (!UCrimeForgeSettings::AreExperimentalFeaturesEnabled()) {
		SpawnPrompt("CrimeForge Experimental Features", "Asset reading and importing are experimental and currently disabled. Enable Experimental Features in Project Settings -> Plugins -> CrimeForge to use them.");
		return;
	}

	/* The importer is deliberately non-modal because its selected-asset tools operate on the
	 * Content Browser's live selection. The window dispatches ImportPaths when Import is clicked. */
	SImportPathsDialog::Open();
}

void TToolImportFromPath::ImportPaths(const TArray<FString>& Paths, const bool bImportReferencesRecursively, const ECrimeForgeImportMode Mode, const bool bResetDiagnostics) {
	if (!UCrimeForgeSettings::AreExperimentalFeaturesEnabled()) {
		SpawnPrompt("CrimeForge Experimental Features", "Asset reading and importing are experimental and currently disabled. Enable Experimental Features in Project Settings -> Plugins -> CrimeForge to use them.");
		return;
	}

	if (Paths.Num() == 0) {
		return;
	}

	/* The import dialog owns this choice for the duration of the batch only. Nested imports inherit
	 * it, then the previous mode is restored so other importer entry points keep their old behaviour. */
	struct FScopedReferenceImportMode {
		explicit FScopedReferenceImportMode(const bool bInImportReferencesRecursively)
			: PreviousValue(GCrimeForgeJsonImporterRuntime.bImportReferencesRecursively)
		{
			GCrimeForgeJsonImporterRuntime.bImportReferencesRecursively = bInImportReferencesRecursively;
		}

		~FScopedReferenceImportMode() {
			GCrimeForgeJsonImporterRuntime.bImportReferencesRecursively = PreviousValue;
		}

		bool PreviousValue;
	};

	const FScopedReferenceImportMode ReferenceImportMode(bImportReferencesRecursively);

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

	if (bResetDiagnostics) FCrimeForgeImportDiagnostics::ResetRun();

	bool bCancelled = false;
	{
		const FScopedImportConflictBatch ConflictScope(Mode);

		for (const FString& Path : Paths) {
			FCrimeForgeImportDiagnostics::BeginAsset(Path);
			Import(Path, bImportReferencesRecursively);

			if (FImportConflict::IsCancelled()) {
				bCancelled = true;
				FCrimeForgeImportDiagnostics::FinishAsset(Path, ECrimeForgeImportStatus::Cancelled, TEXT("Import cancelled"));
				break;
			}
		}
	}
	FCrimeForgeImportDependencyCache::Flush();

	int32 Imported = 0;
	int32 UpToDate = 0;
	int32 Skipped = 0;
	int32 Failed = 0;
	int32 Warnings = 0;
	for (const FCrimeForgeImportResult& Result : FCrimeForgeImportDiagnostics::GetResults()) {
		switch (Result.Status) {
		case ECrimeForgeImportStatus::Imported: ++Imported; break;
		case ECrimeForgeImportStatus::UpToDate: ++UpToDate; break;
		case ECrimeForgeImportStatus::Skipped: ++Skipped; break;
		case ECrimeForgeImportStatus::Failed: ++Failed; break;
		case ECrimeForgeImportStatus::ImportedWithWarnings: ++Warnings; break;
		default: break;
		}
	}

	const bool Successful = !bCancelled && Failed == 0;
	const FString Summary = FString::Printf(
		TEXT("%d imported, %d up to date, %d skipped, %d warnings, %d failed"),
		Imported, UpToDate, Skipped, Warnings, Failed);

	AppendNotification(
		FText::FromString(bCancelled ? "Import Cancelled" : (Successful ? "CrimeForge Import Finished" : "Imported With Failures")),
		FText::FromString(Summary),
		Successful ? 3.0f : 6.0f,
		Successful ? SNotificationItem::CS_Success : SNotificationItem::CS_Fail,
		true,
		420.0f
	);
}

bool TToolImportFromPath::Import(const FString& InPath, const bool bImportReferencesRecursively) {
	if (!UCrimeForgeSettings::AreExperimentalFeaturesEnabled()) {
		return false;
	}

	/* Nestable, so this also makes a direct call safe when it was not started by ImportPaths or
	 * Import Game Folder. */
	const FScopedImportConflictBatch ConflictScope;

	struct FScopedSingleReferenceImportMode {
		explicit FScopedSingleReferenceImportMode(const bool bInImportReferencesRecursively)
			: PreviousValue(GCrimeForgeJsonImporterRuntime.bImportReferencesRecursively)
		{
			GCrimeForgeJsonImporterRuntime.bImportReferencesRecursively = bInImportReferencesRecursively;
		}

		~FScopedSingleReferenceImportMode() {
			GCrimeForgeJsonImporterRuntime.bImportReferencesRecursively = PreviousValue;
		}

		bool PreviousValue;
	};

	const FScopedSingleReferenceImportMode ReferenceImportMode(bImportReferencesRecursively);

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
		FCrimeForgeImportDiagnostics::FinishAsset(InPath, ECrimeForgeImportStatus::Failed, TEXT("Empty/invalid asset path"));
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
		FCrimeForgeImportDiagnostics::FinishAsset(InPath, ECrimeForgeImportStatus::Failed, TEXT("AssetReader returned no response"));
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

		FCrimeForgeImportDiagnostics::FinishAsset(InPath, ECrimeForgeImportStatus::Failed, ErrorMessage.IsEmpty() ? ErrorCode : ErrorMessage);
		return false;
	}

	const TArray<TSharedPtr<FJsonValue>> Exports = Response->GetArrayField(TEXT("exports"));
	if (Exports.Num() == 0) {
		UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("AssetReader found \"%s\" but exported zero UObject entries"), *PackagePath);
		FCrimeForgeImportDiagnostics::FinishAsset(InPath, ECrimeForgeImportStatus::Failed, TEXT("AssetReader exported zero UObject entries"));
		return false;
	}

	const TSharedPtr<FJsonObject> Export = Exports[0]->AsObject();

	FString Type;
	if (!Export.IsValid() || !Export->TryGetStringField(TEXT("Type"), Type)) {
		FCrimeForgeImportDiagnostics::FinishAsset(InPath, ECrimeForgeImportStatus::Failed, TEXT("First export did not contain an asset type"));
		return false;
	}
	FCrimeForgeImportDiagnostics::SetType(InPath, Type);

	FString AssetName;
	PackagePath.Split(TEXT("/"), nullptr, &AssetName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);

	if (FTextureTypes::IsSupported(Type)) {
		UTexture* Texture = nullptr;
		const bool bTextureSuccess = FTextureImport::FromCloud(PackagePath + "." + AssetName, PackagePath, Texture);
		FCrimeForgeImportDiagnostics::SetDependencyCount(InPath, FCrimeForgeImportDependencyCache::GetDependencies(PackagePath).Num());

		/* FromExport may intentionally return false because conflict handling selected Reference, Skip,
		 * or Up To Date. Preserve that diagnostic instead of overwriting it as a texture failure. */
		FCrimeForgeImportResult ExistingResult;
		const bool bHasTerminalDecision = FCrimeForgeImportDiagnostics::GetResult(InPath, ExistingResult) &&
			(ExistingResult.Status == ECrimeForgeImportStatus::UpToDate ||
			 ExistingResult.Status == ECrimeForgeImportStatus::Skipped ||
			 ExistingResult.Status == ECrimeForgeImportStatus::Cancelled);
		if (!bHasTerminalDecision) {
			FCrimeForgeImportDiagnostics::FinishAsset(InPath, bTextureSuccess ? ECrimeForgeImportStatus::Imported : ECrimeForgeImportStatus::Failed, bTextureSuccess ? FString() : TEXT("Texture import failed"));
		}
		return bTextureSuccess || bHasTerminalDecision;
	}

	IImporter* OutImporter = nullptr;

	return IImportReader::ReadExportsAndImport(Exports, PackagePath, OutImporter, false, false);
}
