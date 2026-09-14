

#include "Modules/AssetReader/AssetReader.h"

#include "Async/Async.h"
#include "CrimeForgeSettings.h"
#include "Dom/JsonObject.h"
#include "Engine/Log.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformMisc.h"
#include "HAL/PlatformProcess.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Modules/AssetBackend/BlockingRequest.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "Settings/CrimeForgeJsonImporterSettings.h"

#if PLATFORM_WINDOWS
#include "Windows/AllowWindowsPlatformTypes.h"
#include <windows.h>
#include "Windows/HideWindowsPlatformTypes.h"
#endif

namespace {
#if PLATFORM_WINDOWS
    using hostfxr_handle = void*;
    using hostfxr_initialize_for_runtime_config_fn = int32 (__cdecl*)(const wchar_t*, const void*, hostfxr_handle*);
    using hostfxr_get_runtime_delegate_fn = int32 (__cdecl*)(hostfxr_handle, int32, void**);
    using hostfxr_close_fn = int32 (__cdecl*)(hostfxr_handle);
    using load_assembly_and_get_function_pointer_fn = int32 (__cdecl*)(
        const wchar_t*, const wchar_t*, const wchar_t*, const wchar_t*, void*, void**);

    constexpr int32 HdtLoadAssemblyAndGetFunctionPointer = 5;
    const wchar_t* UnmanagedCallersOnlyMethod = reinterpret_cast<const wchar_t*>(static_cast<intptr_t>(-1));
#endif

    // Increment whenever the embedded managed AssetReader source changes in a way that must be
    // republished. The published runtime records this revision so overwriting/updating the plugin
    // cannot silently keep loading a stale CrimeForge.AssetReader.dll from Binaries/Win64.
    constexpr const TCHAR* AssetReaderManagedSourceRevision = TEXT("2026-09-14-msbuild-isolation-v7");

    struct FAssetReaderBuildResult {
        bool bLaunched = false;
        int32 ReturnCode = INDEX_NONE;
        FString StdOut;
        FString StdErr;
    };

    bool HasCurrentAssetReaderRevision(const FString& RuntimeDirectory) {
        if (RuntimeDirectory.IsEmpty()) return false;

        FString RecordedRevision;
        if (!FFileHelper::LoadFileToString(
                RecordedRevision,
                *FPaths::Combine(RuntimeDirectory, TEXT("managed-source-revision.txt")))) {
            return false;
        }

        return RecordedRevision.TrimStartAndEnd().Equals(
            AssetReaderManagedSourceRevision,
            ESearchCase::CaseSensitive);
    }

    FString TailForError(const FString& Text, const int32 MaxChars = 4000) {
        FString Trimmed = Text.TrimStartAndEnd();
        if (Trimmed.Len() <= MaxChars) return Trimmed;
        return TEXT("...") + Trimmed.Right(MaxChars);
    }

    FString ExtractBuildErrors(const FString& Text, const int32 MaxLines = 40) {
        TArray<FString> Lines;
        Text.ParseIntoArrayLines(Lines);

        TArray<FString> Errors;
        for (FString Line : Lines) {
            const FString Lower = Line.ToLower();
            if (Lower.Contains(TEXT(": error "))
                || Lower.Contains(TEXT(" error cs"))
                || Lower.Contains(TEXT(" error nu"))
                || Lower.Contains(TEXT(" error msb"))
                || Lower.StartsWith(TEXT("error "))) {
                Line = Line.TrimStartAndEnd();
                if (!Line.IsEmpty()) Errors.AddUnique(Line);
                if (Errors.Num() >= MaxLines) break;
            }
        }

        return Errors.Num() > 0 ? FString::Join(Errors, TEXT("\n")) : FString();
    }

#if PLATFORM_WINDOWS
    bool ExecProcessHidden(
        const FString& Executable,
        const FString& Arguments,
        int32& OutReturnCode,
        FString& OutStdOut,
        FString& OutStdErr,
        const TCHAR* WorkingDirectory = nullptr)
    {
        OutReturnCode = INDEX_NONE;
        OutStdOut.Reset();
        OutStdErr.Reset();

        void* StdOutRead = nullptr;
        void* StdOutWrite = nullptr;
        void* StdErrRead = nullptr;
        void* StdErrWrite = nullptr;

        if (!FPlatformProcess::CreatePipe(StdOutRead, StdOutWrite)) {
            return false;
        }
        if (!FPlatformProcess::CreatePipe(StdErrRead, StdErrWrite)) {
            FPlatformProcess::ClosePipe(StdOutRead, StdOutWrite);
            return false;
        }

        uint32 ProcessId = 0;
        FProcHandle Process = FPlatformProcess::CreateProc(
            *Executable,
            *Arguments,
            false,  // detached
            true,   // hidden
            true,   // really hidden: never create a console window
            &ProcessId,
            0,
            WorkingDirectory,
            StdOutWrite,
            nullptr,
            StdErrWrite);

        if (!Process.IsValid()) {
            FPlatformProcess::ClosePipe(StdOutRead, StdOutWrite);
            FPlatformProcess::ClosePipe(StdErrRead, StdErrWrite);
            return false;
        }

        while (FPlatformProcess::IsProcRunning(Process)) {
            OutStdOut += FPlatformProcess::ReadPipe(StdOutRead);
            OutStdErr += FPlatformProcess::ReadPipe(StdErrRead);
            FPlatformProcess::Sleep(0.01f);
        }

        // Drain any text written immediately before process exit.
        OutStdOut += FPlatformProcess::ReadPipe(StdOutRead);
        OutStdErr += FPlatformProcess::ReadPipe(StdErrRead);

        const bool bGotReturnCode = FPlatformProcess::GetProcReturnCode(Process, &OutReturnCode);
        FPlatformProcess::CloseProc(Process);
        FPlatformProcess::ClosePipe(StdOutRead, StdOutWrite);
        FPlatformProcess::ClosePipe(StdErrRead, StdErrWrite);
        return bGotReturnCode;
    }
#endif

