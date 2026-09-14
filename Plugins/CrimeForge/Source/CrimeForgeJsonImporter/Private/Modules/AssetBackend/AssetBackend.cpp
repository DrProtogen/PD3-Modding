

#include "Modules/AssetBackend/AssetBackend.h"

#include "Async/Async.h"
#include "Editor.h"
#include "Engine/EngineUtilities.h"
#include "Modules/AssetReader/AssetReader.h"
#include "Settings/Runtime.h"
#include "TimerManager.h"

namespace {
    TSharedPtr<FJsonObject> ParseJson(const FCrimeForgeAssetReaderResponse& Response) {
        /* Error responses are JSON too. Preserve them so callers can distinguish a genuinely missing
         * package from an indexed package that CUE4Parse failed to deserialize. */
        if (!Response.IsJson()) return nullptr;

        TSharedPtr<FJsonObject> Object;
        const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response.GetContentAsString());
        if (!FJsonSerializer::Deserialize(Reader, Object) || !Object.IsValid()) return nullptr;

        Object->SetNumberField(TEXT("__crimeForgeStatusCode"), Response.StatusCode);
        return Object;
    }

    FString HeaderValue(const TMap<FString, FString>& Headers, const FString& Wanted) {
        for (const TPair<FString, FString>& Pair : Headers) {
            if (Pair.Key.Equals(Wanted, ESearchCase::IgnoreCase)) return Pair.Value;
        }
        return FString();
    }

    void DispatchEmbeddedAsync(
        const TSharedRef<FJsonObject>& Request,
        TFunction<void(FCrimeForgeAssetReaderResponse)> OnComplete)
    {
        Async(EAsyncExecution::ThreadPool, [Request, OnComplete = MoveTemp(OnComplete)]() mutable {
            const FCrimeForgeAssetReaderResponse Response = FCrimeForgeAssetReader::Get().Request(Request);

            AsyncTask(ENamedThreads::GameThread, [Response, OnComplete = MoveTemp(OnComplete)]() mutable {
                OnComplete(Response);
            });
        });
    }
}

TSharedRef<FJsonObject> AssetBackend::BuildEmbeddedRequest(
    const FString& RequestURL,
    const TMap<FString, FString>& Parameters,
    const TMap<FString, FString>& Headers)
{
    const TSharedRef<FJsonObject> Request = MakeShared<FJsonObject>();

    if (RequestURL == MetadataURL) {
        Request->SetStringField(TEXT("op"), TEXT("metadata"));
        return Request;
    }

    if (RequestURL == TEXT("/api/status")) {
        Request->SetStringField(TEXT("op"), TEXT("status"));
        return Request;
    }

    if (RequestURL == FolderPathsURL) {
        Request->SetStringField(TEXT("op"), TEXT("folder_paths"));
        if (const FString* Path = Parameters.Find(TEXT("path"))) Request->SetStringField(TEXT("path"), *Path);
        return Request;
    }

    if (RequestURL == ExportURL) {
        Request->SetStringField(TEXT("op"), TEXT("export"));

        if (const FString* Path = Parameters.Find(TEXT("path"))) Request->SetStringField(TEXT("path"), *Path);

        bool bRaw = false;
        if (const FString* Raw = Parameters.Find(TEXT("raw"))) bRaw = Raw->Equals(TEXT("true"), ESearchCase::IgnoreCase);
        Request->SetBoolField(TEXT("raw"), bRaw);

        const FString ContentType = HeaderValue(Headers, TEXT("content-type"));
        if (!ContentType.IsEmpty()) Request->SetStringField(TEXT("contentType"), ContentType);

        const TSharedRef<FJsonObject> Extra = MakeShared<FJsonObject>();
        for (const TPair<FString, FString>& Pair : Parameters) {
            if (Pair.Key == TEXT("path") || Pair.Key == TEXT("raw")) continue;
            Extra->SetStringField(Pair.Key, Pair.Value);
        }
        Request->SetObjectField(TEXT("parameters"), Extra);
        return Request;
    }

    /* Unknown URL-shaped callers get an operation that the backend rejects explicitly. */
    Request->SetStringField(TEXT("op"), RequestURL);
    return Request;
}

