#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChallengeReward.h"
#include "DModelsChallengeRewardsResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDModelsChallengeRewardsResponse, TArray<FAccelByteModelsChallengeReward>, Response);

