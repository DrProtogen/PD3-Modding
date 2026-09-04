#pragma once
#include "CoreMinimal.h"
#include "EAccelByteModelsChallengeRewardStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteModelsChallengeRewardStatus : uint8 {
    NONE,
    UNCLAIMED,
    CLAIMED,
};

