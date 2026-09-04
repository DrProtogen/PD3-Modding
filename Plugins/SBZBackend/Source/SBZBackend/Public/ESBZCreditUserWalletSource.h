#pragma once
#include "CoreMinimal.h"
#include "ESBZCreditUserWalletSource.generated.h"

UENUM(BlueprintType)
enum class ESBZCreditUserWalletSource : uint8 {
    PURCHASE,
    IAP,
    PROMOTION,
    ACHIEVEMENT,
    REFERRAL_BONUS,
    REDEEM_CODE,
    REFUND,
    OTHER,
};

