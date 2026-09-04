#pragma once
#include "CoreMinimal.h"
#include "ESBZLockChunkState.generated.h"

UENUM(BlueprintType)
enum class ESBZLockChunkState : uint8 {
    Uninitialized,
    Hidden,
    Visible,
    Entering,
    Fading,
};

