#pragma once
#include "CoreMinimal.h"
#include "ESBZGateSimplifiedState.generated.h"

UENUM(BlueprintType)
enum class ESBZGateSimplifiedState : uint8 {
    Open,
    Closed,
    Locked,
};

