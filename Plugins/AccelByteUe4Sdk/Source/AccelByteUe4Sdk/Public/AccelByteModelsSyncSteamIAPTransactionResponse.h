#pragma once
#include "CoreMinimal.h"
#include "EAccelByteEntitlementIAPOrderStatus.h"
#include "AccelByteModelsSyncSteamIAPTransactionResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSyncSteamIAPTransactionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAccelByteEntitlementIAPOrderStatus IapOrderStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString IapOrderNo;
    
    FAccelByteModelsSyncSteamIAPTransactionResponse();
};

