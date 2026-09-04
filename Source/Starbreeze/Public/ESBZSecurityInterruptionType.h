#pragma once
#include "CoreMinimal.h"
#include "ESBZSecurityInterruptionType.generated.h"

UENUM(BlueprintType)
enum class ESBZSecurityInterruptionType : uint8 {
    None,
    AFKDoneLifeActionFreed,
    AFKLifeActionFreed,
};

