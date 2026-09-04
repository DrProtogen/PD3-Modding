#pragma once
#include "CoreMinimal.h"
#include "ESBZTargetCivilianEffectRequirement.generated.h"

UENUM(BlueprintType)
enum class ESBZTargetCivilianEffectRequirement : uint8 {
    MustBeCivilian,
    MustNotBeCivilian,
    Count,
};