    bool DirectoryHasArchives(const FString& Directory) {
        if (Directory.IsEmpty() || !IFileManager::Get().DirectoryExists(*Directory)) {
            return false;
        }

        TArray<FString> Found;
        IFileManager::Get().FindFiles(Found, *FPaths::Combine(Directory, TEXT("*.pak")), true, false);
        if (Found.Num() > 0) return true;

        Found.Reset();
        IFileManager::Get().FindFiles(Found, *FPaths::Combine(Directory, TEXT("*.utoc")), true, false);
        return Found.Num() > 0;
    }

    FString ResolveArchiveDirectory(const FString& ConfiguredGamePath) {
        FString Root = ConfiguredGamePath;
        FPaths::NormalizeDirectoryName(Root);

        const TArray<FString> Candidates = {
            FPaths::Combine(Root, TEXT("PAYDAY3"), TEXT("Content"), TEXT("Paks")),
            FPaths::Combine(Root, TEXT("Content"), TEXT("Paks")),
            FPaths::Combine(Root, TEXT("Paks")),
            Root
        };

        for (FString Candidate : Candidates) {
            Candidate = FPaths::ConvertRelativePathToFull(Candidate);
            FPaths::NormalizeDirectoryName(Candidate);
            if (DirectoryHasArchives(Candidate)) return Candidate;
        }

        return FString();
    }

    FString NormalizeExistingFile(const FString& InPath) {
        if (InPath.IsEmpty()) return FString();

        FString Result = InPath;
        if (FPaths::IsRelative(Result)) {
            Result = FPaths::ConvertRelativePathToFull(FPaths::ProjectDir(), Result);
        } else {
            Result = FPaths::ConvertRelativePathToFull(Result);
        }
        FPaths::NormalizeFilename(Result);

        return IFileManager::Get().FileExists(*Result) ? Result : FString();
    }

    TSharedRef<FJsonObject> MakeOperation(const TCHAR* Operation) {
        const TSharedRef<FJsonObject> Object = MakeShared<FJsonObject>();
        Object->SetStringField(TEXT("op"), Operation);
        return Object;
    }

#if PLATFORM_WINDOWS
    struct FDotNetVersion {
        int32 Major = 0;
        int32 Minor = 0;
        int32 Patch = 0;

        bool operator<(const FDotNetVersion& Other) const {
            if (Major != Other.Major) return Major < Other.Major;
            if (Minor != Other.Minor) return Minor < Other.Minor;
            return Patch < Other.Patch;
        }
    };

    FDotNetVersion ParseDotNetVersion(const FString& DirectoryName) {
        FDotNetVersion Result;
        TArray<FString> Parts;
        DirectoryName.ParseIntoArray(Parts, TEXT("."), false);
        if (Parts.IsValidIndex(0)) Result.Major = FCString::Atoi(*Parts[0]);
        if (Parts.IsValidIndex(1)) Result.Minor = FCString::Atoi(*Parts[1]);
        if (Parts.IsValidIndex(2)) Result.Patch = FCString::Atoi(*Parts[2]);
        return Result;
    }

    FString FindNewestHostFxr(const FString& DotNetRoot) {
        if (DotNetRoot.IsEmpty()) return FString();

        FString Root = DotNetRoot;
        FPaths::NormalizeDirectoryName(Root);
        const FString FxrRoot = FPaths::Combine(Root, TEXT("host"), TEXT("fxr"));
        if (!IFileManager::Get().DirectoryExists(*FxrRoot)) return FString();

        TArray<FString> VersionDirs;
        IFileManager::Get().FindFiles(VersionDirs, *FPaths::Combine(FxrRoot, TEXT("*")), false, true);

        FString BestPath;
        FDotNetVersion BestVersion;
        bool bHaveBest = false;

        for (const FString& VersionDir : VersionDirs) {
            const FString Candidate = FPaths::Combine(FxrRoot, VersionDir, TEXT("hostfxr.dll"));
            if (!FPaths::FileExists(Candidate)) continue;

            const FDotNetVersion Version = ParseDotNetVersion(VersionDir);
            if (!bHaveBest || BestVersion < Version) {
                BestVersion = Version;
                BestPath = Candidate;
                bHaveBest = true;
            }
        }

        return BestPath;
    }


    bool DotNetHasSdkMajor(const FString& DotNetExe, const int32 RequiredMajor, FString& OutSdkList) {
        OutSdkList.Reset();
        if (DotNetExe.IsEmpty() || !IFileManager::Get().FileExists(*DotNetExe)) return false;

        int32 ReturnCode = INDEX_NONE;
        FString StdErr;
        if (!ExecProcessHidden(DotNetExe, TEXT("--list-sdks"), ReturnCode, OutSdkList, StdErr)
            || ReturnCode != 0) {
            if (!StdErr.IsEmpty()) {
                if (!OutSdkList.IsEmpty()) OutSdkList += TEXT("\n");
                OutSdkList += StdErr;
            }
            return false;
        }

        TArray<FString> Lines;
        OutSdkList.ParseIntoArrayLines(Lines);
        const FString Prefix = FString::Printf(TEXT("%d."), RequiredMajor);
        for (FString Line : Lines) {
            Line = Line.TrimStartAndEnd();
            if (Line.StartsWith(Prefix)) return true;
        }
        return false;
    }

