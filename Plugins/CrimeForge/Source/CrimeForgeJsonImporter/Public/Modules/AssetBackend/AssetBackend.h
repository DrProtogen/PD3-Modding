

#pragma once

#include "CoreMinimal.h"
#include "Serialization/JsonSerializer.h"
#include "Settings/CrimeForgeJsonImporterSettings.h"
#include "Modules/AssetBackend/BlockingRequest.h"

/*
 * Compatibility surface for Reflection's old transport API.
 *
 * There is no network process anymore. These methods now translate the same importer calls
 * into the embedded CrimeForge.AssetReader/CUE4Parse backend hosted inside Unreal Editor. Keeping this
 * class narrow avoids touching the serializer/importer code simply because its transport changed.
 */

struct FCrimeForgeFolderAssetEntry {
    FString Path;
    FString Type;
};

class CRIMEFORGEJSONIMPORTER_API AssetBackend {
public:
    class CRIMEFORGEJSONIMPORTER_API Status {
    public:
        /* Whether the AssetReader backend runtime is present in the CrimeForge plugin. */
        static bool IsOpened();

        static void IsReady(TFunction<void(bool)> OnResponse);

        /* Initializes PAYDAY 3 data on demand and reports any configuration/build problem. */
        static void Check(TFunction<void(bool)> OnResponse);

        static bool ShouldWaitUntilInitialized();
    };

public:
    static inline FString MetadataURL = TEXT("/api/metadata");
    static inline FString ExportURL = TEXT("/api/export");
    static inline FString FolderPathsURL = TEXT("/api/folder/paths");

    static void Update(TFunction<void(bool)> OnResponse);
    static bool EnsureMetadataBlocking();

public:
    class CRIMEFORGEJSONIMPORTER_API Export {
    public:
        static void GetAsync(const FString& Path, bool Raw, TMap<FString, FString> Parameters,
            const TMap<FString, FString>& Headers, TFunction<void(TSharedPtr<FJsonObject>)> OnResponse);
        static void GetRawAsync(const FString& Path, TFunction<void(TSharedPtr<FJsonObject>)> OnResponse);
        static void GetRawExportsAsync(const FString& Path,
            TFunction<void(const TArray<TSharedPtr<FJsonValue>>&)> OnResponse);

        static TSharedPtr<FJsonObject> GetBlocking(const FString& Path, bool Raw,
            TMap<FString, FString> Parameters = {}, const TMap<FString, FString>& Headers = {});
        static TSharedPtr<FJsonObject> GetRawBlocking(const FString& Path,
            const TMap<FString, FString>& Parameters = {}, const TMap<FString, FString>& Headers = {});

        static bool GetBinaryBlocking(const FString& Path, const FString& ContentType, TArray<uint8>& OutData);
    };

public:
    class CRIMEFORGEJSONIMPORTER_API Folder {
    public:
        static TArray<FCrimeForgeFolderAssetEntry> GetAssetsBlocking(const FString& Path);
        static TArray<FString> GetPathsBlocking(const FString& Path);
    };

public:
    /* URL-shaped compatibility methods used by validation and older importer code. */
    static void Get(const FString& RequestURL, const TMap<FString, FString>& Parameters,
        const TMap<FString, FString>& Headers, TFunction<void(TSharedPtr<FJsonObject>)> OnComplete);

    static void Post(const FString& RequestURL, const FString& Body,
        const TMap<FString, FString>& Headers,
        TFunction<void(TSharedPtr<FJsonObject>, int32)> OnComplete);

    static TSharedPtr<FJsonObject> GetBlocking(const FString& RequestURL,
        const TMap<FString, FString>& Parameters = {}, const TMap<FString, FString>& Headers = {});

    static void RunWhenSafe(TFunction<void()> Work);

private:
    static TSharedRef<FJsonObject> BuildEmbeddedRequest(const FString& RequestURL,
        const TMap<FString, FString>& Parameters, const TMap<FString, FString>& Headers);
};
