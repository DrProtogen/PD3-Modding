#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsGlobalStatItemValueResponse.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsGlobalStatItemPagingSlicedResult.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGlobalStatItemPagingSlicedResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsGlobalStatItemValueResponse> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsGlobalStatItemPagingSlicedResult();
};

