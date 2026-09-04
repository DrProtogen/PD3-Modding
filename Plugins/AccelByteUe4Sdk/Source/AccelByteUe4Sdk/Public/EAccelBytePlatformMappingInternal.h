#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformMappingInternal.generated.h"

UENUM(BlueprintType)
enum class EAccelBytePlatformMappingInternal : uint8 {
    NONE,
    APPLE,
    GOOGLE,
    PLAYSTATION,
    STEAM,
    XBOX,
    EPICGAMES,
    OCULUS,
    TWITCH,
    STADIA,
};

