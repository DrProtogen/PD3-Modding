#pragma once
#include "CoreMinimal.h"
#include "EStagingContentResponseStatus.generated.h"

UENUM(BlueprintType)
enum class EStagingContentResponseStatus : uint8 {
    PENDING,
    REJECTED,
    APPROVED,
};

