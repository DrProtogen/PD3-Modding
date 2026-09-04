#pragma once
#include "CoreMinimal.h"
#include "ESBZSubscriptionSummaryStatus.generated.h"

UENUM(BlueprintType)
enum class ESBZSubscriptionSummaryStatus : uint8 {
    NONE,
    INIT,
    ACTIVE,
    CANCELLED,
    EXPIRED,
};

