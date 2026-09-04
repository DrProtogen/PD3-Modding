#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSyncSteamIAPTransactionRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSyncSteamIAPTransactionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OrderId;
    
    FAccelByteModelsSyncSteamIAPTransactionRequest();
};

