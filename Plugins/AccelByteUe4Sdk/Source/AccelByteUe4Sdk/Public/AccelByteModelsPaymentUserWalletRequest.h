#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "EAccelByteWalletPlatform.h"
#include "AccelByteModelsPaymentUserWalletRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsPaymentUserWalletRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteWalletPlatform WalletPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Metadata;
    
    FAccelByteModelsPaymentUserWalletRequest();
};

