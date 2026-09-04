#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChallengeRewardClaimRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChallengeRewardClaimRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RewardIDs;
    
    FAccelByteModelsChallengeRewardClaimRequest();
};

