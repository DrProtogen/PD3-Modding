#include "PD3WwiseRetailResources.h"

#if WITH_EDITOR && __has_include("Misc/PD3CookedEditor.h")
#include "Misc/PD3CookedEditor.h"
#include "IPlatformFilePak.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/CoreDelegates.h"
#include "AkAudioDevice.h"
#include "Wwise/WwiseResourceLoader.h"

namespace PD3WwiseRetailResources
{
	// Written once on the game thread before any AkAudioType can PostLoad;
	// immutable for subsequent async asset loads and resource-manager operations.
	static TMap<FName, FString> Roots;

	void Initialize()
	{
		if (!UE::PD3CookedEditor::IsEnabled()) return;
		check(IsInGameThread());
		static bool bInitialized = false;
		if (bInitialized) return;
		bInitialized = true;
		FString PaksDirectory;
		FAES::FAESKey Key;
		if (!UE::PD3CookedEditor::TryGetGamePaksDirectory(PaksDirectory)
			|| !UE::PD3CookedEditor::TryGetGameEncryptionKey(Key)) return;
		auto* Pak = static_cast<FPakPlatformFile*>(FPlatformFileManager::Get().FindPlatformFile(FPakPlatformFile::GetTypeName()));
		const auto Loader = FWwiseResourceLoader::Get();
		if (!Pak || !Loader) return;
		// Register the configured key through Unreal; never persist or log it.
		FCoreDelegates::GetRegisterEncryptionKeyMulticastDelegate().Broadcast(FGuid(), Key);
		FString Stage = Loader->GetUnrealStagePath(FString());
		FPaths::NormalizeDirectoryName(Stage);
		if (Stage.IsEmpty() || !FPaths::IsRelative(Stage)) return;
		const FString Marker = Stage + TEXT("/");
		TArray<FString> Files;
		IFileManager::Get().FindFiles(Files, *(PaksDirectory / TEXT("*.pak")), true, false);
		Files.Sort();
		TMap<FName, uint32> ResourceOrders;
		for (const FString& File : Files)
		{
			FString Stem = FPaths::GetBaseFilename(File);
			uint32 Order = 0;
			if (Stem.RemoveFromEnd(TEXT("_P")))
			{
				Order = 100;
				int32 Separator;
				if (Stem.FindLastChar(TEXT('_'), Separator) && Stem.Mid(Separator + 1).IsNumeric())
				{
					Order *= FCString::Atoi(*Stem.Mid(Separator + 1)) + 1;
					Stem.LeftInline(Separator);
				}
			}
			if (!Stem.StartsWith(TEXT("pakchunk")) || !(Stem.EndsWith(TEXT("-Windows"))
				|| Stem.EndsWith(TEXT("-WindowsClient")) || Stem.EndsWith(TEXT("-WinGDK")))) continue;
			const FString FilePath = PaksDirectory / File;
			TRefCountPtr<FPakFile> Index = new FPakFile(Pak->GetLowerLevel(), *FilePath, false);
			if (!Index->IsValid())
			{
				UE_LOG(LogAkAudio, Error, TEXT("PD3 Wwise: Cannot read companion pak index %s."), *FilePath);
				continue;
			}
			FString NativeMount = Index->GetMountPoint();
			FPaths::NormalizeDirectoryName(NativeMount);
			while (NativeMount.StartsWith(TEXT("../"))) NativeMount.RightChopInline(3);
			if (NativeMount == TEXT("..")) NativeMount.Reset();
			if (!FPaths::IsRelative(NativeMount) || NativeMount.Contains(TEXT(".."))) continue;
			const FString IsolatedRoot = FPaths::ConvertRelativePathToFull(FPaths::ProjectSavedDir() / TEXT("PD3WwiseRetail") / FPaths::GetBaseFilename(File));
			TMap<FName, FString> Paths;
			UE_LOG(LogAkAudio, Verbose, TEXT("PD3 Wwise: Reading resource index %s (mount %s, %d files)."), *FilePath, *Index->GetMountPoint(), Index->GetNumFiles());
			for (FPakFile::FFilenameIterator It(*Index); It; ++It)
			{
				const FString Relative = NativeMount / It.Filename();
				if (!Relative.EndsWith(TEXT(".bnk")) && !Relative.EndsWith(TEXT(".wem"))) continue;
				const int32 StageIndex = Relative.Find(Marker, ESearchCase::IgnoreCase);
				if (StageIndex == INDEX_NONE || (StageIndex > 0 && Relative[StageIndex - 1] != TEXT('/'))) continue;
				const int32 ResourceIndex = StageIndex + Marker.Len();
				Paths.Add(FName(Relative.Mid(ResourceIndex)), IsolatedRoot / Relative.Left(ResourceIndex));
			}
			if (Paths.IsEmpty()) continue;
			// Isolate loose resources under Saved. Retail shaders, config and asset
			// registries cannot shadow editor paths. IoStore is already mounted.
			if (!Pak->Mount(*FilePath, 0, *(IsolatedRoot / NativeMount), true, nullptr, false, &Key))
			{
				UE_LOG(LogAkAudio, Error, TEXT("PD3 Wwise: Cannot mount companion resources from %s."), *FilePath);
				continue;
			}
			for (const auto& Path : Paths)
			{
				const uint32* ExistingOrder = ResourceOrders.Find(Path.Key);
				if (!ExistingOrder || Order >= *ExistingOrder)
				{
					Roots.Add(Path.Key, Path.Value);
					ResourceOrders.Add(Path.Key, Order);
				}
			}
		}
		UE_LOG(LogAkAudio, Display, TEXT("PD3 Wwise: Indexed %d retail bank/media paths under isolated companion-pak mounts."), Roots.Num());
	}

	FString GetRoot(FName ResourcePath)
	{
		if (const FString* Root = Roots.Find(ResourcePath)) return *Root;
		return {};
	}
}
#else
namespace PD3WwiseRetailResources
{
	void Initialize() {}
	FString GetRoot(FName ResourcePath) { return {}; }
}
#endif
