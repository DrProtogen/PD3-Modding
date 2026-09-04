#pragma once
#include "CoreMinimal.h"
#include "EAccelByteStatisticStatCycleSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteStatisticStatCycleSortBy : uint8 {
    NONE,
    START,
    START_ASC,
    START_DESC,
    CREATED_AT,
    CREATED_AT_ASC,
    CREATED_AT_DESC,
    UPDATED_AT,
    UPDATED_AT_ASC,
    UPDATED_AT_DESC,
};

