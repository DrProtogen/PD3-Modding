#pragma once
#include "CoreMinimal.h"
#include "EAccelByteModelsChallengeMatcher.generated.h"

UENUM(BlueprintType)
enum class EAccelByteModelsChallengeMatcher : uint8 {
    NONE,
    EQUAL,
    LESS_THAN,
    GREATER_THAN,
    LESS_THAN_EQUAL,
    GREATER_THAN_EQUAL,
};

