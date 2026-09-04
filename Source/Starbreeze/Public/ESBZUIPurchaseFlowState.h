#pragma once
#include "CoreMinimal.h"
#include "ESBZUIPurchaseFlowState.generated.h"

UENUM(BlueprintType)
enum class ESBZUIPurchaseFlowState : uint8 {
    AwaitingConfirmation,
    InProgress,
    Success,
    Fail,
};

