#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformBalanceOrigin.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePlatformBalanceOrigin : uint8 {
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

