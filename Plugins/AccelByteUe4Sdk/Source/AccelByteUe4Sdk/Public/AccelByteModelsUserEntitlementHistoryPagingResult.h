#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBaseUserEntitlementHistory.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsUserEntitlementHistoryPagingResult.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUserEntitlementHistoryPagingResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsBaseUserEntitlementHistory> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsUserEntitlementHistoryPagingResult();
};

