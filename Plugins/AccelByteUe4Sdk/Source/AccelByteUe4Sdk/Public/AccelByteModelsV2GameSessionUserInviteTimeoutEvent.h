#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2GameSessionUserInviteTimeoutEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2GameSessionUserInviteTimeoutEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionID;
    
    FAccelByteModelsV2GameSessionUserInviteTimeoutEvent();
};