    FString FindDotNetWithSdkMajor(const int32 RequiredMajor, FString& OutSdkDetail) {
        TArray<FString> Candidates;
        auto AddCandidate = [&Candidates](FString Candidate) {
            Candidate = Candidate.TrimStartAndEnd();
            FPaths::NormalizeFilename(Candidate);
            if (!Candidate.IsEmpty()) Candidates.AddUnique(Candidate);
        };

        // UE5.5 already ships the .NET 8 SDK used by UnrealBuildTool. Prefer it so CrimeForge
        // does not require users to install another SDK just to use AssetReader.
        const FString UnrealDotNetRoot = FPaths::ConvertRelativePathToFull(
            FPaths::Combine(FPaths::EngineDir(), TEXT("Binaries"), TEXT("ThirdParty"), TEXT("DotNet")));
        if (IFileManager::Get().DirectoryExists(*UnrealDotNetRoot)) {
            TArray<FString> BundleVersions;
            IFileManager::Get().FindFiles(BundleVersions, *FPaths::Combine(UnrealDotNetRoot, TEXT("*")), false, true);
            BundleVersions.Sort([](const FString& A, const FString& B) {
                return ParseDotNetVersion(B) < ParseDotNetVersion(A);
            });

            for (const FString& Version : BundleVersions) {
                AddCandidate(FPaths::Combine(UnrealDotNetRoot, Version, TEXT("win-x64"), TEXT("dotnet.exe")));
            }

            AddCandidate(FPaths::Combine(UnrealDotNetRoot, TEXT("win-x64"), TEXT("dotnet.exe")));
        }

        const FString DotNetRootX64 = FPlatformMisc::GetEnvironmentVariable(TEXT("DOTNET_ROOT_X64"));
        if (!DotNetRootX64.IsEmpty()) AddCandidate(FPaths::Combine(DotNetRootX64, TEXT("dotnet.exe")));

        const FString DotNetRoot = FPlatformMisc::GetEnvironmentVariable(TEXT("DOTNET_ROOT"));
        if (!DotNetRoot.IsEmpty()) AddCandidate(FPaths::Combine(DotNetRoot, TEXT("dotnet.exe")));

        const FString ProgramW6432 = FPlatformMisc::GetEnvironmentVariable(TEXT("ProgramW6432"));
        if (!ProgramW6432.IsEmpty()) AddCandidate(FPaths::Combine(ProgramW6432, TEXT("dotnet"), TEXT("dotnet.exe")));

        const FString ProgramFiles = FPlatformMisc::GetEnvironmentVariable(TEXT("ProgramFiles"));
        if (!ProgramFiles.IsEmpty()) AddCandidate(FPaths::Combine(ProgramFiles, TEXT("dotnet"), TEXT("dotnet.exe")));

        const FString UserProfile = FPlatformMisc::GetEnvironmentVariable(TEXT("USERPROFILE"));
        if (!UserProfile.IsEmpty()) AddCandidate(FPaths::Combine(UserProfile, TEXT(".dotnet"), TEXT("dotnet.exe")));

        int32 WhereCode = INDEX_NONE;
        FString WhereOut;
        FString WhereErr;
        if (ExecProcessHidden(TEXT("where.exe"), TEXT("dotnet"), WhereCode, WhereOut, WhereErr)
            && WhereCode == 0) {
            TArray<FString> Lines;
            WhereOut.ParseIntoArrayLines(Lines);
            for (FString Line : Lines) AddCandidate(Line);
        }

        TArray<FString> Diagnostics;
        for (const FString& Candidate : Candidates) {
            if (!IFileManager::Get().FileExists(*Candidate)) continue;

            FString SdkList;
            if (DotNetHasSdkMajor(Candidate, RequiredMajor, SdkList)) {
                OutSdkDetail = SdkList;
                return Candidate;
            }

            Diagnostics.Add(FString::Printf(
                TEXT("%s\n%s"),
                *Candidate,
                SdkList.IsEmpty() ? TEXT("  No SDK list returned.") : *SdkList));
        }

        OutSdkDetail = Diagnostics.Num() > 0
            ? FString::Join(Diagnostics, TEXT("\n\n"))
            : TEXT("No dotnet.exe installations were found.");
        return FString();
    }
#endif

    FString ResponseError(const FCrimeForgeAssetReaderResponse& Response) {
        if (Response.Content.Num() == 0) {
            return FString::Printf(TEXT("AssetReader returned status %d"), Response.StatusCode);
        }

        if (Response.IsJson()) {
            const FString Text = Response.GetContentAsString();
            TSharedPtr<FJsonObject> Json;
            const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Text);
            if (FJsonSerializer::Deserialize(Reader, Json) && Json.IsValid()) {
                FString Message;
                if (Json->TryGetStringField(TEXT("errorMessage"), Message)) return Message;
                if (Json->TryGetStringField(TEXT("error"), Message)) return Message;
            }
            return Text;
        }

        return Response.GetContentAsString();
    }
}

FString FCrimeForgeAssetReaderResponse::GetContentAsString() const {
    if (Content.Num() == 0) return FString();

    FUTF8ToTCHAR Converted(reinterpret_cast<const ANSICHAR*>(Content.GetData()), Content.Num());
    return FString(Converted.Length(), Converted.Get());
}

