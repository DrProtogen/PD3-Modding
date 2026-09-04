#pragma once
#include "CoreMinimal.h"
#include "EFFXFSRPaceRHIFrameMode.generated.h"

UENUM(BlueprintType)
enum class EFFXFSRPaceRHIFrameMode : uint8 {
    None,
    CustomPresentVSync,
};

