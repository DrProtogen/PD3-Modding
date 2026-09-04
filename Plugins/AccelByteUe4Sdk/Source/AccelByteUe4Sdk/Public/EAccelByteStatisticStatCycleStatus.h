#pragma once
#include "CoreMinimal.h"
#include "EAccelByteStatisticStatCycleStatus.generated.h"

UENUM(BlueprintType)
enum class EAccelByteStatisticStatCycleStatus : uint8 {
    NONE,
    INIT,
    ACTIVE,
    STOPPED,
};