FCrimeForgeAssetReader& FCrimeForgeAssetReader::Get() {
    static FCrimeForgeAssetReader Instance;
    return Instance;
}

FCrimeForgeAssetReader::~FCrimeForgeAssetReader() {
    Shutdown();
    UnloadRuntime();
}

FString FCrimeForgeAssetReader::GetRuntimeDirectory() const {
    const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("CrimeForge"));
    if (!Plugin.IsValid()) return FString();

    return FPaths::ConvertRelativePathToFull(
        FPaths::Combine(Plugin->GetBaseDir(), TEXT("Binaries"), TEXT("Win64"), TEXT("CrimeForgeAssetReader")));
}

bool FCrimeForgeAssetReader::IsRuntimeAvailable() const {
#if !PLATFORM_WINDOWS
    return false;
#else
    const FString Directory = GetRuntimeDirectory();
    return !Directory.IsEmpty()
        && FPaths::FileExists(FPaths::Combine(Directory, TEXT("CrimeForge.AssetReader.dll")))
        && FPaths::FileExists(FPaths::Combine(Directory, TEXT("CrimeForge.AssetReader.runtimeconfig.json")))
        && FPaths::FileExists(FPaths::Combine(Directory, TEXT("framework-dependent.marker")))
        && HasCurrentAssetReaderRevision(Directory)
        && !ResolveHostFxrPath().IsEmpty();
#endif
}

FString FCrimeForgeAssetReader::ResolveHostFxrPath() const {
#if !PLATFORM_WINDOWS
    return FString();
#else
    const FString RuntimeDirectory = GetRuntimeDirectory();

    // Prefer the .NET installation that actually published AssetReader.
    FString RecordedRoot;
    if (!RuntimeDirectory.IsEmpty()) {
        FFileHelper::LoadFileToString(RecordedRoot, *FPaths::Combine(RuntimeDirectory, TEXT("dotnet-root.txt")));
        RecordedRoot = RecordedRoot.TrimStartAndEnd();
        if (!RecordedRoot.IsEmpty()) {
            const FString Found = FindNewestHostFxr(RecordedRoot);
            if (!Found.IsEmpty()) return Found;
        }
    }

    TArray<FString> Roots;
    auto AddRoot = [&Roots](FString Root) {
        Root = Root.TrimStartAndEnd();
        FPaths::NormalizeDirectoryName(Root);
        if (!Root.IsEmpty()) Roots.AddUnique(Root);
    };

    AddRoot(FPlatformMisc::GetEnvironmentVariable(TEXT("DOTNET_ROOT_X64")));
    AddRoot(FPlatformMisc::GetEnvironmentVariable(TEXT("DOTNET_ROOT")));

    const FString ProgramW6432 = FPlatformMisc::GetEnvironmentVariable(TEXT("ProgramW6432"));
    if (!ProgramW6432.IsEmpty()) AddRoot(FPaths::Combine(ProgramW6432, TEXT("dotnet")));

    const FString ProgramFiles = FPlatformMisc::GetEnvironmentVariable(TEXT("ProgramFiles"));
    if (!ProgramFiles.IsEmpty()) AddRoot(FPaths::Combine(ProgramFiles, TEXT("dotnet")));

    const FString UserProfile = FPlatformMisc::GetEnvironmentVariable(TEXT("USERPROFILE"));
    if (!UserProfile.IsEmpty()) AddRoot(FPaths::Combine(UserProfile, TEXT(".dotnet")));

    // Finally ask PATH which dotnet.exe would be used from this editor process.
    int32 ReturnCode = INDEX_NONE;
    FString StdOut;
    FString StdErr;
    if (ExecProcessHidden(TEXT("where.exe"), TEXT("dotnet"), ReturnCode, StdOut, StdErr) && ReturnCode == 0) {
        TArray<FString> Lines;
        StdOut.ParseIntoArrayLines(Lines);
        for (FString Line : Lines) {
            Line = Line.TrimStartAndEnd();
            if (!Line.IsEmpty()) AddRoot(FPaths::GetPath(Line));
        }
    }

    for (const FString& Root : Roots) {
        const FString Found = FindNewestHostFxr(Root);
        if (!Found.IsEmpty()) return Found;
    }

    return FString();
#endif
}

bool FCrimeForgeAssetReader::IsInitialized() const {
    FScopeLock Lock(&StateMutex);
    return bInitialized;
}

