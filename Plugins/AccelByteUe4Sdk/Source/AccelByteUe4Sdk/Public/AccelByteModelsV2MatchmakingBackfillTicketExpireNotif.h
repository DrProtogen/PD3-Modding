#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2MatchmakingBackfillTicketExpireNotif.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2MatchmakingBackfillTicketExpireNotif {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TicketId;
    
    FAccelByteModelsV2MatchmakingBackfillTicketExpireNotif();
};

