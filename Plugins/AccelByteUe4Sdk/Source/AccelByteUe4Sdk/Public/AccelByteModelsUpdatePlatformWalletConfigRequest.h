#pragma once
#include "CoreMinimal.h"
#include "EAccelBytePlatformBalanceOrigin.h"
#include "AccelByteModelsUpdatePlatformWalletConfigRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUpdatePlatformWalletConfigRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAccelBytePlatformBalanceOrigin> AllowedBalanceOrigins;
    
    FAccelByteModelsUpdatePlatformWalletConfigRequest();
};

