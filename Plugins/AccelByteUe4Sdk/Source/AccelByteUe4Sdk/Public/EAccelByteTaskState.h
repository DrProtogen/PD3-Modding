#pragma once
#include "CoreMinimal.h"
#include "EAccelByteTaskState.generated.h"

UENUM(BlueprintType)
enum class EAccelByteTaskState : uint8 {
    Completed,
    Pending,
    Paused,
    Running,
    Failed,
    Cancelled,
    Retrying,
};

