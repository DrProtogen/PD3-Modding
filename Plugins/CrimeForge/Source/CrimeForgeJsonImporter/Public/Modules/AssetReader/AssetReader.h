

#pragma once

#include "CoreMinimal.h"

class FJsonObject;

/* One response from the stripped managed CUE4Parse backend hosted inside Unreal Editor. */
struct FCrimeForgeAssetReaderResponse {
    int32 StatusCode = 0;
    FString ContentType;
    TArray<uint8> Content;

    bool IsSuccess() const { return StatusCode >= 200 && StatusCode < 300; }
    bool IsJson() const { return ContentType.Contains(TEXT("json"), ESearchCase::IgnoreCase); }
    FString GetContentAsString() const;
};

/*
 * Hosts CrimeForge.AssetReader.dll through hostfxr. No Core.exe is started and no localhost server is
 * created: calls cross a tiny native ABI directly inside the Unreal Editor process.
 */
class CRIMEFORGEJSONIMPORTER_API FCrimeForgeAssetReader {
public:
    static FCrimeForgeAssetReader& Get();

    /* True when the framework-dependent managed publish exists and a compatible hostfxr can be resolved. */
    bool IsRuntimeAvailable() const;

    /* Whether a PAYDAY 3 provider has been initialized for the current settings. */
    bool IsInitialized() const;

    /* Loads .NET if needed and mounts PAYDAY 3 using CrimeForge's game path plus importer mappings/AES. */
    bool EnsureInitialized(FString* OutError = nullptr);

    /* Synchronous native->managed request. The provider is initialized automatically first. */
    FCrimeForgeAssetReaderResponse Request(const TSharedRef<FJsonObject>& RequestObject, bool bEnsureProvider = true);

    /* Same request, but when called on the game thread the managed work runs on a worker while the
     * editor progress UI is pumped. */
    FCrimeForgeAssetReaderResponse RequestBlocking(const TSharedRef<FJsonObject>& RequestObject, bool bEnsureProvider = true);

    void Shutdown();

    FString GetRuntimeDirectory() const;

private:
    FCrimeForgeAssetReader() = default;
    ~FCrimeForgeAssetReader();
    FCrimeForgeAssetReader(const FCrimeForgeAssetReader&) = delete;
    FCrimeForgeAssetReader& operator=(const FCrimeForgeAssetReader&) = delete;

    bool BuildRuntimeIfMissing(FString& OutError);
    bool LoadRuntime(FString& OutError);
    FString ResolveHostFxrPath() const;
    bool BuildInitializationRequest(TSharedRef<FJsonObject>& OutRequest, FString& OutSignature, FString& OutError) const;
    FCrimeForgeAssetReaderResponse InvokeManaged(const TSharedRef<FJsonObject>& RequestObject);
    void UnloadRuntime();

private:
    mutable FCriticalSection StateMutex;
    FCriticalSection ManagedCallMutex;

    void* HostFxrHandle = nullptr;
    void* HostContext = nullptr;

    using FManagedRequest = void* (__cdecl*)(const uint8*, int32, int32*);
    using FManagedFree = void (__cdecl*)(void*);

    FManagedRequest ManagedRequest = nullptr;
    FManagedFree ManagedFree = nullptr;

    bool bRuntimeLoaded = false;
    bool bInitialized = false;
    FString InitializationSignature;
};
