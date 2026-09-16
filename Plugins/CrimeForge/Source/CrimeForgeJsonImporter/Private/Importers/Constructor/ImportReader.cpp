

#include "Importers/Constructor/ImportReader.h"
#include "CrimeForgeSettings.h"

#include "Importers/Constructor/Importer.h"
#include "Importers/Constructor/ImportConflict.h"
#include "Importers/Constructor/TemplatedImporter.h"
#include "Importers/Types/DataAssetImporter.h"
#include "Importers/Types/Texture/TextureImporter.h"
#include "Settings/Runtime.h"
#include "Styling/SlateIconFinder.h"
#include "Importers/Constructor/Asset.h"
#include "Engine/EngineUtilities.h"
#include "Utilities/JsonHelpers.h"
#include "Modules/AssetBackend/BlockingRequest.h"
#include "Importers/Cache/ImportDependencyCache.h"
#include "Importers/Transaction/ImportTransaction.h"
#include "Importers/Diff/ImportDiff.h"
#include "Importers/Diagnostics/ImportDiagnostics.h"


namespace {
	/* CUE4Parse serializes Kismet opcodes as "Inst" while the Reflection-derived Blueprint
	 * reconstructor historically consumes "Token". Add the Reflection alias at the native
	 * import boundary too, so JSON exported by older AssetReader builds is repaired on load.
	 * We intentionally retain "Inst" rather than replacing it. */
	int32 AddReflectionKismetTokenAliases(const TSharedPtr<FJsonValue>& Value, const bool bInsideScriptBytecode) {
		if (!Value.IsValid()) return 0;

		int32 AddedAliases = 0;

		if (Value->Type == EJson::Object) {
			const TSharedPtr<FJsonObject> Object = Value->AsObject();
			if (!Object.IsValid()) return 0;

			if (bInsideScriptBytecode && !Object->HasField(TEXT("Token"))) {
				FString Inst;
				if (Object->TryGetStringField(TEXT("Inst"), Inst)) {
					Object->SetStringField(TEXT("Token"), Inst);
					++AddedAliases;
				}
			}

			/* Copy the map before recursing because SetStringField above can mutate it. */
			const TMap<FString, TSharedPtr<FJsonValue>> Fields = Object->Values;
			for (const TPair<FString, TSharedPtr<FJsonValue>>& Field : Fields) {
				AddedAliases += AddReflectionKismetTokenAliases(
					Field.Value,
					bInsideScriptBytecode || Field.Key.Equals(TEXT("ScriptBytecode"), ESearchCase::CaseSensitive)
				);
			}
			return AddedAliases;
		}

		if (Value->Type == EJson::Array) {
			for (const TSharedPtr<FJsonValue>& Child : Value->AsArray()) {
				AddedAliases += AddReflectionKismetTokenAliases(Child, bInsideScriptBytecode);
			}
		}

		return AddedAliases;
	}
}


void IImportReader::NormalizeBlueprintKismetAliases(const TArray<TSharedPtr<FJsonValue>>& Exports) {
	/* ScriptBytecode is serialized directly on UFunction/UStruct exports. Start at that field
	 * instead of walking texture/mesh/property payloads that cannot contain Kismet code. */
	int32 AddedAliases = 0;
	for (const TSharedPtr<FJsonValue>& ExportValue : Exports) {
		if (!ExportValue.IsValid() || ExportValue->Type != EJson::Object) continue;
		const TSharedPtr<FJsonObject> ExportObject = ExportValue->AsObject();
		if (!ExportObject.IsValid()) continue;

		if (const TSharedPtr<FJsonValue>* ScriptBytecode = ExportObject->Values.Find(TEXT("ScriptBytecode"))) {
			AddedAliases += AddReflectionKismetTokenAliases(*ScriptBytecode, true);
		}
	}

	if (AddedAliases > 0) {
		UE_LOG(LogCrimeForgeJsonImporter, Display,
			TEXT("Blueprint bytecode compatibility: normalized %d CUE4Parse Inst opcode field(s) to Reflection Token aliases."),
			AddedAliases);
	}
}

