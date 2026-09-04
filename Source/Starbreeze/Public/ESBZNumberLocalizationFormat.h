#pragma once
#include "CoreMinimal.h"
#include "ESBZNumberLocalizationFormat.generated.h"

UENUM(BlueprintType)
enum class ESBZNumberLocalizationFormat : uint8 {
    None,
    Number,
    Percent,
    Meter,
};

