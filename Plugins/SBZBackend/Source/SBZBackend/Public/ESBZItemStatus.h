#pragma once
#include "CoreMinimal.h"
#include "ESBZItemStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZItemStatus : uint8 {
    NONE,
    ACTIVE,
    INACTIVE,
};

