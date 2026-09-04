#pragma once
#include "CoreMinimal.h"
#include "ESBZPlatformType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlatformType : uint8 {
    Unset,
    Steam,
    PS4,
    PS5,
    Live,
    EpicGames,
    Nintendo,
    Oculus,
    Twitch,
    Device,
    Discord,
    Android,
    IOS,
    Apple,
    Google,
    EAOrigin = 16,
    SnapChat,
    Facebook,
};