bool FCrimeForgeAssetReader::BuildRuntimeIfMissing(FString& OutError) {
#if !PLATFORM_WINDOWS
    OutError = TEXT("CrimeForge AssetReader currently supports Win64 only.");
    return false;
#else
    if (IsRuntimeAvailable()) return true;

    const FString ExistingRuntimeDirectory = GetRuntimeDirectory();
    if (!ExistingRuntimeDirectory.IsEmpty()
        && FPaths::FileExists(FPaths::Combine(ExistingRuntimeDirectory, TEXT("CrimeForge.AssetReader.dll")))
        && !HasCurrentAssetReaderRevision(ExistingRuntimeDirectory)) {
        UE_LOG(
            LogCrimeForgeJsonImporter,
            Display,
            TEXT("CrimeForge AssetReader runtime is stale; republishing managed backend (expected revision %s)."),
            AssetReaderManagedSourceRevision);
    }

    const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("CrimeForge"));
    if (!Plugin.IsValid()) {
        OutError = TEXT("CrimeForge could not resolve its plugin directory.");
        return false;
    }

    const FString ProjectFile = FPaths::ConvertRelativePathToFull(
        FPaths::Combine(
            Plugin->GetBaseDir(),
            TEXT("Managed"),
            TEXT("CrimeForge.AssetReader"),
            TEXT("CrimeForge.AssetReader.csproj")));

    if (!FPaths::FileExists(ProjectFile)) {
        OutError = FString::Printf(TEXT("AssetReader project file was not found: %s"), *ProjectFile);
        return false;
    }

    FString SdkDetail;
    const FString DotNetExe = FindDotNetWithSdkMajor(8, SdkDetail);
    if (DotNetExe.IsEmpty()) {
        OutError = FString::Printf(
            TEXT("CrimeForge AssetReader requires the .NET 8 SDK, but no dotnet installation with an 8.x SDK was found.\n\nDetected dotnet installations / SDKs:\n%s"),
            *SdkDetail);
        return false;
    }

    const FString RuntimeDirectory = GetRuntimeDirectory();
    if (RuntimeDirectory.IsEmpty()) {
        OutError = TEXT("CrimeForge could not determine the AssetReader runtime directory.");
        return false;
    }

    // A partial/old publish is more dangerous than no publish. Recreate the runtime directory
    // and have dotnet emit directly into the exact directory the native host will load from.
    IFileManager::Get().DeleteDirectory(*RuntimeDirectory, false, true);
    if (!IFileManager::Get().MakeDirectory(*RuntimeDirectory, true)) {
        OutError = FString::Printf(TEXT("CrimeForge could not create the AssetReader runtime directory: %s"), *RuntimeDirectory);
        return false;
    }

    const FString Arguments = FString::Printf(
        TEXT("publish \"%s\" -c Release -r win-x64 --self-contained false --nologo -v:minimal -p:UseAppHost=false -p:GenerateRuntimeConfigurationFiles=true -p:CUE4PARSE_SKIP_NATIVE=true -o \"%s\""),
        *ProjectFile,
        *RuntimeDirectory);

    auto RunBuild = [DotNetExe, Arguments]() {
        FAssetReaderBuildResult Result;
        Result.bLaunched = ExecProcessHidden(
            DotNetExe,
            Arguments,
            Result.ReturnCode,
            Result.StdOut,
            Result.StdErr);
        return Result;
    };

    FAssetReaderBuildResult Result;
    if (IsInGameThread()) {
        const FBlockingRequestScope BuildScope(
            NSLOCTEXT("CrimeForgeJsonImporter", "BuildingAssetReader", "Building CrimeForge AssetReader"));

        TFuture<FAssetReaderBuildResult> Future = Async(EAsyncExecution::ThreadPool, RunBuild);
        while (!Future.IsReady()) {
            FBlockingRequestScope::Pump();
            FPlatformProcess::Sleep(0.05f);
        }
        Result = Future.Get();
    } else {
        Result = RunBuild();
    }

    if (!Result.bLaunched) {
        OutError = FString::Printf(TEXT("CrimeForge could not start dotnet.exe: %s"), *DotNetExe);
        return false;
    }

    const FString AssemblyPath = FPaths::Combine(RuntimeDirectory, TEXT("CrimeForge.AssetReader.dll"));
    const FString RuntimeConfigPath = FPaths::Combine(RuntimeDirectory, TEXT("CrimeForge.AssetReader.runtimeconfig.json"));

    if (Result.ReturnCode != 0
        || !IFileManager::Get().FileExists(*AssemblyPath)
        || !IFileManager::Get().FileExists(*RuntimeConfigPath)) {
        FString FullBuildOutput = Result.StdOut;
        if (!Result.StdErr.IsEmpty()) {
            if (!FullBuildOutput.IsEmpty()) FullBuildOutput += TEXT("\n");
            FullBuildOutput += Result.StdErr;
        }

        const FString BuildLogPath = FPaths::ConvertRelativePathToFull(
            FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("Logs"), TEXT("CrimeForgeAssetReaderBuild.log")));
        IFileManager::Get().MakeDirectory(*FPaths::GetPath(BuildLogPath), true);
        FFileHelper::SaveStringToFile(FullBuildOutput, *BuildLogPath);

        FString BuildOutput = ExtractBuildErrors(FullBuildOutput);
        if (BuildOutput.IsEmpty()) BuildOutput = TailForError(FullBuildOutput, 6000);

        OutError = FString::Printf(
            TEXT("CrimeForge could not publish AssetReader.\n\ndotnet: %s\nExit code: %d\nOutput directory: %s\nAssembly: %s\nRuntime config: %s\nFull build log: %s%s%s"),
            *DotNetExe,
            Result.ReturnCode,
            *RuntimeDirectory,
            IFileManager::Get().FileExists(*AssemblyPath) ? TEXT("found") : TEXT("missing"),
            IFileManager::Get().FileExists(*RuntimeConfigPath) ? TEXT("found") : TEXT("missing"),
            *BuildLogPath,
            BuildOutput.IsEmpty() ? TEXT("") : TEXT("\n\nBuild errors:\n"),
            *BuildOutput);
        return false;
    }

    const FString DotNetRoot = FPaths::GetPath(DotNetExe);
    const FString HostFxr = FindNewestHostFxr(DotNetRoot);
    if (HostFxr.IsEmpty()) {
        OutError = FString::Printf(
            TEXT("AssetReader published successfully, but CrimeForge could not find hostfxr.dll under the .NET installation that built it: %s"),
            *DotNetRoot);
        return false;
    }

    if (!FFileHelper::SaveStringToFile(
            DotNetRoot,
            *FPaths::Combine(RuntimeDirectory, TEXT("dotnet-root.txt")))) {
        OutError = TEXT("AssetReader published successfully, but CrimeForge could not record the .NET root.");
        return false;
    }

    if (!FFileHelper::SaveStringToFile(
            TEXT("CrimeForge AssetReader framework-dependent publish"),
            *FPaths::Combine(RuntimeDirectory, TEXT("framework-dependent.marker")))) {
        OutError = TEXT("AssetReader published successfully, but CrimeForge could not create its runtime marker.");
        return false;
    }

    if (!FFileHelper::SaveStringToFile(
            AssetReaderManagedSourceRevision,
            *FPaths::Combine(RuntimeDirectory, TEXT("managed-source-revision.txt")))) {
        OutError = TEXT("AssetReader published successfully, but CrimeForge could not record the managed source revision.");
        return false;
    }

    if (!IsRuntimeAvailable()) {
        OutError = FString::Printf(
            TEXT("AssetReader was published and its required files exist, but CrimeForge still could not validate the runtime.\n\nAssembly: %s\nRuntime config: %s\nhostfxr: %s"),
            *AssemblyPath,
            *RuntimeConfigPath,
            *HostFxr);
        return false;
    }

    UE_LOG(
        LogCrimeForgeJsonImporter,
        Display,
        TEXT("CrimeForge AssetReader published automatically with %s."),
        *DotNetExe);
    return true;
