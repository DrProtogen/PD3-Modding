#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUpdateUserInventoryItemErrorDetails.h"
#include "AccelByteModelsDeleteUserInventoryItemResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDeleteUserInventoryItemResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsUpdateUserInventoryItemErrorDetails ErrorDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SlotId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Success;
    
    FAccelByteModelsDeleteUserInventoryItemResponse();
};

