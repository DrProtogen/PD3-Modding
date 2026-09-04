#pragma once
#include "CoreMinimal.h"
#include "ESBZEntitlementStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZEntitlementStatus : uint8 {
    NONE,
    ACTIVE,
    INACTIVE,
    CONSUMED,
    REVOKED,
};

