#pragma once
#include "CoreMinimal.h"
#include "EAccelByteWalletNotificationType.h"
#include "AccelByteModelsWalletNotificationPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsWalletNotificationPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteWalletNotificationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Payload;
    
    FAccelByteModelsWalletNotificationPayload();
};

