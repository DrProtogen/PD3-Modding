#pragma once
#include "CoreMinimal.h"
#include "ESBZGeographicalSubRegion.generated.h"

UENUM(BlueprintType)
enum class ESBZGeographicalSubRegion : uint8 {
    Unknown,
    CentralUS,
    SouthUS,
    Caribbean,
    EastSouthAmerica,
    WestSouthAmerica,
    NorthEurope,
    EastEurope,
    SouthEurope,
    WestEurope,
    MiddleEast,
    NorthAfrica,
    EastAfrica,
    WestAfrica,
    SouthAfrica,
    WestAsia,
    CentralAsia,
    SouthAsia,
    EastAsia,
    Oceania,
};

