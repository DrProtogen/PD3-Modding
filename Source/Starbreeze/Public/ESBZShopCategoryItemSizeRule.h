#pragma once
#include "CoreMinimal.h"
#include "ESBZShopCategoryItemSizeRule.generated.h"

UENUM(BlueprintType)
enum class ESBZShopCategoryItemSizeRule : uint8 {
    Variable,
    AllNarrow,
    AllWide,
    Unset,
};

