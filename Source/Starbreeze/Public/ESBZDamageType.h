#pragma once
#include "CoreMinimal.h"
#include "ESBZDamageType.generated.h"

UENUM(BlueprintType)
enum class ESBZDamageType : uint8 {
    Normal,
    Critical,
    Kill,
    CriticalKill,
    Armor,
};

