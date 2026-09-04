#pragma once
#include "CoreMinimal.h"
#include "BaseFreeformData.h"
#include "MatchEndReason.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FMatchEndReason : public FBaseFreeformData {
    GENERATED_BODY()
public:
    FMatchEndReason();
};

