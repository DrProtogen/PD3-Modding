#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsItemTypeResponse.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsItemTypePagingResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsItemTypePagingResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsItemTypeResponse> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsItemTypePagingResponse();
};

