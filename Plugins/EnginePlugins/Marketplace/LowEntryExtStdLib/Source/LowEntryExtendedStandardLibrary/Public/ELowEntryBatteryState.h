#pragma once
#include "CoreMinimal.h"
#include "ELowEntryBatteryState.generated.h"

UENUM(BlueprintType)
enum class ELowEntryBatteryState : uint8 {
    Charging,
    Discharging,
    Full,
    NotCharging,
    Unknown,
};

