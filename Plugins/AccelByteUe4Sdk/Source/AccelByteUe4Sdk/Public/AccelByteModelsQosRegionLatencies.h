#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsQosRegionLatency.h"
#include "AccelByteModelsQosRegionLatencies.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsQosRegionLatencies {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsQosRegionLatency> Data;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsQosRegionLatencies();
};

