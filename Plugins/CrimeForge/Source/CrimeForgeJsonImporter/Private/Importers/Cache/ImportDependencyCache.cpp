#include "Importers/Cache/ImportDependencyCache.h"

#include "Dom/JsonValue.h"
#include "HAL/FileManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/SecureHash.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Settings/Runtime.h"

namespace {
	TMap<FString, FCrimeForgeDependencyCacheEntry> GEntries;
	TMap<FString, TSharedPtr<FJsonObject>> GRawResponses;
	bool bLoaded = false;
	bool bDirty = false;

	FString CacheFile() {
		return FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("CrimeForge"), TEXT("JsonImporterDependencyCache.json"));
	}

	FString CanonicalPackagePath(FString Value) {
		Value.TrimStartAndEndInline();
		if (Value.Contains(TEXT("'"))) {
			const int32 First = Value.Find(TEXT("'"));
			const int32 Last = Value.Find(TEXT("'"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
			if (First != INDEX_NONE && Last > First) Value = Value.Mid(First + 1, Last - First - 1);
		}
		Value.ReplaceInline(TEXT("\\"), TEXT("/"));
		int32 Dot = INDEX_NONE;
		if (Value.FindChar(TEXT('.'), Dot)) Value.LeftInline(Dot);
		if (Value.EndsWith(TEXT("_C"))) Value.LeftChopInline(2);

		const FString ProjectName = GCrimeForgeJsonImporterRuntime.Profile.ProjectName.IsEmpty()
			? TEXT("PAYDAY3") : GCrimeForgeJsonImporterRuntime.Profile.ProjectName;
		const FString ProjectPrefix = ProjectName + TEXT("/Content");
		if (Value.StartsWith(ProjectPrefix, ESearchCase::IgnoreCase)) {
			Value = TEXT("/Game") + Value.Mid(ProjectPrefix.Len());
		}
		else if (Value.StartsWith(TEXT("Engine/Content"), ESearchCase::IgnoreCase)) {
			Value = TEXT("/Engine") + Value.Mid(FCString::Strlen(TEXT("Engine/Content")));
		}
		else if (!Value.StartsWith(TEXT("/"))) {
			Value = TEXT("/") + Value;
		}
		return Value;
	}

	bool LooksLikeAssetPath(FString Value, FString& OutPackage) {
		Value.TrimStartAndEndInline();
		if (Value.IsEmpty() || Value.Contains(TEXT(" "))) return false;

		/* Do not canonicalize every arbitrary string into a leading-slash path. JSON exports contain
		 * plenty of strings with dots/slashes that are not assets (numbers, URLs, namespaced values).
		 * Only strings that already look like Unreal package/object references are candidates. */
		FString ReferenceText = Value;
		const int32 FirstQuote = ReferenceText.Find(TEXT("'"));
		const int32 LastQuote = ReferenceText.Find(TEXT("'"), ESearchCase::IgnoreCase, ESearchDir::FromEnd);
		if (FirstQuote != INDEX_NONE && LastQuote > FirstQuote) {
			ReferenceText = ReferenceText.Mid(FirstQuote + 1, LastQuote - FirstQuote - 1);
		}
		ReferenceText.ReplaceInline(TEXT("\\"), TEXT("/"));

		const FString ProjectName = GCrimeForgeJsonImporterRuntime.Profile.ProjectName.IsEmpty()
			? TEXT("PAYDAY3") : GCrimeForgeJsonImporterRuntime.Profile.ProjectName;
		const bool bMountedEditorPath = ReferenceText.StartsWith(TEXT("/"));
		const bool bProjectCookedPath = ReferenceText.StartsWith(ProjectName + TEXT("/Content/"), ESearchCase::IgnoreCase);
		const bool bEngineCookedPath = ReferenceText.StartsWith(TEXT("Engine/Content/"), ESearchCase::IgnoreCase);
		if (!bMountedEditorPath && !bProjectCookedPath && !bEngineCookedPath) return false;

		Value = CanonicalPackagePath(MoveTemp(ReferenceText));
		if (!Value.StartsWith(TEXT("/")) || Value.StartsWith(TEXT("/Script/"), ESearchCase::IgnoreCase)) return false;

		/* Require at least root + one directory/object segment. This rejects values such as '/1' that
		 * can otherwise be produced from ordinary dotted strings. */
		int32 SecondSlash = INDEX_NONE;
		if (!Value.FindChar(TEXT('/'), SecondSlash)) return false;
		const int32 NextSlash = Value.Find(TEXT("/"), ESearchCase::IgnoreCase, ESearchDir::FromStart, SecondSlash + 1);
		if (NextSlash == INDEX_NONE || NextSlash >= Value.Len() - 1) return false;

		OutPackage = Value;
		return true;
	}

	void AppendCanonicalJsonValue(const TSharedPtr<FJsonValue>& Value, FString& Out) {
		if (!Value.IsValid() || Value->IsNull()) { Out += TEXT("null"); return; }
		switch (Value->Type) {
		case EJson::String: {
			const FString StringValue = Value->AsString();
			Out += FString::Printf(TEXT("s%d:"), StringValue.Len()); Out += StringValue; break;
		}
		case EJson::Number:
			Out += FString::Printf(TEXT("n:%.17g"), Value->AsNumber()); break;
		case EJson::Boolean:
			Out += Value->AsBool() ? TEXT("b:1") : TEXT("b:0"); break;
		case EJson::Array:
			Out += TEXT("[");
			for (const TSharedPtr<FJsonValue>& Child : Value->AsArray()) { AppendCanonicalJsonValue(Child, Out); Out += TEXT(","); }
			Out += TEXT("]");
			break;
		case EJson::Object: {
			Out += TEXT("{");
			const TSharedPtr<FJsonObject> Object = Value->AsObject();
			TArray<FString> Keys;
			if (Object.IsValid()) Object->Values.GetKeys(Keys);
			Keys.Sort();
			for (const FString& Key : Keys) {
				Out += FString::Printf(TEXT("k%d:"), Key.Len()); Out += Key; Out += TEXT(":");
				AppendCanonicalJsonValue(Object->Values.FindRef(Key), Out); Out += TEXT(",");
			}
			Out += TEXT("}");
			break;
		}
		default: Out += TEXT("null"); break;
		}
	}

	void CollectDependencies(const TSharedPtr<FJsonValue>& Value, TSet<FString>& Out) {
		if (!Value.IsValid()) return;
		if (Value->Type == EJson::String) {
			FString Package;
			if (LooksLikeAssetPath(Value->AsString(), Package)) Out.Add(Package);
			return;
		}
		if (Value->Type == EJson::Object) {
			const TSharedPtr<FJsonObject> Obj = Value->AsObject();
			if (!Obj.IsValid()) return;
			FString ObjectPath;
			if (Obj->TryGetStringField(TEXT("ObjectPath"), ObjectPath)) {
				FString Package;
				if (LooksLikeAssetPath(ObjectPath, Package)) Out.Add(Package);
			}
			for (const TPair<FString, TSharedPtr<FJsonValue>>& Pair : Obj->Values) CollectDependencies(Pair.Value, Out);
			return;
		}
		if (Value->Type == EJson::Array) {
			for (const TSharedPtr<FJsonValue>& Child : Value->AsArray()) CollectDependencies(Child, Out);
		}
	}
}

FString FCrimeForgeImportDependencyCache::NormalizePackagePath(FString Path) {
	return CanonicalPackagePath(MoveTemp(Path));
}

FString FCrimeForgeImportDependencyCache::HashJson(const TSharedPtr<FJsonObject>& Object) {
	if (!Object.IsValid()) return FString();
	FString Canonical;
	AppendCanonicalJsonValue(MakeShared<FJsonValueObject>(Object), Canonical);
	FTCHARToUTF8 Utf8(*Canonical);
	uint8 Hash[FSHA1::DigestSize];
	FSHA1::HashBuffer(Utf8.Get(), Utf8.Length(), Hash);
	return BytesToHex(Hash, FSHA1::DigestSize);
}

void FCrimeForgeImportDependencyCache::Load() {
	if (bLoaded) return;
	bLoaded = true;
	FString Text;
	if (!FFileHelper::LoadFileToString(Text, *CacheFile())) return;
	TSharedPtr<FJsonObject> Root;
	const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Text);
	if (!FJsonSerializer::Deserialize(Reader, Root) || !Root.IsValid()) return;
	const TArray<TSharedPtr<FJsonValue>>* Entries = nullptr;
	if (!Root->TryGetArrayField(TEXT("entries"), Entries) || !Entries) return;
	for (const TSharedPtr<FJsonValue>& Value : *Entries) {
		if (!Value.IsValid() || Value->Type != EJson::Object) continue;
		const TSharedPtr<FJsonObject> Obj = Value->AsObject();
		FCrimeForgeDependencyCacheEntry Entry;
		Obj->TryGetStringField(TEXT("path"), Entry.PackagePath);
		Obj->TryGetStringField(TEXT("type"), Entry.Type);
		Obj->TryGetStringField(TEXT("hash"), Entry.SourceHash);
		const TArray<TSharedPtr<FJsonValue>>* Deps = nullptr;
		if (Obj->TryGetArrayField(TEXT("dependencies"), Deps) && Deps) {
			for (const TSharedPtr<FJsonValue>& Dep : *Deps) { FString S; if (Dep.IsValid() && Dep->TryGetString(S)) Entry.Dependencies.Add(S); }
		}
		if (!Entry.PackagePath.IsEmpty()) GEntries.Add(NormalizePackagePath(Entry.PackagePath).ToLower(), MoveTemp(Entry));
	}
}

