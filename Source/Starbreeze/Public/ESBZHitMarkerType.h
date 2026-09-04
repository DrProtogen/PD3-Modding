#pragma once
#include "CoreMinimal.h"
#include "ESBZHitMarkerType.generated.h"

UENUM(BlueprintType)
enum class ESBZHitMarkerType : uint8 {
    None,
    Normal,
    Armor,
    ArmorBreak,
    ArmorPenetration,
    Critical,
    CriticalKill,
    Kill,
};

