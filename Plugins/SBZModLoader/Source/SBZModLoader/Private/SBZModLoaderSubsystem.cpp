// Copyright 2026 Starbreeze AB. All Rights Reserved.


#include "SBZModLoaderSubsystem.h"

#include "IPlatformFilePak.h"
#include "HAL/PlatformFilemanager.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "SBZBaseModLoader.h"
#include "AssetRegistry/AssetRegistryModule.h"

void USBZModLoaderSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	WorldInitDelegateHandle = FWorldDelegates::OnPostWorldInitialization.AddUObject(
		this, 
		&USBZModLoaderSubsystem::OnWorldInitialized
	);

	if (MountModLoader())
	{
		LoadBlueprint();
	}
}

void USBZModLoaderSubsystem::Deinitialize()
{
	if (WorldInitDelegateHandle.IsValid())
	{
		FWorldDelegates::OnPostWorldInitialization.Remove(WorldInitDelegateHandle);
	}
	Super::Deinitialize();
}

bool USBZModLoaderSubsystem::MountModLoader() const
{
	FString PakFilePath = FPaths::ProjectDir() / ModsDirectory / (ModLoaderFilename + TEXT(".pak"));

	if (!FPaths::FileExists(PakFilePath))
	{
		UE_LOG(LogSBZModLoader, Error, TEXT("Target PAK file not found at path: %s"), *PakFilePath);
		return false;
	}

	FPakPlatformFile* PakPlatformFile = static_cast<FPakPlatformFile*>(
		FPlatformFileManager::Get().FindPlatformFile(TEXT("PakFile"))
	);

	if (!PakPlatformFile)
	{
		UE_LOG(LogSBZModLoader, Error, TEXT("PakPlatformFile plugin/interface is missing!"));
		return false;
	}

	const FString VirtualMountPath = FString::Printf(TEXT("%sMods/%s/"), *FPaths::ProjectContentDir(), *ModLoaderFilename);
	if (PakPlatformFile->Mount(*PakFilePath, 0, *VirtualMountPath))
	{
		UE_LOG(LogSBZModLoader, Log, TEXT("Successfully mounted ModLoader: %s to %s"), *PakFilePath, *VirtualMountPath);
		return true;
	}

	UE_LOG(LogSBZModLoader, Error, TEXT("Failed to mount PAK file: %s"), *PakFilePath);
	return false;
}

void USBZModLoaderSubsystem::LoadBlueprint()
{
	UE_LOG(LogSBZModLoader, Warning, TEXT("USBZModLoaderSubsystem::LoadBlueprint()"));
	const FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FString> PathsToScan;
	FString VirtualDirectory = FString::Printf(TEXT("/Game/Mods/%s/"), *ModLoaderFilename);
	PathsToScan.Add(VirtualDirectory);
	AssetRegistryModule.Get().ScanPathsSynchronous(PathsToScan, true);

	const FString ClassPathString = FString::Printf(TEXT("/Game/Mods/%s/BP_ModLoader.BP_ModLoader_C"), *ModLoaderFilename);
	const UClass* LoadedClass = StaticLoadClass(USBZBaseModLoader::StaticClass(), nullptr, *ClassPathString);
	if (!LoadedClass)
	{
		UE_LOG(LogSBZModLoader, Error, TEXT("Could not find class at path: %s"), *ClassPathString);
		return;
	}

	ModLoader = NewObject<USBZBaseModLoader>(this, LoadedClass);
	if (ModLoader)
	{
		UE_LOG(LogSBZModLoader, Log, TEXT("Successfully instantiated %s"), *ModLoader->GetName());
		ModLoader->OnModLoaderReady();
	}
}

void USBZModLoaderSubsystem::OnWorldInitialized(UWorld* InWorld, const UWorld::InitializationValues InValues)
{
	if (!InWorld)
	{
		return;
	}

	if (InWorld->IsGameWorld())
	{
		if (ModLoader)
		{
			ModLoader->OnWorldReady(InWorld);
		}
	}
}