#endif
}

bool FCrimeForgeAssetReader::LoadRuntime(FString& OutError) {
#if !PLATFORM_WINDOWS
    OutError = TEXT("CrimeForge AssetReader currently supports Win64 only.");
    return false;
#else
    {
        FScopeLock Lock(&StateMutex);
        if (bRuntimeLoaded && ManagedRequest && ManagedFree) return true;
    }

    if (!BuildRuntimeIfMissing(OutError)) {
        return false;
    }

    const FString RuntimeDirectory = GetRuntimeDirectory();
    const FString HostFxrPath = ResolveHostFxrPath();
    const FString RuntimeConfigPath = FPaths::Combine(RuntimeDirectory, TEXT("CrimeForge.AssetReader.runtimeconfig.json"));
    const FString AssemblyPath = FPaths::Combine(RuntimeDirectory, TEXT("CrimeForge.AssetReader.dll"));

    if (!FPaths::FileExists(HostFxrPath) || !FPaths::FileExists(RuntimeConfigPath) || !FPaths::FileExists(AssemblyPath)) {
        OutError = FString::Printf(TEXT("CrimeForge AssetReader runtime is incomplete at %s."), *RuntimeDirectory);
        return false;
    }

    void* LocalHostFxr = FPlatformProcess::GetDllHandle(*HostFxrPath);
    if (!LocalHostFxr) {
        OutError = FString::Printf(TEXT("Could not load hostfxr.dll from %s"), *HostFxrPath);
        return false;
    }

    const auto Initialize = reinterpret_cast<hostfxr_initialize_for_runtime_config_fn>(
        FPlatformProcess::GetDllExport(LocalHostFxr, TEXT("hostfxr_initialize_for_runtime_config")));
    const auto GetDelegate = reinterpret_cast<hostfxr_get_runtime_delegate_fn>(
        FPlatformProcess::GetDllExport(LocalHostFxr, TEXT("hostfxr_get_runtime_delegate")));
    const auto Close = reinterpret_cast<hostfxr_close_fn>(
        FPlatformProcess::GetDllExport(LocalHostFxr, TEXT("hostfxr_close")));

    if (!Initialize || !GetDelegate || !Close) {
        OutError = TEXT("hostfxr.dll is missing one or more hosting exports.");
        FPlatformProcess::FreeDllHandle(LocalHostFxr);
        return false;
    }

    hostfxr_handle Context = nullptr;
    const int32 InitResult = Initialize(*RuntimeConfigPath, nullptr, &Context);
    if (InitResult < 0 || !Context) {
        OutError = FString::Printf(TEXT("hostfxr failed to initialize CrimeForge.AssetReader (0x%08X)."), InitResult);
        FPlatformProcess::FreeDllHandle(LocalHostFxr);
        return false;
    }

    void* LoadAssemblyRaw = nullptr;
    const int32 DelegateResult = GetDelegate(Context, HdtLoadAssemblyAndGetFunctionPointer, &LoadAssemblyRaw);
    if (DelegateResult < 0 || !LoadAssemblyRaw) {
        OutError = FString::Printf(TEXT("hostfxr could not provide the managed assembly loader (0x%08X)."), DelegateResult);
        Close(Context);
        FPlatformProcess::FreeDllHandle(LocalHostFxr);
        return false;
    }

    const auto LoadAssembly = reinterpret_cast<load_assembly_and_get_function_pointer_fn>(LoadAssemblyRaw);
    void* RequestRaw = nullptr;
    void* FreeRaw = nullptr;

    const int32 RequestResult = LoadAssembly(
        *AssemblyPath,
        L"CrimeForge.AssetReader.Bridge, CrimeForge.AssetReader",
        L"Request",
        UnmanagedCallersOnlyMethod,
        nullptr,
        &RequestRaw);

    const int32 FreeResult = LoadAssembly(
        *AssemblyPath,
        L"CrimeForge.AssetReader.Bridge, CrimeForge.AssetReader",
        L"Free",
        UnmanagedCallersOnlyMethod,
        nullptr,
        &FreeRaw);

    Close(Context);

    if (RequestResult < 0 || FreeResult < 0 || !RequestRaw || !FreeRaw) {
        OutError = FString::Printf(
            TEXT("CrimeForge.AssetReader bridge exports could not be loaded (Request=0x%08X, Free=0x%08X)."),
            RequestResult, FreeResult);
        FPlatformProcess::FreeDllHandle(LocalHostFxr);
        return false;
    }

    {
        FScopeLock Lock(&StateMutex);
        HostFxrHandle = LocalHostFxr;
        HostContext = nullptr;
        ManagedRequest = reinterpret_cast<FManagedRequest>(RequestRaw);
        ManagedFree = reinterpret_cast<FManagedFree>(FreeRaw);
        bRuntimeLoaded = true;
    }

    return true;
#endif
}

