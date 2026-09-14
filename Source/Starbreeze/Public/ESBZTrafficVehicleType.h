#pragma once
#include "CoreMinimal.h"
#include "ESBZTrafficVehicleType.generated.h"

UENUM(BlueprintType, meta = (Bitflags, UseEnumValuesAsMaskValuesInEditor = "true"))
enum class ESBZTrafficVehicleType : uint8 {
    None = 0 UMETA(Hidden),
    FirstResponder = 1 << 0,
    SwatVan = 1 << 1,
    EscapeVan = 1 << 2,
    Civilian = 1 << 3,
    Aerial = 1 << 4,
    FBIVan = 1 << 5,
};
ENUM_CLASS_FLAGS(ESBZTrafficVehicleType);