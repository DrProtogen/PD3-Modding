#pragma once
#include "CoreMinimal.h"
#include "EAccelByteStatisticUpdateStrategy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteStatisticUpdateStrategy : uint8 {
    OVERRIDE,
    INCREMENT,
    MIN,
    MAX,
    STATS_UPDATE_PADDING,
};

