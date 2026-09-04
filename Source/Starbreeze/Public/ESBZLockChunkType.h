#pragma once
#include "CoreMinimal.h"
#include "ESBZLockChunkType.generated.h"

UENUM(BlueprintType)
enum class ESBZLockChunkType : uint8 {
    None,
    Good,
    VeryGood,
    Bad,
    VeryBad,
};

