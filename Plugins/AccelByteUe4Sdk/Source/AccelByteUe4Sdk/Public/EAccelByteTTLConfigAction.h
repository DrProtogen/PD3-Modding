#pragma once
#include "CoreMinimal.h"
#include "EAccelByteTTLConfigAction.generated.h"

UENUM(BlueprintType)
enum class EAccelByteTTLConfigAction : uint8 {
    NONE,
    DELETE_RECORD,
};

