#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsCurrencyTransaction.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsListUserCurrencyTransactionsResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsListUserCurrencyTransactionsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsCurrencyTransaction> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsListUserCurrencyTransactionsResponse();
};

