#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2MatchmakingTicketProposedProposal.h"
#include "AccelByteModelsV2MatchmakingGetTicketDetailsResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2MatchmakingGetTicketDetailsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MatchFound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsV2MatchmakingTicketProposedProposal ProposedProposal;
    
    FAccelByteModelsV2MatchmakingGetTicketDetailsResponse();
};

