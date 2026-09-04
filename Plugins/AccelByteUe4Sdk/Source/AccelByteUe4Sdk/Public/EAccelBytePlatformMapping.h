#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformMapping.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePlatformMapping : uint8 {
    NONE,
    APPLE,
    GOOGLE,
    PLAYSTATION,
    STEAM,
    XBOX,
    EPIC_GAMES,
    OCULUS,
    TWITCH,
    STADIA,
};

