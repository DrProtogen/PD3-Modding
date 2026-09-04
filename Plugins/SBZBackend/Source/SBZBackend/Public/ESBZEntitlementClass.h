#pragma once
#include "CoreMinimal.h"
#include "ESBZEntitlementClass.generated.h"

UENUM(BlueprintType)
enum class ESBZEntitlementClass : uint8 {
    NONE,
    APP,
    ENTITLEMENT,
    CODE,
    SUBSCRIPTION,
    MEDIA,
    OPTIONBOX,
    LOOTBOX,
};

