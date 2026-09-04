#pragma once
#include "CoreMinimal.h"
#include "EAccelByteModelsChallengeRotation.generated.h"

UENUM(BlueprintType)
enum class EAccelByteModelsChallengeRotation : uint8 {
    NONE,
    DAILY,
    WEEKLY,
    MONTHLY,
    CUSTOM,
};

