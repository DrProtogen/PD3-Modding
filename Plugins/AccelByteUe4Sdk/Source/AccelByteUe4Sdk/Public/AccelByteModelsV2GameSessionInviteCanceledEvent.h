#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2SessionUser.h"
#include "AccelByteModelsV2GameSessionInviteCanceledEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionInviteCanceledEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2SessionUser> Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CancelledUserIDs;
    
    FAccelByteModelsV2GameSessionInviteCanceledEvent();
};

