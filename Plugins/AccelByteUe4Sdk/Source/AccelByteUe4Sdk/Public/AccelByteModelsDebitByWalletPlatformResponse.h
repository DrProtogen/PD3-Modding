#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsPlatformWallet.h"
#include "AccelByteModelsDebitByWalletPlatformResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsDebitByWalletPlatformResponse : public FAccelByteModelsPlatformWallet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TransactionId;
    
    FAccelByteModelsDebitByWalletPlatformResponse();
};

