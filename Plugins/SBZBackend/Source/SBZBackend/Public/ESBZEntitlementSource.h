#pragma once
#include "CoreMinimal.h"
#include "ESBZEntitlementSource.generated.h"

UENUM(BlueprintType)
enum class ESBZEntitlementSource : uint8 {
    NONE,
    PURCHASE,
    IAP,
    PROMOTION,
    ACHIEVEMENT,
    REFERRAL_BONUS,
    REDEEM_CODE,
    REWARD,
    GIFT,
    OTHER,
};

