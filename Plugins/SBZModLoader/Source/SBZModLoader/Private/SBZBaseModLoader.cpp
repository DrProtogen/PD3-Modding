// Copyright 2026 Starbreeze AB. All Rights Reserved.


#include "SBZBaseModLoader.h"

DEFINE_LOG_CATEGORY(LogSBZModLoader);

void USBZBaseModLoader::Dump() const
{
	UE_LOG(LogTemp, Warning, TEXT("USBZModLoader is here"));
}

void USBZBaseModLoader::OnWorldReady_Implementation(const UWorld* InWorld)
{
}

void USBZBaseModLoader::OnModLoaderReady_Implementation()
{
}
