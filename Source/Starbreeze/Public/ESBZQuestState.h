#pragma once
#include "CoreMinimal.h"
#include "ESBZQuestState.generated.h"

UENUM(BlueprintType)
enum class ESBZQuestState : uint8 {
    NotStarted,
    Active,
    Paused,
    Completed,
    Claimed,
    Locked,
};

