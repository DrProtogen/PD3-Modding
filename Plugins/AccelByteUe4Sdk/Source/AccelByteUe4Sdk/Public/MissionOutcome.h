#pragma once
#include "CoreMinimal.h"
#include "BaseFreeformData.h"
#include "MissionOutcome.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FMissionOutcome : public FBaseFreeformData {
    GENERATED_BODY()
public:
    FMissionOutcome();
};

