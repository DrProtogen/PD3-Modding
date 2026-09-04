#pragma once
#include "CoreMinimal.h"
#include "EAccelByteStagingContentUtilitiesSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteStagingContentUtilitiesSortBy : uint8 {
    NONE,
    CREATED_TIME,
    CREATED_TIME_ASC,
    CREATED_TIME_DESC,
    UPDATED_TIME,
    UPDATED_TIME_ASC,
    UPDATED_TIME_DESC,
};

