#pragma once
#include "CoreMinimal.h"
#include "ESBZShopPurchasePopupResult.generated.h"

UENUM(BlueprintType)
enum class ESBZShopPurchasePopupResult : uint8 {
    PressedClose,
    PressedPurchase,
    PressedPurchaseAlreadyOwned,
};

