#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsV2MatchmakingBackfillAcceptanceOptionalParam.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsV2MatchmakingBackfillAcceptanceOptionalParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AcceptedTicketIDs;
    
    FAccelByteModelsV2MatchmakingBackfillAcceptanceOptionalParam();
};

