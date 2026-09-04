#pragma once
#include "CoreMinimal.h"
#include "EAccelByteUserItemsSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteUserItemsSortBy : uint8 {
    NONE,
    CREATED_AT,
    CREATED_AT_ASC,
    CREATED_AT_DESC,
    UPDATED_AT,
    UPDATED_AT_ASC,
    UPDATED_AT_DESC,
};

