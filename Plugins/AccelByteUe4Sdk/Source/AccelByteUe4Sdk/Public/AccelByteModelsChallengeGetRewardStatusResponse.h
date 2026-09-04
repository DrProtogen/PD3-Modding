#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChallengeReward.h"
#include "AccelByteModelsPaging.h"
#include "AccelByteModelsChallengeGetRewardStatusResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChallengeGetRewardStatusResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsChallengeReward> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteModelsPaging Paging;
    
    FAccelByteModelsChallengeGetRewardStatusResponse();
};

