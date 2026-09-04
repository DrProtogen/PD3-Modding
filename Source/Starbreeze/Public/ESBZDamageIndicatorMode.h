#pragma once
#include "CoreMinimal.h"
#include "ESBZDamageIndicatorMode.generated.h"

UENUM(BlueprintType)
enum class ESBZDamageIndicatorMode : uint8 {
    None,
    Minimal,
    Arcade,
    Invalid,
    MAX,
};

