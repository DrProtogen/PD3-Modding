#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSaveInventoryItemByInventoryIdRequest.h"
#include "AccelByteModelsSaveInventoryItemRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSaveInventoryItemRequest : public FAccelByteModelsSaveInventoryItemByInventoryIdRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InventoryConfigurationCode;
    
    FAccelByteModelsSaveInventoryItemRequest();
};

