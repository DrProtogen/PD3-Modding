#pragma once
#include "CoreMinimal.h"
#include "BaseFreeformData.h"
#include "MissionId.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FMissionId : public FBaseFreeformData {
    GENERATED_BODY()
public:
    FMissionId();
};

