#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSyncOculusSubscriptionRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSyncOculusSubscriptionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SKUs;
    
    FAccelByteModelsSyncOculusSubscriptionRequest();
};

