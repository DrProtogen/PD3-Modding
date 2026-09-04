#pragma once
#include "CoreMinimal.h"
#include "ESBZUIQuestLockReason.generated.h"

UENUM(BlueprintType)
enum class ESBZUIQuestLockReason : uint8 {
    LockedByQuest,
    LockedByTime,
    LockedWithoutReason,
};

