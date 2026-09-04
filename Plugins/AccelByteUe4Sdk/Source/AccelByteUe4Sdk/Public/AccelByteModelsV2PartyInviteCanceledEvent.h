#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2SessionUser.h"
#include "AccelByteModelsV2PartyInviteCanceledEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2PartyInviteCanceledEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2SessionUser> Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CancelledUserIDs;
    
    FAccelByteModelsV2PartyInviteCanceledEvent();
};

