#pragma once
#include "CoreMinimal.h"
#include "ESBZPagerFailedResult.generated.h"

UENUM(BlueprintType)
enum class ESBZPagerFailedResult : uint8 {
    None,
    Search,
    Alarm,
};

