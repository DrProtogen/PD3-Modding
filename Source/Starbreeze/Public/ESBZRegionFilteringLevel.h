#pragma once
#include "CoreMinimal.h"
#include "ESBZRegionFilteringLevel.generated.h"

UENUM(BlueprintType)
enum class ESBZRegionFilteringLevel : uint8 {
    Default,
    CountryCode,
    SubRegion,
    Region,
    Global,
};

