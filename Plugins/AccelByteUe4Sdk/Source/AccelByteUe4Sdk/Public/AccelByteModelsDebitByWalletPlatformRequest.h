#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "EAccelByteDebitUserWalletSource.h"
#include "EAccelByteWalletPlatform.h"
#include "AccelByteModelsDebitByWalletPlatformRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDebitByWalletPlatformRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteWalletPlatform WalletPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteDebitUserWalletSource DebitBalanceSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Metadata;
    
    FAccelByteModelsDebitByWalletPlatformRequest();
};

