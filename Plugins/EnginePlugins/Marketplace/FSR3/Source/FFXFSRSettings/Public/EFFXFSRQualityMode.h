#pragma once
#include "CoreMinimal.h"
#include "EFFXFSRQualityMode.generated.h"

UENUM()
enum class EFFXFSRQualityMode : int32 {
    NativeAA,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};

