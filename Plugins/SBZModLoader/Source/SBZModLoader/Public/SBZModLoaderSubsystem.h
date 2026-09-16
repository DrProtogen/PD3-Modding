// Copyright 2026 Starbreeze AB. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/World.h"
#include "SBZModLoaderSubsystem.generated.h"

class USBZBaseModLoader;

UCLASS()
class SBZMODLOADER_API USBZModLoaderSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	UPROPERTY(BlueprintReadOnly, Category = "SBZModLoader")
	USBZBaseModLoader* ModLoader;

	const FString ModLoaderFilename = TEXT("PDML");
	const FString ModsDirectory = TEXT("Mods");
private:
	bool MountModLoader() const;
	void LoadBlueprint();
	void OnWorldInitialized(UWorld* InWorld, const UWorld::InitializationValues InValues);
	FDelegateHandle WorldInitDelegateHandle;
};