void FCrimeForgeImportDependencyCache::Flush() {
	Load();
	if (!bDirty) return;
	IFileManager::Get().MakeDirectory(*FPaths::GetPath(CacheFile()), true);
	TArray<TSharedPtr<FJsonValue>> Values;
	for (const TPair<FString, FCrimeForgeDependencyCacheEntry>& Pair : GEntries) {
		const FCrimeForgeDependencyCacheEntry& Entry = Pair.Value;
		const TSharedRef<FJsonObject> Obj = MakeShared<FJsonObject>();
		Obj->SetStringField(TEXT("path"), Entry.PackagePath);
		Obj->SetStringField(TEXT("type"), Entry.Type);
		Obj->SetStringField(TEXT("hash"), Entry.SourceHash);
		TArray<TSharedPtr<FJsonValue>> Deps;
		for (const FString& Dep : Entry.Dependencies) Deps.Add(MakeShared<FJsonValueString>(Dep));
		Obj->SetArrayField(TEXT("dependencies"), Deps);
		Values.Add(MakeShared<FJsonValueObject>(Obj));
	}
	const TSharedRef<FJsonObject> Root = MakeShared<FJsonObject>();
	Root->SetNumberField(TEXT("version"), 1);
	Root->SetArrayField(TEXT("entries"), Values);
	FString Text;
	const TSharedRef<TJsonWriter<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>> Writer = TJsonWriterFactory<TCHAR, TPrettyJsonPrintPolicy<TCHAR>>::Create(&Text);
	FJsonSerializer::Serialize(Root, Writer);
	FFileHelper::SaveStringToFile(Text, *CacheFile());
	bDirty = false;
}

