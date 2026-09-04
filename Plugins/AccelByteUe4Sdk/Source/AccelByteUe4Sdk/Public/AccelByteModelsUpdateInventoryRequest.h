#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUpdateInventoryRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUpdateInventoryRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IncMaxSlots;
    
    FAccelByteModelsUpdateInventoryRequest();
};

