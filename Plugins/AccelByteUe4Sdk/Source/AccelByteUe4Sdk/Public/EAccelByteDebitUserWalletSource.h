#pragma once
#include "CoreMinimal.h"
#include "EAccelByteDebitUserWalletSource.generated.h"

UENUM(BlueprintType)
enum class EAccelByteDebitUserWalletSource : uint8 {
    OTHER,
    ORDER_REVOCATION,
    DLC_REVOCATION,
    IAP_REVOCATION,
    PAYMENT,
    EXPIRATION,
    TRADE,
};

