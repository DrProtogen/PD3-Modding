#pragma once
#include "CoreMinimal.h"
#include "EAccelByteModelsChallengeSortBy.generated.h"

UENUM(BlueprintType)
enum class EAccelByteModelsChallengeSortBy : uint8 {
    NONE,
    UPDATED_AT,
    UPDATED_AT_ASC,
    UPDATED_AT_DESC,
    CREATED_AT,
    CREATED_AT_ASC,
    CREATED_AT_DESC,
};

