#pragma once
#include "CoreMinimal.h"
#include "EAccelByteModelsChallengeGoalRequirementPredicateParameterType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteModelsChallengeGoalRequirementPredicateParameterType : uint8 {
    NONE,
    STATISTIC,
    ENTITLEMENT,
    ACHIEVEMENT,
    USERACCOUNT,
    STATISTIC_CYCLE,
};

