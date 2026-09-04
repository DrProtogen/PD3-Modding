#pragma once
#include "CoreMinimal.h"
#include "BaseFreeformData.h"
#include "MissionStepName.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FMissionStepName : public FBaseFreeformData {
    GENERATED_BODY()
public:
    FMissionStepName();
};

