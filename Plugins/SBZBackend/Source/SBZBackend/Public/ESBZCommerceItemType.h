#pragma once
#include "CoreMinimal.h"
#include "ESBZCommerceItemType.generated.h"

UENUM(BlueprintType)
enum class ESBZCommerceItemType : uint8 {
    NONE,
    APP,
    COINS,
    INGAMEITEM,
    BUNDLE,
    CODE,
    SUBSCRIPTION,
    SEASON,
    MEDIA,
    OPTIONBOX,
    EXTENSION,
    LOOTBOX,
};