void AssetBackend::Get(
    const FString& RequestURL,
    const TMap<FString, FString>& Parameters,
    const TMap<FString, FString>& Headers,
    TFunction<void(TSharedPtr<FJsonObject>)> OnComplete)
{
    /* Async callers used to assume an already-running Core process. Initialize the embedded
     * provider on the editor thread before handing the actual package read to a worker. */
    if (!FCrimeForgeAssetReader::Get().IsInitialized()) {
        FString Error;
        if (!FCrimeForgeAssetReader::Get().EnsureInitialized(&Error)) {
            UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("PAYDAY 3 backend initialization failed: %s"), *Error);
            OnComplete(nullptr);
            return;
        }
    }

    const TSharedRef<FJsonObject> Request = BuildEmbeddedRequest(RequestURL, Parameters, Headers);
    DispatchEmbeddedAsync(Request, [OnComplete = MoveTemp(OnComplete)](const FCrimeForgeAssetReaderResponse& Response) mutable {
        OnComplete(ParseJson(Response));
    });
}

void AssetBackend::Post(
    const FString& RequestURL,
    const FString& Body,
    const TMap<FString, FString>& Headers,
    TFunction<void(TSharedPtr<FJsonObject>, int32)> OnComplete)
{
    if (!FCrimeForgeAssetReader::Get().IsInitialized()) {
        FString Error;
        if (!FCrimeForgeAssetReader::Get().EnsureInitialized(&Error)) {
            UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("PAYDAY 3 backend initialization failed: %s"), *Error);
            OnComplete(nullptr, 0);
            return;
        }
    }

    if (RequestURL != TEXT("/api/validate")) {
        AsyncTask(ENamedThreads::GameThread, [OnComplete = MoveTemp(OnComplete)]() mutable {
            OnComplete(nullptr, 404);
        });
        return;
    }

    TSharedPtr<FJsonObject> BodyObject;
    const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Body);
    if (!FJsonSerializer::Deserialize(Reader, BodyObject) || !BodyObject.IsValid()) {
        AsyncTask(ENamedThreads::GameThread, [OnComplete = MoveTemp(OnComplete)]() mutable {
            OnComplete(nullptr, 400);
        });
        return;
    }

    const TSharedRef<FJsonObject> Request = MakeShared<FJsonObject>();
    Request->SetStringField(TEXT("op"), TEXT("validate"));
    Request->SetObjectField(TEXT("body"), BodyObject.ToSharedRef());

    DispatchEmbeddedAsync(Request,
        [OnComplete = MoveTemp(OnComplete)](const FCrimeForgeAssetReaderResponse& Response) mutable {
            OnComplete(ParseJson(Response), Response.StatusCode);
        });
}

TSharedPtr<FJsonObject> AssetBackend::GetBlocking(
    const FString& RequestURL,
    const TMap<FString, FString>& Parameters,
    const TMap<FString, FString>& Headers)
{
    return ParseJson(FCrimeForgeAssetReader::Get().RequestBlocking(BuildEmbeddedRequest(RequestURL, Parameters, Headers)));
}

void AssetBackend::RunWhenSafe(TFunction<void()> Work) {
    if (GEditor == nullptr) {
        Work();
        return;
    }

    GEditor->GetTimerManager()->SetTimerForNextTick(FTimerDelegate::CreateLambda([Work = MoveTemp(Work)]() mutable {
        Work();
    }));
}

void AssetBackend::Export::GetAsync(
    const FString& Path,
    const bool Raw,
    TMap<FString, FString> Parameters,
    const TMap<FString, FString>& Headers,
    TFunction<void(TSharedPtr<FJsonObject>)> OnResponse)
{
    Parameters.Add(TEXT("path"), Path);
    Parameters.Add(TEXT("raw"), Raw ? TEXT("true") : TEXT("false"));
    AssetBackend::Get(ExportURL, Parameters, Headers, MoveTemp(OnResponse));
}

void AssetBackend::Export::GetRawAsync(const FString& Path, TFunction<void(TSharedPtr<FJsonObject>)> OnResponse) {
    GetAsync(Path, true, {}, {}, MoveTemp(OnResponse));
}

void AssetBackend::Export::GetRawExportsAsync(
    const FString& Path,
    TFunction<void(const TArray<TSharedPtr<FJsonValue>>&)> OnResponse)
{
    GetRawAsync(Path, [OnResponse = MoveTemp(OnResponse)](const TSharedPtr<FJsonObject>& Response) mutable {
        if (!Response.IsValid() || Response->HasField(TEXT("errored"))) {
            OnResponse({});
            return;
        }

        const TArray<TSharedPtr<FJsonValue>>* Exports = nullptr;
        if (!Response->TryGetArrayField(TEXT("exports"), Exports) || !Exports) {
            OnResponse({});
            return;
        }

        OnResponse(*Exports);
    });
}

