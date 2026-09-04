#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsWalletStatusChangedData.h"
#include "EAccelByteWalletStatusChangedAction.h"
#include "AccelByteModelsWalletStatusChangedNotification.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsWalletStatusChangedNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteWalletStatusChangedAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsWalletStatusChangedData Data;
    
    FAccelByteModelsWalletStatusChangedNotification();
};

