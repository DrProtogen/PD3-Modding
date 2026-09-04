#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsInventoryTagResponse.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsInventoryTagPagingResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsInventoryTagPagingResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsInventoryTagResponse> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsInventoryTagPagingResponse();
};

