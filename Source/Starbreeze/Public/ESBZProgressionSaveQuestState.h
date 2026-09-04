#pragma once
#include "CoreMinimal.h"
#include "ESBZProgressionSaveQuestState.generated.h"

UENUM(BlueprintType)
enum class ESBZProgressionSaveQuestState : uint8 {
    NotStarted,
    Active,
    Paused,
    Completed,
    Claimed,
};

