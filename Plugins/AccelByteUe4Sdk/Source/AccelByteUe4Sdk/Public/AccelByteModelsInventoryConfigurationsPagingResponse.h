#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsInventoryConfigurationResponse.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsInventoryConfigurationsPagingResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsInventoryConfigurationsPagingResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsInventoryConfigurationResponse> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsInventoryConfigurationsPagingResponse();
};

