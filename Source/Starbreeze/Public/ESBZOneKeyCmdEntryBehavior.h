#pragma once
#include "CoreMinimal.h"
#include "ESBZOneKeyCmdEntryBehavior.generated.h"

UENUM(BlueprintType)
enum class ESBZOneKeyCmdEntryBehavior : uint8 {
    Default,
    Toggle,
    Iterative,
    Size,
};

