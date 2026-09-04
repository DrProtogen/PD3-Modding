#pragma once
#include "CoreMinimal.h"
#include "EAccelByteModelsChallengeStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteModelsChallengeStatus : uint8 {
    NONE,
    INIT,
    RETIRED,
    TIED,
};

