#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDeleteInventoryRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDeleteInventoryRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FAccelByteModelsDeleteInventoryRequest();
};

