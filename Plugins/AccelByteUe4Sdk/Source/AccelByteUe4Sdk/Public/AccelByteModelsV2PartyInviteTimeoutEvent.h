#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2PartyInviteTimeoutEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2PartyInviteTimeoutEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyID;
    
    FAccelByteModelsV2PartyInviteTimeoutEvent();
};