bool FCrimeForgeAssetReader::BuildInitializationRequest(
    TSharedRef<FJsonObject>& OutRequest,
    FString& OutSignature,
    FString& OutError) const
{
    const UCrimeForgeSettings* Settings = UCrimeForgeSettings::Get();

    const FString ArchiveDirectory = ResolveArchiveDirectory(Settings->PD3GamePath.Path);
    if (ArchiveDirectory.IsEmpty()) {
        OutError = TEXT("CrimeForge could not find PAYDAY 3 .pak/.utoc files. Set PAYDAY 3 Game Path under Project Settings -> Plugins -> CrimeForge.");
        return false;
    }

    const FString MappingsFile = NormalizeExistingFile(Settings->MappingsFile.FilePath);
    if (MappingsFile.IsEmpty()) {
        OutError = TEXT("Set a PAYDAY 3 .usmap file under Project Settings -> Plugins -> CrimeForge under JSON Importer > PAYDAY 3 Data.");
        return false;
    }

    const FString AudioDirectory = FPaths::ConvertRelativePathToFull(
        FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("CrimeForge"), TEXT("ImportedAudio")));

    const TSharedRef<FJsonObject> Config = MakeShared<FJsonObject>();
    FString GameDirectory = Settings->PD3GamePath.Path;
    if (!GameDirectory.IsEmpty())
    {
        GameDirectory = FPaths::ConvertRelativePathToFull(GameDirectory);
        FPaths::NormalizeDirectoryName(GameDirectory);
    }

    FString EngineDirectory = FPaths::ConvertRelativePathToFull(FPaths::EngineDir());
    FPaths::NormalizeDirectoryName(EngineDirectory);

    Config->SetStringField(TEXT("gameDirectory"), GameDirectory);
    Config->SetStringField(TEXT("engineDirectory"), EngineDirectory);
    Config->SetStringField(TEXT("archiveDirectory"), ArchiveDirectory);
    Config->SetStringField(TEXT("mappingsFile"), MappingsFile);
    Config->SetStringField(TEXT("aesKey"), Settings->AESKey.TrimStartAndEnd());
    Config->SetStringField(TEXT("audioDirectory"), AudioDirectory);
    Config->SetStringField(TEXT("runtimeDirectory"), GetRuntimeDirectory());

    OutRequest = MakeOperation(TEXT("initialize"));
    OutRequest->SetObjectField(TEXT("config"), Config);

    OutSignature = ArchiveDirectory + TEXT("|") + MappingsFile + TEXT("|") + Settings->AESKey.TrimStartAndEnd();
    return true;
}

bool FCrimeForgeAssetReader::EnsureInitialized(FString* OutError) {
    {
        FScopeLock Lock(&StateMutex);
        if (bInitialized && !InitializationSignature.IsEmpty()) {
            /* Settings can only be read safely on the game thread. Worker requests are allowed to
             * reuse the already initialized provider, never to silently reconfigure it. */
            if (!IsInGameThread()) return true;
        } else if (!IsInGameThread()) {
            if (OutError) *OutError = TEXT("The AssetReader backend must be initialized from the editor thread before worker requests run.");
            return false;
        }
    }

    FString RuntimeError;
    if (!LoadRuntime(RuntimeError)) {
        if (OutError) *OutError = RuntimeError;
        return false;
    }

    TSharedRef<FJsonObject> InitRequest = MakeShared<FJsonObject>();
    FString Signature;
    FString ConfigError;
    if (!BuildInitializationRequest(InitRequest, Signature, ConfigError)) {
        if (OutError) *OutError = ConfigError;
        return false;
    }

    {
        FScopeLock Lock(&StateMutex);
        if (bInitialized && Signature == InitializationSignature) return true;
    }

    FCrimeForgeAssetReaderResponse Response;
    if (IsInGameThread()) {
        TFuture<FCrimeForgeAssetReaderResponse> Future = Async(EAsyncExecution::ThreadPool, [this, InitRequest]() {
            return InvokeManaged(InitRequest);
        });

        while (!Future.IsReady()) {
            FBlockingRequestScope::Pump();
            FPlatformProcess::Sleep(0.01f);
        }
        Response = Future.Get();
    } else {
        Response = InvokeManaged(InitRequest);
    }

    if (!Response.IsSuccess()) {
        const FString Error = ResponseError(Response);
        if (OutError) *OutError = Error;

        FScopeLock Lock(&StateMutex);
        bInitialized = false;
        InitializationSignature.Reset();
        return false;
    }

    {
        FScopeLock Lock(&StateMutex);
        bInitialized = true;
        InitializationSignature = Signature;
    }

    return true;
}

