#pragma once
#include "CoreMinimal.h"
#include "ESBZAppType.generated.h"

UENUM(BlueprintType)
enum class ESBZAppType : uint8 {
    NONE,
    GAME,
    SOFTWARE,
    DLC,
    DEMO,
};

