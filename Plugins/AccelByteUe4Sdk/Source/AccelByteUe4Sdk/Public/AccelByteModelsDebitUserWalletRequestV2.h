#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "AccelByteModelsDebitUserWalletRequest.h"
#include "EAccelByteDebitUserWalletSource.h"
#include "EAccelBytePlatformBalanceOrigin.h"
#include "AccelByteModelsDebitUserWalletRequestV2.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDebitUserWalletRequestV2 : public FAccelByteModelsDebitUserWalletRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteDebitUserWalletSource BalanceSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Metadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelBytePlatformBalanceOrigin BalanceOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowOverdraft;
    
    FAccelByteModelsDebitUserWalletRequestV2();
};

