#pragma once
#include "CoreMinimal.h"
#include "ESBZSubscriptionSummarySubscribedBy.generated.h"

UENUM(BlueprintType)
enum class ESBZSubscriptionSummarySubscribedBy : uint8 {
    NONE,
    USER,
    PLATFORM,
};

