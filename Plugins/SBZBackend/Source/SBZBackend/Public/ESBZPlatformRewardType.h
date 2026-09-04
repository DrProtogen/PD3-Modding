#pragma once
#include "CoreMinimal.h"
#include "ESBZPlatformRewardType.generated.h"

UENUM(BlueprintType)
enum class ESBZPlatformRewardType : uint8 {
    NONE,
    ITEM,
    CURRENCY,
};

