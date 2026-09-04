#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementsNotificationType.h"
#include "AccelByteModelsEntitlementsNotificationPayload.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsEntitlementsNotificationPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteEntitlementsNotificationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Payload;
    
    FAccelByteModelsEntitlementsNotificationPayload();
};