void FCrimeForgeImportDependencyCache::Clear() { GEntries.Reset(); GRawResponses.Reset(); bDirty = true; Flush(); }

bool FCrimeForgeImportDependencyCache::TryGetRawResponse(const FString& Path, TSharedPtr<FJsonObject>& OutResponse) {
	Load();
	if (const TSharedPtr<FJsonObject>* Found = GRawResponses.Find(NormalizePackagePath(Path).ToLower())) { OutResponse = *Found; return OutResponse.IsValid(); }
	return false;
}

void FCrimeForgeImportDependencyCache::StoreRawResponse(const FString& Path, const TSharedPtr<FJsonObject>& Response) {
	if (!Response.IsValid() || !Response->HasField(TEXT("exports"))) return;
	Load();
	const FString Package = NormalizePackagePath(Path);
	const FString Key = Package.ToLower();
	GRawResponses.Add(Key, Response);

	FCrimeForgeDependencyCacheEntry Entry;
	if (const FCrimeForgeDependencyCacheEntry* Existing = GEntries.Find(Key)) Entry = *Existing;
	Entry.PackagePath = Package;
	Entry.SourceHash = HashJson(Response);
	const TArray<TSharedPtr<FJsonValue>>* Exports = nullptr;
	if (Response->TryGetArrayField(TEXT("exports"), Exports) && Exports) {
		/* Pick the actual root asset export rather than blindly using the first serialized subobject. */
		FString LeafName;
		Package.Split(TEXT("/"), nullptr, &LeafName, ESearchCase::IgnoreCase, ESearchDir::FromEnd);
		FString FirstType, NamedType, GeneratedType;
		for (const TSharedPtr<FJsonValue>& Export : *Exports) {
			if (!Export.IsValid() || Export->Type != EJson::Object) continue;
			const TSharedPtr<FJsonObject> ExportObject = Export->AsObject();
			if (!ExportObject.IsValid()) continue;
			FString Type, Name;
			ExportObject->TryGetStringField(TEXT("Type"), Type);
			ExportObject->TryGetStringField(TEXT("Name"), Name);
			if (FirstType.IsEmpty() && !Type.IsEmpty()) FirstType = Type;
			if (!LeafName.IsEmpty() && Name.Equals(LeafName, ESearchCase::IgnoreCase) && !Type.IsEmpty()) NamedType = Type;
			if (!LeafName.IsEmpty() && Name.Equals(LeafName + TEXT("_C"), ESearchCase::IgnoreCase) && Type.Contains(TEXT("GeneratedClass"), ESearchCase::IgnoreCase)) GeneratedType = Type;
		}
		if (!GeneratedType.IsEmpty()) Entry.Type = GeneratedType;
		else if (!NamedType.IsEmpty()) Entry.Type = NamedType;
		else if (!FirstType.IsEmpty()) Entry.Type = FirstType;

		TSet<FString> Deps;
		for (const TSharedPtr<FJsonValue>& Export : *Exports) CollectDependencies(Export, Deps);
		for (auto It = Deps.CreateIterator(); It; ++It) { if (It->Equals(Package, ESearchCase::IgnoreCase)) It.RemoveCurrent(); }
		Entry.Dependencies = Deps.Array();
		Entry.Dependencies.Sort();
	}
	GEntries.Add(Key, MoveTemp(Entry));
	bDirty = true;
}


