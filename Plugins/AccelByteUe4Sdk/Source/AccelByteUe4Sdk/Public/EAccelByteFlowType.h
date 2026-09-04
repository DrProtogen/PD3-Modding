#pragma once
#include "CoreMinimal.h"
#include "EAccelByteFlowType.generated.h"

UENUM(BlueprintType)
enum class EAccelByteFlowType : uint8 {
    sink,
    source,
};

