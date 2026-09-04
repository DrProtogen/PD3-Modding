#pragma once
#include "CoreMinimal.h"
#include "ESBZQuestLockReason.generated.h"

UENUM(BlueprintType)
enum class ESBZQuestLockReason : uint8 {
    LockedByQuest,
    LockedByTime,
    LockedWithoutReason,
};

