#pragma once
#include "CoreMinimal.h"
#include "EAccelByteModelsChallengeGoalsVisibility.generated.h"

UENUM(BlueprintType)
enum class EAccelByteModelsChallengeGoalsVisibility : uint8 {
    NONE,
    SHOWALL,
    PERIODONLY,
};

