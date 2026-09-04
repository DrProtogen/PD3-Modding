#pragma once
#include "CoreMinimal.h"
#include "ESBZGeographicalRegion.generated.h"

UENUM(BlueprintType)
enum class ESBZGeographicalRegion : uint8 {
    Unknown,
    NorthAmerica,
    SouthAmerica,
    Europe,
    Asia,
    Africa,
    Oceania,
};

