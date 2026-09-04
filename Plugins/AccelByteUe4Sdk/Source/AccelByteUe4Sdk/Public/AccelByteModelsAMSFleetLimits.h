#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsAMSFleetLimits.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsAMSFleetLimits {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FleetCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FleetVmCount;
    
    FAccelByteModelsAMSFleetLimits();
};

