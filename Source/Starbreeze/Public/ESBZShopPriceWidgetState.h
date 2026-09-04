#pragma once
#include "CoreMinimal.h"
#include "ESBZShopPriceWidgetState.generated.h"

UENUM(BlueprintType)
enum class ESBZShopPriceWidgetState : uint8 {
    Hidden,
    Visible,
    VisibleDiscounted,
    VisibleFree,
    Loading,
};

