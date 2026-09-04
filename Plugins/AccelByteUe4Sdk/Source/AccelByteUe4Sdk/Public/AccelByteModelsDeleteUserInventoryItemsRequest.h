#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsDeleteUserInventoryItemsRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDeleteUserInventoryItemsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceItemId;
    
    FAccelByteModelsDeleteUserInventoryItemsRequest();
};

