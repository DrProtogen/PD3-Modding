#pragma once
#include "CoreMinimal.h"
#include "ESBZTeammateSuspiciousDetectionMode.generated.h"

UENUM(BlueprintType)
enum class ESBZTeammateSuspiciousDetectionMode : uint8 {
    Default,
    Advanced,
    Invalid,
    MAX,
};

