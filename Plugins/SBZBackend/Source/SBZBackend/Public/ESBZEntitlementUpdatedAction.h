#pragma once
#include "CoreMinimal.h"
#include "ESBZEntitlementUpdatedAction.generated.h"

UENUM(BlueprintType)
enum class ESBZEntitlementUpdatedAction : uint8 {
    Grant,
    Sell,
    Split,
    Delete,
    Update,
    Transfer,
    Consume,
    Revoke,
    Disable,
    Enable,
    Unknown,
};

