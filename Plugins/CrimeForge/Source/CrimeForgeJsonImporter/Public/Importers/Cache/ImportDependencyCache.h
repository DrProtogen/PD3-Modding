#pragma once

#include "CoreMinimal.h"
#include "Dom/JsonObject.h"

struct FCrimeForgeDependencyCacheEntry {
	FString PackagePath;
	FString Type;
	FString SourceHash;
	TArray<FString> Dependencies;
};

/* Session raw-export cache plus a small persistent index of source hashes/types/dependencies.
 * The persistent file contains no game asset payloads, only paths and hashes. */
class CRIMEFORGEJSONIMPORTER_API FCrimeForgeImportDependencyCache {
public:
	static void Load();
	static void Flush();
	static void Clear();

	static bool TryGetRawResponse(const FString& Path, TSharedPtr<FJsonObject>& OutResponse);
	static void StoreRawResponse(const FString& Path, const TSharedPtr<FJsonObject>& Response);
	static void StoreType(const FString& Path, const FString& Type);

	static bool GetEntry(const FString& Path, FCrimeForgeDependencyCacheEntry& OutEntry);
	static TArray<FString> GetDependencies(const FString& Path);
	static TArray<FString> GetDependents(const FString& Path);
	static FString GetSourceHash(const FString& Path);
	static FString GetType(const FString& Path);

	static FString NormalizePackagePath(FString Path);
	static FString HashJson(const TSharedPtr<FJsonObject>& Object);
};
