#pragma once
#include "CoreMinimal.h"
#include "ESBZPlatformRewardOrigin.generated.h"

UENUM(BlueprintType)
enum class ESBZPlatformRewardOrigin : uint8 {
    NONE,
    Playstation,
    Xbox,
    Steam,
    Epic,
    IOS,
    GooglePlay,
    Twitch,
    Nintendo,
    Oculus,
    System,
    Other,
};

