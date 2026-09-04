#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUpdateWalletConfigRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsUpdateWalletConfigRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnablePaidForVCExpiration;
    
    FAccelByteModelsUpdateWalletConfigRequest();
};

