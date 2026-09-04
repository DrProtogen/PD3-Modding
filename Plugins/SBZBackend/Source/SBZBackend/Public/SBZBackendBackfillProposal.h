#pragma once
#include "CoreMinimal.h"
#include "SBZBackendMatchmakingTicket.h"
#include "SBZBackendSessionTeam.h"
#include "SBZBackendBackfillProposal.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBackendBackfillProposal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BackfillTicketID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProposalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MatchSessionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBackendSessionTeam> ProposedTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZBackendMatchmakingTicket> AddedTickets;
    
    FSBZBackendBackfillProposal();
};

