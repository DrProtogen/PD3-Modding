#pragma once
#include "CoreMinimal.h"
#include "ESBZUserEntitlementOrigin.generated.h"

UENUM(BlueprintType)
enum class ESBZUserEntitlementOrigin : uint8 {
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

