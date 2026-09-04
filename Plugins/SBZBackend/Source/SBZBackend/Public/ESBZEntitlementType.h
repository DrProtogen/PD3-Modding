#pragma once
#include "CoreMinimal.h"
#include "ESBZEntitlementType.generated.h"

UENUM(BlueprintType)
enum class ESBZEntitlementType : uint8 {
    NONE,
    DURABLE,
    CONSUMABLE,
};

