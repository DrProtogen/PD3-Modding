#pragma once
#include "CoreMinimal.h"
#include "ESBZUIPurchaseDisallowReason.generated.h"

UENUM(BlueprintType)
enum class ESBZUIPurchaseDisallowReason : uint8 {
    None,
    AlreadyOwned,
    NotAvailable,
    InsufficientFunds,
    Locked,
};

