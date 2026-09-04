#pragma once
#include "CoreMinimal.h"
#include "ESBZCycle.generated.h"

UENUM(BlueprintType)
enum class ESBZCycle : uint8 {
    DAILY,
    WEEKLY,
    MONTHLY,
    QUARTERLY,
    YEARLY,
    ANNUALLY,
};

