#pragma once
#include "CoreMinimal.h"
#include "EAccelByteInventoriesSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteInventoriesSortBy : uint8 {
    NONE,
    CREATED_AT,
    CREATED_AT_ASC,
    CREATED_AT_DESC,
    UPDATED_AT,
    UPDATED_AT_ASC,
    UPDATED_AT_DESC,
    CONFIGURATION_CODE,
    CONFIGURATION_CODE_ASC,
    CONFIGURATION_CODE_DESC,
};

