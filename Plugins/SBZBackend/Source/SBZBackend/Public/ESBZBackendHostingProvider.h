#pragma once
#include "CoreMinimal.h"
#include "ESBZBackendHostingProvider.generated.h"

UENUM(BlueprintType)
enum class ESBZBackendHostingProvider : uint8 {
    Accelbyte,
    AmazonGameLift,
    EdgeGap,
    MAX,
};

