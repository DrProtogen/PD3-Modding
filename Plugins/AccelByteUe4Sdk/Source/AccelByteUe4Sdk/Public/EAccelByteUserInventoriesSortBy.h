#pragma once
#include "CoreMinimal.h"
#include "EAccelByteUserInventoriesSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteUserInventoriesSortBy : uint8 {
    NONE,
    CREATED_AT,
    CREATED_AT_ASC,
    CREATED_AT_DESC,
    UPDATED_AT,
    UPDATED_AT_ASC,
    UPDATED_AT_DESC,
};

