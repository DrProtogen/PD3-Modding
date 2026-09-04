#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsServerResponse.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsServerResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Alias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsServerResponse();
};

