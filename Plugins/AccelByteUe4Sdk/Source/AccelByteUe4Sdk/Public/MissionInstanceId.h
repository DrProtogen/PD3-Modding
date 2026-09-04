#pragma once
#include "CoreMinimal.h"
#include "AccelByteId.h"
#include "MissionInstanceId.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FMissionInstanceId : public FAccelByteId {
    GENERATED_BODY()
public:
    FMissionInstanceId();
};

