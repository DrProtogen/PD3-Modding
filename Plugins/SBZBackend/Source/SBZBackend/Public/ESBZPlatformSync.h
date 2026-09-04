#pragma once
#include "CoreMinimal.h"
#include "ESBZPlatformSync.generated.h"

UENUM(BlueprintType)
enum class ESBZPlatformSync : uint8 {
    STEAM,
    XBOX_LIVE,
    PLAYSTATION,
    EPIC_GAMES,
    OTHER,
};