TSharedPtr<FJsonObject> AssetBackend::Export::GetBlocking(
    const FString& Path,
    const bool Raw,
    TMap<FString, FString> Parameters,
    const TMap<FString, FString>& Headers)
{
    Parameters.Add(TEXT("path"), Path);
    Parameters.Add(TEXT("raw"), Raw ? TEXT("true") : TEXT("false"));
    return AssetBackend::GetBlocking(ExportURL, Parameters, Headers);
}

TSharedPtr<FJsonObject> AssetBackend::Export::GetRawBlocking(
    const FString& Path,
    const TMap<FString, FString>& Parameters,
    const TMap<FString, FString>& Headers)
{
    return GetBlocking(Path, true, Parameters, Headers);
}

bool AssetBackend::Export::GetBinaryBlocking(const FString& Path, const FString& ContentType, TArray<uint8>& OutData) {
    const TSharedRef<FJsonObject> Request = BuildEmbeddedRequest(
        ExportURL,
        { { TEXT("path"), Path }, { TEXT("raw"), TEXT("false") } },
        { { TEXT("content-type"), ContentType } });

    const FCrimeForgeAssetReaderResponse Response = FCrimeForgeAssetReader::Get().RequestBlocking(Request);
    if (!Response.IsSuccess() || Response.IsJson()) return false;

    OutData = Response.Content;
    return OutData.Num() > 0;
}

TArray<FString> AssetBackend::Folder::GetPathsBlocking(const FString& Path) {
    TArray<FString> Paths;

    const TSharedPtr<FJsonObject> Response = AssetBackend::GetBlocking(FolderPathsURL, { { TEXT("path"), Path } });
    if (!Response.IsValid()) return Paths;

    const TArray<TSharedPtr<FJsonValue>>* Values = nullptr;
    if (!Response->TryGetArrayField(TEXT("paths"), Values) || !Values) return Paths;

    for (const TSharedPtr<FJsonValue>& Value : *Values) {
        FString AssetPath;
        if (Value.IsValid() && Value->TryGetString(AssetPath) && !AssetPath.IsEmpty()) Paths.Add(AssetPath);
    }

    return Paths;
}

static void ApplyMetadata(const TSharedPtr<FJsonObject>& MetadataResponse) {
    if (MetadataResponse->HasField(TEXT("name"))) {
        GCrimeForgeJsonImporterRuntime.Profile.ProjectName = MetadataResponse->GetStringField(TEXT("name"));
    }

    if (MetadataResponse->HasField(TEXT("major_version"))) {
        GCrimeForgeJsonImporterRuntime.MajorVersion = MetadataResponse->GetIntegerField(TEXT("major_version"));
    }

    if (MetadataResponse->HasField(TEXT("minor_version"))) {
        GCrimeForgeJsonImporterRuntime.MinorVersion = MetadataResponse->GetIntegerField(TEXT("minor_version"));
    }

    if (MetadataResponse->HasField(TEXT("profile"))) {
        const TSharedPtr<FJsonObject> Profile = MetadataResponse->GetObjectField(TEXT("profile"));
        if (Profile.IsValid() && Profile->HasField(TEXT("name"))) {
            GCrimeForgeJsonImporterRuntime.Profile.Name = Profile->GetStringField(TEXT("name"));
        }
    }
}

bool AssetBackend::EnsureMetadataBlocking() {
    if (!GCrimeForgeJsonImporterRuntime.Profile.ProjectName.IsEmpty()) return true;

    const FBlockingRequestScope BlockingScope(
        NSLOCTEXT("CrimeForgeJsonImporter", "LoadingPaydayMetadata", "Loading PAYDAY 3 data"));

    const TSharedPtr<FJsonObject> Response = GetBlocking(MetadataURL);
    if (!Response.IsValid()) return false;

    ApplyMetadata(Response);
    return !GCrimeForgeJsonImporterRuntime.Profile.ProjectName.IsEmpty();
}

void AssetBackend::Update(TFunction<void(bool)> OnResponse) {
    Get(MetadataURL, {}, {}, [OnResponse = MoveTemp(OnResponse)](const TSharedPtr<FJsonObject>& MetadataResponse) mutable {
        if (!MetadataResponse.IsValid()) {
            OnResponse(false);
            return;
        }

        ApplyMetadata(MetadataResponse);
        OnResponse(true);
    });
}
