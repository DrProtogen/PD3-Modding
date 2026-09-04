#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2ImpactedUserIds.h"
#include "AccelByteModelsV2PartySession.h"
#include "AccelByteModelsV2SessionUser.h"
#include "AccelByteModelsV2PartyMembersChangedEvent.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2PartyMembersChangedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PartyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JoinerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LeaderID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsV2SessionUser> Members;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsV2PartySession Session;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsV2ImpactedUserIds ImpactedUserIDs;
    
    FAccelByteModelsV2PartyMembersChangedEvent();
};

