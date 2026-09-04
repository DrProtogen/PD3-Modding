#pragma once
#include "CoreMinimal.h"
#include "EContentStatus.generated.h"

UENUM(BlueprintType)
enum class EContentStatus : uint8 {
    UNDER_REVIEW,
    PUBLISHED,
};

