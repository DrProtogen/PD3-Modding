#pragma once
#include "CoreMinimal.h"
#include "EStagingContentRequestStatus.generated.h"

UENUM(BlueprintType)
enum class EStagingContentRequestStatus : uint8 {
    PENDING,
    REJECTED,
};

