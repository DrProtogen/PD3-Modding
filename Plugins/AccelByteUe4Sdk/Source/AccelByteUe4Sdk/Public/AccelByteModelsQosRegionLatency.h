#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsQosRegionLatency.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsQosRegionLatency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Latency;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsQosRegionLatency();
};