bool IImportReader::ReadExportsAndImport(const TArray<TSharedPtr<FJsonValue>>& Exports, const FString& File, IImporter*& OutImporter, const bool HideNotifications, bool bUseRelativePath) {
	if (!UCrimeForgeSettings::AreExperimentalFeaturesEnabled()) {
		UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Asset import was blocked because CrimeForge Experimental Features are disabled: %s"), *File);
		return false;
	}

	/* Nested scopes share the same conflict policy. This also makes direct callers that did not
	 * explicitly open a batch get one coherent Replace All / Skip / Cancel decision for the whole export set. */
	const FScopedImportConflictBatch ConflictScope;

	/* Importers resolve references through the asset backend while they deserialize, and those requests
	 * have nowhere to put a callback, so they get waited on. The scope is what keeps the editor
	 * drawn and cancellable for as long as this import needs the asset backend. */
	const FBlockingRequestScope BlockingScope(FText::Format(
		NSLOCTEXT("CrimeForgeJsonImporter", "CloudImporting", "Importing {0}"),
		FText::FromString(FPaths::GetCleanFilename(File))
	));

	/* Normalize Kismet opcode naming before any Blueprint classification or reconstruction. */
	NormalizeBlueprintKismetAliases(Exports);

	FUObjectExportContainer* Container = new FUObjectExportContainer(Exports);

	const bool IsBlueprint = Container->FindByType(FString("BlueprintGeneratedClass"))->IsJsonValid();
	
	bool bAnyReady = false;
	bool bAttemptedImportableExport = false;
	FString FirstUnsupportedType;

	for (FUObjectExport* Export : Container->Exports) {
		if (!Export) continue;

		const FString ExportType = Export->GetType().ToString();

		if (IsBlueprint) {
			if (ExportType != TEXT("BlueprintGeneratedClass")) continue;
		}
		else {
			/* A normal package commonly contains helper/subobject exports such as BodySetup,
			 * NavCollision, sockets, etc. They are consumed by the owning asset importer and are
			 * not standalone assets. Older CrimeForge builds silently skipped them. Do not send
			 * each helper export through ReadExportAndImport(), because that marks the whole file
			 * failed even after the real root asset imported successfully. */
			const UClass* ExportClass = FindClassByType(ExportType);
			if (!ExportClass || !CanImport(ExportType, false, ExportClass)) {
				if (FirstUnsupportedType.IsEmpty() && !ExportType.IsEmpty() && !ExportType.Equals(TEXT("None"), ESearchCase::IgnoreCase)) {
					FirstUnsupportedType = ExportType;
				}
				continue;
			}
		}

		bAttemptedImportableExport = true;
		if (IImporter* Importer = ReadExportAndImport(Container, Export, File, HideNotifications, bUseRelativePath)) {
			OutImporter = Importer;
			bAnyReady = true;
		}
		else {
			FCrimeForgeImportResult Result;
			if (FCrimeForgeImportDiagnostics::GetResult(File, Result)) {
				bAnyReady = Result.Status == ECrimeForgeImportStatus::Imported ||
					Result.Status == ECrimeForgeImportStatus::ImportedWithWarnings ||
					Result.Status == ECrimeForgeImportStatus::UpToDate ||
					Result.Status == ECrimeForgeImportStatus::Skipped;
			}
		}
		if (FImportConflict::IsCancelled()) break;
	}

	/* If a package genuinely has no importable root export, still report that once. The important
	 * distinction is that helper exports no longer overwrite a successful root-asset result. */
	if (!bAttemptedImportableExport && !FirstUnsupportedType.IsEmpty()) {
		const FScopedCrimeForgeImportDiagnosticContext DiagnosticContext(File);
		FCrimeForgeImportDiagnostics::RecordUnsupported(
			TEXT("Asset type"),
			FString::Printf(TEXT("CrimeForge has no importer for '%s'"), *FirstUnsupportedType));
		FCrimeForgeImportDiagnostics::FinishAsset(
			File,
			ECrimeForgeImportStatus::Failed,
			FString::Printf(TEXT("Unsupported asset type: %s"), *FirstUnsupportedType));
	}

	return !FImportConflict::IsCancelled() && bAnyReady;
}

