#pragma once
#include "CoreMinimal.h"
#include "ESBZUIPurchaseCompletionReason.generated.h"

UENUM(BlueprintType)
enum class ESBZUIPurchaseCompletionReason : uint8 {
    Success,
    Failed,
    Cancelled,
};

