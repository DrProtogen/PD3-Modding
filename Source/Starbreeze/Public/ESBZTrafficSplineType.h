#pragma once
#include "CoreMinimal.h"
#include "ESBZTrafficSplineType.generated.h"

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class ESBZTrafficSplineType : uint8 {
    None = 0 UMETA(Hidden),
    VehicleSpawner = 1 << 0,
    ParkingSpot = 1 << 1,
    EndPoint = 1 << 2,
};
ENUM_CLASS_FLAGS(ESBZTrafficSplineType);

