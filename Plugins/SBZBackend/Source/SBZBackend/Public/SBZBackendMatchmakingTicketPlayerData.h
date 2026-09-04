#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "SBZBackendMatchmakingTicketPlayerData.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBackendMatchmakingTicketPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Attributes;
    
    FSBZBackendMatchmakingTicketPlayerData();
};

