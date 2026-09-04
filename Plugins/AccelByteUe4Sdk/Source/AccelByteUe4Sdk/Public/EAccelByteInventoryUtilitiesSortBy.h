#pragma once
#include "CoreMinimal.h"
#include "EAccelByteInventoryUtilitiesSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteInventoryUtilitiesSortBy : uint8 {
    NONE,
    CREATED_AT,
    CREATED_AT_ASC,
    CREATED_AT_DESC,
    NAME,
    NAME_ASC,
    NAME_DESC,
};

