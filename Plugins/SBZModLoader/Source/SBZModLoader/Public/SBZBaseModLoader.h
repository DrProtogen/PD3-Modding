// Copyright 2026 Starbreeze AB. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZBaseModLoader.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSBZModLoader, Log, All);

UCLASS(Blueprintable, meta=(ShowWorldContextPin))
class SBZMODLOADER_API USBZBaseModLoader : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "SBZModLoader|Debug")
	void Dump() const;

	UFUNCTION(BlueprintNativeEvent, Category = "SBZModLoader")
	void OnModLoaderReady();

	UFUNCTION(BlueprintNativeEvent, Category = "SBZModLoader")
	void OnWorldReady(const UWorld* InWorld);
};
