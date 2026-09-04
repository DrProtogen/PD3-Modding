#pragma once
#include "CoreMinimal.h"
#include "BaseFreeformData.h"
#include "MatchDifficulty.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FMatchDifficulty : public FBaseFreeformData {
    GENERATED_BODY()
public:
    FMatchDifficulty();
};

