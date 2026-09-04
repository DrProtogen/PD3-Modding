#pragma once
#include "CoreMinimal.h"
#include "EAccelByteModelsChallengeAssignmentRule.generated.h"

UENUM(BlueprintType)
enum class EAccelByteModelsChallengeAssignmentRule : uint8 {
    NONE,
    FIXED,
    RANDOMIZED,
    UNSCHEDULED,
    CUSTOM,
};

