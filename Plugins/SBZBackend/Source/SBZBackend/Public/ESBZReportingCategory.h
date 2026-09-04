#pragma once
#include "CoreMinimal.h"
#include "ESBZReportingCategory.generated.h"

UENUM(BlueprintType)
enum class ESBZReportingCategory : uint8 {
    UGC,
    USER,
    CHAT,
    EXTENSION,
};

