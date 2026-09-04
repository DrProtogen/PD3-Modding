#pragma once
#include "CoreMinimal.h"
#include "EAccelByteModelsChallengeGoalProgressStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteModelsChallengeGoalProgressStatus : uint8 {
    NONE,
    ACTIVE,
    COMPLETED,
    RETIRED,
    NOT_STARTED,
};

