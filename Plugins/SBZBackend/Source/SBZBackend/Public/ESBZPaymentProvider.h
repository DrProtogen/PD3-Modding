#pragma once
#include "CoreMinimal.h"
#include "ESBZPaymentProvider.generated.h"

UENUM(BlueprintType)
enum class ESBZPaymentProvider : uint8 {
    NONE,
    WALLET,
    XSOLLA,
    ADYEN,
    STRIPE,
    CHECKOUT,
    ALIPAY,
    WXPAY,
    PAYPAL,
};

