#pragma once
#include "CoreMinimal.h"
#include "EPD3PhaseTransitionReason.generated.h"

UENUM(BlueprintType)
enum class EPD3PhaseTransitionReason : uint8 {
    NoTransitionYet,
    TimerElapsed,
    MaxNPCsSpawned,
    DramaLowEnough,
    DramaEngagementTimerElapsed,
    ManuallyCalledTimeElapsed,
};