IImporter* IImportReader::ReadExportAndImport(FUObjectExportContainer* Container, FUObjectExport* Export, FString File, const bool HideNotifications, bool bUseRelativePath) {
	if (!UCrimeForgeSettings::AreExperimentalFeaturesEnabled()) {
		return nullptr;
	}

	const FScopedCrimeForgeImportDiagnosticContext DiagnosticContext(File);
	const FString Type = Export->GetType().ToString();
	FString Name = Export->GetName().ToString();

	const bool IsBlueprint = Type.Contains("BlueprintGeneratedClass");

	/* BlueprintGeneratedClass is post-fixed with _C */
	if (IsBlueprint) {
		Name.Split("_C", &Name, nullptr, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
	}

	const UClass* Class = FindClassByType(Type);
	FCrimeForgeImportDiagnostics::SetType(File, Type);
	
	if (Class == nullptr) {
		FCrimeForgeImportDiagnostics::RecordUnsupported(TEXT("Export type"), FString::Printf(TEXT("Class for export type '%s' could not be resolved"), *Type));
		FCrimeForgeImportDiagnostics::FinishAsset(File, ECrimeForgeImportStatus::Failed, FString::Printf(TEXT("Unsupported/unresolved export type: %s"), *Type));
		return nullptr;
	}

	/* Check if this export can be imported */
	const bool InheritsDataAsset = Class->IsChildOf(UDataAsset::StaticClass());
	if (!CanImport(Type, false, Class)) {
		FCrimeForgeImportDiagnostics::RecordUnsupported(TEXT("Asset type"), FString::Printf(TEXT("CrimeForge has no importer for '%s'"), *Type));
		FCrimeForgeImportDiagnostics::FinishAsset(File, ECrimeForgeImportStatus::Failed, FString::Printf(TEXT("Unsupported asset type: %s"), *Type));
		return nullptr;
	}

	if (bUseRelativePath) {
		/* Convert from relative path to full path */
		if (FPaths::IsRelative(File)) File = FPaths::ConvertRelativePathToFull(File);
	}

	FString FailureReason;
	UPackage* LocalPackage = FAssetUtilities::CreateAssetPackage(Name, File, FailureReason);

	if (LocalPackage == nullptr) {
		/* Try fixing our Export Directory Settings using the provided File directory if local package not found */
        UCrimeForgeSettings* PluginSettings = GetSettings();

		GCrimeForgeJsonImporterRuntime.Update();
		LocalPackage = FAssetUtilities::CreateAssetPackage(Name, File, FailureReason);

		if (LocalPackage == nullptr) {
			FString ExportDirectoryCache = GCrimeForgeJsonImporterRuntime.ExportDirectory.Path;
		
			if (FString DirectoryPathFix; File.Split(TEXT("Output/Exports/"), &DirectoryPathFix, nullptr, ESearchCase::IgnoreCase, ESearchDir::FromEnd)) {
				DirectoryPathFix = DirectoryPathFix + TEXT("Output/Exports");

				GCrimeForgeJsonImporterRuntime.ExportDirectory.Path = DirectoryPathFix;
				SavePluginSettings(PluginSettings);

				/* Retry creating the asset package */
				LocalPackage = FAssetUtilities::CreateAssetPackage(Name, File, FailureReason);

				/* Undo the change if unsuccessful */
				if (LocalPackage == nullptr) {
					GCrimeForgeJsonImporterRuntime.ExportDirectory.Path = ExportDirectoryCache;

					SavePluginSettings(PluginSettings);
				}
			}
		}
	}

	if (LocalPackage == nullptr) {
		FCrimeForgeImportDiagnostics::FinishAsset(File, ECrimeForgeImportStatus::Failed, FailureReason);
		AppendNotification(
			FText::FromString("Failed: " + Type),
			FText::FromString(FailureReason),
			4.0f,
			FSlateIconFinder::FindCustomIconBrushForClass(FindObject<UClass>(nullptr, *("/Script/Engine." + Type)), TEXT("ClassThumbnail")),
			SNotificationItem::CS_Fail,
			false,
			350.0f
		);

		return nullptr;
	}

	/* Existing assets are never overwritten silently. One approval covers this path for the rest
	 * of the current import so dependency cycles do not ask about the same asset repeatedly. */
	const FString ObjectPath = LocalPackage->GetName() + TEXT(".") + Name;
	if (!FImportConflict::ShouldImportAsset(ObjectPath, Type, Export, Container, File)) {
		return nullptr;
	}

	/* If this path already existed and the conflict policy approved replacement, snapshot the package
	 * before any importer mutates it. A failed importer automatically restores/reloads this backup. */
	FCrimeForgeImportTransaction ReplacementTransaction(ObjectPath, FImportConflict::IsReplacementApproved(ObjectPath));
	if (!ReplacementTransaction.IsReady()) {
		const FString Reason = ReplacementTransaction.GetFailureReason().IsEmpty() ? TEXT("Could not create replacement backup") : ReplacementTransaction.GetFailureReason();
		FCrimeForgeImportDiagnostics::FinishAsset(File, ECrimeForgeImportStatus::Failed, TEXT("Replacement aborted before mutation: ") + Reason);
		UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("CrimeForge replacement aborted for %s: %s"), *ObjectPath, *Reason);
		return nullptr;
	}

	/* Importer ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
	IImporter* Importer = nullptr;
	
	/* Try to find the importer using a factory delegate */
	if (const FImporterFactoryDelegate* Factory = FindFactoryForAssetType(Type)) {
		Importer = (*Factory)();
	}

	/* If it inherits DataAsset, use the data asset importer */
	if (Importer == nullptr && InheritsDataAsset) {
		Importer = new IDataAssetImporter();
	}

	/* By default, (with no existing importer) use the templated importer with the asset class. */
	if (Importer == nullptr) {
		Importer = new ITemplatedImporter<UObject>();
	}

	Export->Package = LocalPackage;
	Importer->Initialize(Export, Container);

	/* Import the asset ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
	bool Successful = false; {
		try {
			Successful = Importer->Import();
		} catch (const char* Exception) {
			UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("Importer exception: %s"), *FString(Exception));
			FCrimeForgeImportDiagnostics::RecordUnsupported(TEXT("Importer exception"), FString(Exception));
		} catch (...) {
			UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("Importer threw an unknown exception while importing %s"), *File);
			FCrimeForgeImportDiagnostics::RecordUnsupported(TEXT("Importer exception"), TEXT("Unknown native exception"));
		}
	}

	if (Successful) {
		UObject* ImportedAsset = LoadObject<UObject>(nullptr, *ObjectPath);
		if (!ImportedAsset) {
			Successful = false;
			ReplacementTransaction.Rollback(TEXT("importer reported success but the resulting asset could not be loaded"));
			FCrimeForgeImportDiagnostics::FinishAsset(File, ECrimeForgeImportStatus::Failed, TEXT("Importer reported success, but the resulting asset could not be loaded; original asset restored when a replacement backup was available"));
		}
		else {
			FCrimeForgeImportDiff::StoreProvenance(ImportedAsset, FCrimeForgeImportDiff::ComputeSourceHash(Container), Type);
			/* Provenance is package metadata, so persist it after the importer has created/saved the asset. */
			if (LocalPackage) {
				LocalPackage->MarkPackageDirty();
				if (GetSettings()->bSaveImportedAssets) SavePackage(LocalPackage);
			}
			ReplacementTransaction.Commit();
			const TArray<FString> Dependencies = FCrimeForgeImportDependencyCache::GetDependencies(File);
			FCrimeForgeImportDiagnostics::SetDependencyCount(File, Dependencies.Num());
			FCrimeForgeImportDiagnostics::FinishAsset(File, ECrimeForgeImportStatus::Imported);
		}
	} else {
		ReplacementTransaction.Rollback(TEXT("importer reported failure"));
		FCrimeForgeImportDiagnostics::FinishAsset(File, ECrimeForgeImportStatus::Failed, TEXT("Importer reported failure; original asset restored when a replacement backup was available"));
	}

	if (HideNotifications) {
		return Importer;
	}

	FString ClassIconType = Type;

	if (Type.Contains("GeneratedClass")) {
		Type.Split("GeneratedClass", &ClassIconType, nullptr);
	}

	if (Successful) {
		UE_LOG(LogCrimeForgeJsonImporter, Log, TEXT("Successfully imported \"%s\" as \"%s\""), *Name, *Type);

		/* Successful Notification */
		AppendNotification(
			FText::FromString("Imported: " + Name),
			FText::FromString(Type),
			2.0f,
			FSlateIconFinder::FindCustomIconBrushForClass(FindObject<UClass>(nullptr, *("/Script/Engine." + ClassIconType)), TEXT("ClassThumbnail")),
			SNotificationItem::CS_Success,
			false,
			350.0f
		);
	} else {
		/* Failed Notification */
		AppendNotification(
			FText::FromString("Failed: " + Name),
			FText::FromString(Type),
			2.0f,
			FSlateIconFinder::FindCustomIconBrushForClass(FindObject<UClass>(nullptr, *("/Script/Engine." + ClassIconType)), TEXT("ClassThumbnail")),
			SNotificationItem::CS_Fail,
			false,
			350.0f
		);
	}

	return Successful ? Importer : nullptr;
}

IImporter* IImportReader::ImportReference(const FString& File) {
	if (!UCrimeForgeSettings::AreExperimentalFeaturesEnabled()) {
		UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Asset import was blocked because CrimeForge Experimental Features are disabled: %s"), *File);
		return nullptr;
	}

	FString FilePath = File;
	if (FilePath.Contains("\\")) {
		FilePath = File.Replace(TEXT("\\"), TEXT("/"));
	}
	
	TArray<TSharedPtr<FJsonValue>> DataObjects; {
		DeserializeJSON(FilePath, DataObjects);
	}

	IImporter* Importer = nullptr;
	ReadExportsAndImport(DataObjects, FilePath, Importer);
	
	return Importer;
}