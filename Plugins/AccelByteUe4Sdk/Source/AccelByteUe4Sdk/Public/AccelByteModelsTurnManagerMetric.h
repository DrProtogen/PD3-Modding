#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsTurnManagerMetric.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsTurnManagerMetric {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Latency;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsTurnManagerMetric();
};

