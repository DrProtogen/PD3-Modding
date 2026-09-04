#pragma once
#include "CoreMinimal.h"
#include "ESBZModdedLobbyFilterOptions.generated.h"

UENUM(BlueprintType)
enum class ESBZModdedLobbyFilterOptions : uint8 {
    Hide,
    Show,
    Default = Hide,
};

