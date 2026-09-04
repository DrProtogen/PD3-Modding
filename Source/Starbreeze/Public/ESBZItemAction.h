#pragma once
#include "CoreMinimal.h"
#include "ESBZItemAction.generated.h"

UENUM(BlueprintType)
enum class ESBZItemAction : uint8 {
    Equip,
    Purchase,
    Customize,
    Favorite,
    Preview,
    Variant,
    PurchaseVariant,
    Inspect,
    GoTo,
    Cosmetic,
    MAX,
};

