#pragma once
#include "CoreMinimal.h"
#include "ESBZAssaultPhaseEndReason.generated.h"

UENUM(BlueprintType)
enum class ESBZAssaultPhaseEndReason : uint8 {
    TimerExpired,
    HeistEnd,
};

