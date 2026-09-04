#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsUserNotification.h"
#include "AccelByteModelsGetUserNotificationsResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsGetUserNotificationsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsUserNotification> Notifications;
    
    FAccelByteModelsGetUserNotificationsResponse();
};

