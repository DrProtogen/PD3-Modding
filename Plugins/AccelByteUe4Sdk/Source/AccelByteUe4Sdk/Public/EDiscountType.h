#pragma once
#include "CoreMinimal.h"
#include "EDiscountType.generated.h"

UENUM(BlueprintType)
enum class EDiscountType : uint8 {
    NONE,
    AMOUNT,
    PERCENTAGE,
};

