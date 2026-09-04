#pragma once
#include "CoreMinimal.h"
#include "ESBZEyeScannerState.generated.h"

UENUM(BlueprintType)
enum class ESBZEyeScannerState : uint8 {
    Off,
    Idle,
    Scanning,
    AccessDenied,
    AccessGranted,
};