FCrimeForgeAssetReaderResponse FCrimeForgeAssetReader::InvokeManaged(const TSharedRef<FJsonObject>& RequestObject) {
    FScopeLock CallLock(&ManagedCallMutex);

    if (!ManagedRequest || !ManagedFree) {
        return { 0, TEXT("application/json"), {} };
    }

    FString RequestText;
    const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestText);
    if (!FJsonSerializer::Serialize(RequestObject, Writer)) {
        return { 0, TEXT("application/json"), {} };
    }

    FTCHARToUTF8 Utf8(*RequestText);
    int32 ResponseLength = 0;
    void* Allocation = ManagedRequest(
        reinterpret_cast<const uint8*>(Utf8.Get()),
        Utf8.Length(),
        &ResponseLength);

    if (!Allocation || ResponseLength < 12) {
        if (Allocation) ManagedFree(Allocation);
        return { 0, TEXT("application/json"), {} };
    }

    const uint8* Bytes = static_cast<const uint8*>(Allocation);
    auto ReadInt32 = [](const uint8* P) -> int32 {
        return static_cast<int32>(
            static_cast<uint32>(P[0]) |
            (static_cast<uint32>(P[1]) << 8) |
            (static_cast<uint32>(P[2]) << 16) |
            (static_cast<uint32>(P[3]) << 24));
    };

    FCrimeForgeAssetReaderResponse Response;
    Response.StatusCode = ReadInt32(Bytes);
    const int32 ContentTypeLength = ReadInt32(Bytes + 4);
    const int32 PayloadLength = ReadInt32(Bytes + 8);

    const int64 Expected = 12ll + ContentTypeLength + PayloadLength;
    if (ContentTypeLength < 0 || PayloadLength < 0 || Expected > ResponseLength) {
        ManagedFree(Allocation);
        return { 0, TEXT("application/json"), {} };
    }

    if (ContentTypeLength > 0) {
        FUTF8ToTCHAR TypeText(reinterpret_cast<const ANSICHAR*>(Bytes + 12), ContentTypeLength);
        Response.ContentType = FString(TypeText.Length(), TypeText.Get());
    }

    if (PayloadLength > 0) {
        Response.Content.Append(Bytes + 12 + ContentTypeLength, PayloadLength);
    }

    ManagedFree(Allocation);
    return Response;
}

FCrimeForgeAssetReaderResponse FCrimeForgeAssetReader::Request(const TSharedRef<FJsonObject>& RequestObject, const bool bEnsureProvider) {
    if (bEnsureProvider) {
        FString Error;
        if (!EnsureInitialized(&Error)) {
            FCrimeForgeAssetReaderResponse Response;
            Response.StatusCode = 503;
            Response.ContentType = TEXT("application/json");

            const TSharedRef<FJsonObject> ErrorObject = MakeShared<FJsonObject>();
            ErrorObject->SetStringField(TEXT("errorMessage"), Error);
            FString Json;
            const TSharedRef<TJsonWriter<>> ErrorWriter = TJsonWriterFactory<>::Create(&Json);
            FJsonSerializer::Serialize(ErrorObject, ErrorWriter);

            FTCHARToUTF8 Utf8(*Json);
            Response.Content.Append(reinterpret_cast<const uint8*>(Utf8.Get()), Utf8.Length());
            return Response;
        }
    } else {
        FString Error;
        if (!LoadRuntime(Error)) {
            FCrimeForgeAssetReaderResponse Response;
            Response.StatusCode = 503;
            Response.ContentType = TEXT("application/json");
            FTCHARToUTF8 Utf8(*Error);
            Response.Content.Append(reinterpret_cast<const uint8*>(Utf8.Get()), Utf8.Length());
            return Response;
        }
    }

    return InvokeManaged(RequestObject);
}

FCrimeForgeAssetReaderResponse FCrimeForgeAssetReader::RequestBlocking(const TSharedRef<FJsonObject>& RequestObject, const bool bEnsureProvider) {
    /* On a worker thread there is no editor UI to keep alive. */
    if (!IsInGameThread()) return Request(RequestObject, bEnsureProvider);

    TFuture<FCrimeForgeAssetReaderResponse> Future = Async(EAsyncExecution::ThreadPool,
        [this, RequestObject, bEnsureProvider]() {
            return Request(RequestObject, bEnsureProvider);
        });

    while (!Future.IsReady()) {
        /* Cancellation cannot safely interrupt CUE4Parse midway through a package read, but the UI
         * still needs to repaint while it finishes. */
        FBlockingRequestScope::Pump();
        FPlatformProcess::Sleep(0.01f);
    }

    return Future.Get();
}

void FCrimeForgeAssetReader::Shutdown() {
    bool bShouldSend = false;
    {
        FScopeLock Lock(&StateMutex);
        bShouldSend = bRuntimeLoaded && ManagedRequest && ManagedFree;
    }

    if (bShouldSend) {
        InvokeManaged(MakeOperation(TEXT("shutdown")));
    }

    FScopeLock Lock(&StateMutex);
    bInitialized = false;
    InitializationSignature.Reset();
}

void FCrimeForgeAssetReader::UnloadRuntime() {
    FScopeLock Lock(&StateMutex);

    /* .NET runtimes cannot be unloaded from the process once initialized. Releasing hostfxr here
     * only drops the native library handle during final process teardown; managed delegates are
     * never used after this point. */
    ManagedRequest = nullptr;
    ManagedFree = nullptr;
    bRuntimeLoaded = false;
    bInitialized = false;
    InitializationSignature.Reset();

    if (HostFxrHandle) {
        FPlatformProcess::FreeDllHandle(HostFxrHandle);
        HostFxrHandle = nullptr;
    }
}
