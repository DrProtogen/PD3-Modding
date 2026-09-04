#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsWalletBalanceChangedData.h"
#include "EAccelByteWalletBalanceChangedAction.h"
#include "AccelByteModelsWalletBalanceChangedNotification.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsWalletBalanceChangedNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteWalletBalanceChangedAction Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsWalletBalanceChangedData Data;
    
    FAccelByteModelsWalletBalanceChangedNotification();
};

