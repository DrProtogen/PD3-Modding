#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSaveInventoryItemsErrorDetails.h"
#include "AccelByteModelsUserItemResponse.h"
#include "AccelByteModelsBulkSaveInventoryItems.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBulkSaveInventoryItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsSaveInventoryItemsErrorDetails ErrorDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsUserItemResponse Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Success;
    
    FAccelByteModelsBulkSaveInventoryItems();
};

