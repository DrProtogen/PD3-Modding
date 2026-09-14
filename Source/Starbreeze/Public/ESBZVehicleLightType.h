#pragma once
#include "CoreMinimal.h"
#include "ESBZVehicleLightType.generated.h"

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class ESBZVehicleLightType : uint8 {
    None = 0 UMETA(Hidden),
    Headlights = 1 << 0,
    TailLights = 1 << 1,
    FogLights = 1 << 2,
    BrakeLights = 1 << 3,
    ReverseLights = 1 << 4,
    TurnLeft = 1 << 5,
    TurnRight = 1 << 6,
};
ENUM_CLASS_FLAGS(ESBZVehicleLightType);