void FCrimeForgeImportDependencyCache::StoreType(const FString& Path, const FString& Type) {
	if (Type.IsEmpty()) return;
	Load();
	const FString Package = NormalizePackagePath(Path);
	const FString Key = Package.ToLower();
	FCrimeForgeDependencyCacheEntry& Entry = GEntries.FindOrAdd(Key);
	Entry.PackagePath = Package;
	if (!Entry.Type.Equals(Type, ESearchCase::CaseSensitive)) {
		Entry.Type = Type;
		bDirty = true;
	}
}

bool FCrimeForgeImportDependencyCache::GetEntry(const FString& Path, FCrimeForgeDependencyCacheEntry& OutEntry) {
	Load();
	if (const FCrimeForgeDependencyCacheEntry* Found = GEntries.Find(NormalizePackagePath(Path).ToLower())) { OutEntry = *Found; return true; }
	return false;
}

TArray<FString> FCrimeForgeImportDependencyCache::GetDependencies(const FString& Path) { FCrimeForgeDependencyCacheEntry E; return GetEntry(Path, E) ? E.Dependencies : TArray<FString>(); }

TArray<FString> FCrimeForgeImportDependencyCache::GetDependents(const FString& Path) {
	Load();
	const FString Wanted = NormalizePackagePath(Path);
	TArray<FString> Result;
	for (const TPair<FString, FCrimeForgeDependencyCacheEntry>& Pair : GEntries) {
		if (Pair.Value.Dependencies.ContainsByPredicate([&](const FString& D){ return D.Equals(Wanted, ESearchCase::IgnoreCase); })) Result.Add(Pair.Value.PackagePath);
	}
	Result.Sort();
	return Result;
}

FString FCrimeForgeImportDependencyCache::GetSourceHash(const FString& Path) { FCrimeForgeDependencyCacheEntry E; return GetEntry(Path, E) ? E.SourceHash : FString(); }
FString FCrimeForgeImportDependencyCache::GetType(const FString& Path) { FCrimeForgeDependencyCacheEntry E; return GetEntry(Path, E) ? E.Type : FString(); }
