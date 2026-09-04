#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChallengeGoalRequirementPredicate.h"
#include "EAccelByteModelsChallengeGoalRequirementOperator.h"
#include "AccelByteModelsChallengeGoalRequirement.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChallengeGoalRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteModelsChallengeGoalRequirementOperator Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsChallengeGoalRequirementPredicate> Predicates;
    
    FAccelByteModelsChallengeGoalRequirement();
};

