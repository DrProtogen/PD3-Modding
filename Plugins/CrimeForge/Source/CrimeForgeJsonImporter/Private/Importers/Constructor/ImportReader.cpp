

#include "Importers/Constructor/ImportReader.h"

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
	/* Nested scopes share the same conflict policy. This also makes direct callers that did not
	 * explicitly open a batch get one coherent Replace All / Cancel decision for the whole export set. */
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
	
	for (FUObjectExport* Export : Container->Exports) {
		if (IsBlueprint) {
			if (Export->GetType() != "BlueprintGeneratedClass") continue;
		}

		/* These are subobjects used by the material importer, not standalone Content Browser
		 * assets. Keep them in the shared container so references resolve, but never send them
		 * through the top-level importer loop. */
		const FString ExportType = Export->GetType().ToString();
		if (ExportType.StartsWith(TEXT("MaterialExpression")) || ExportType.EndsWith(TEXT("EditorOnlyData"))) {
			continue;
		}
		
		if (IImporter* Importer = ReadExportAndImport(Container, Export, File, HideNotifications, bUseRelativePath)) OutImporter = Importer;
		if (FImportConflict::IsCancelled()) break;
	}

	return !FImportConflict::IsCancelled();
}

IImporter* IImportReader::ReadExportAndImport(FUObjectExportContainer* Container, FUObjectExport* Export, FString File, const bool HideNotifications, bool bUseRelativePath) {
	const FString Type = Export->GetType().ToString();
	FString Name = Export->GetName().ToString();

	const bool IsBlueprint = Type.Contains("BlueprintGeneratedClass");

	/* BlueprintGeneratedClass is post-fixed with _C */
	if (IsBlueprint) {
		Name.Split("_C", &Name, nullptr, ESearchCase::CaseSensitive, ESearchDir::FromEnd);
	}

	const UClass* Class = FindClassByType(Type);
	
	if (Class == nullptr) return nullptr;

	/* Check if this export can be imported */
	const bool InheritsDataAsset = Class->IsChildOf(UDataAsset::StaticClass());
	if (!CanImport(Type, false, Class)) return nullptr;

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
	if (!FImportConflict::ShouldImportAsset(ObjectPath, Type)) {
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
		}
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

	return Importer;
}

IImporter* IImportReader::ImportReference(const FString& File) {
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