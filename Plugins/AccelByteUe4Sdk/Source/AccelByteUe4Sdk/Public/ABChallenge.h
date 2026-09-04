#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsChallengeRewardClaimRequest.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsChallengeGetRewardStatusResponseDelegate.h"
#include "DModelsChallengeProgressResponseDelegate.h"
#include "DModelsChallengeRewardsResponseDelegate.h"
#include "DModelsGetChallengesResponseDelegate.h"
#include "EAccelByteModelsChallengeRewardStatus.h"
#include "EAccelByteModelsChallengeSortBy.h"
#include "EAccelByteModelsChallengeStatus.h"
#include "ABChallenge.generated.h"

UCLASS(Blueprintable)
class UABChallenge : public UObject {
    GENERATED_BODY()
public:
    UABChallenge();

    UFUNCTION(BlueprintCallable)
    void GetRewards(const FDModelsChallengeGetRewardStatusResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteModelsChallengeRewardStatus Status, EAccelByteModelsChallengeSortBy SortBy, int64 Offset, int64 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetPreviousChallengeProgresses(const FString& ChallengeCode, int32 Index, const FDModelsChallengeProgressResponse& OnSuccess, const FDErrorHandler& OnError, const TArray<FString>& OptionalTags, const FString& GoalCode, int64 Offset, int64 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetChallenges(const FDModelsGetChallengesResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteModelsChallengeSortBy SortBy, EAccelByteModelsChallengeStatus Status, int64 Offset, int64 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetChallengeProgress(const FString& ChallengeCode, const FString& GoalCode, const FDModelsChallengeProgressResponse& OnSuccess, const FDErrorHandler& OnError, const TArray<FString>& OptionalTags, int64 Offset, int64 Limit);
    
    UFUNCTION(BlueprintCallable)
    void GetChallengeList(const FDModelsGetChallengesResponse& OnSuccess, const FDErrorHandler& OnError, const TArray<FString>& OptionalTags, EAccelByteModelsChallengeSortBy SortBy, EAccelByteModelsChallengeStatus Status, int64 Offset, int64 Limit, const FString& Keyword);
    
    UFUNCTION(BlueprintCallable)
    void EvaluateChallengeProgress(const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ClaimReward(const FAccelByteModelsChallengeRewardClaimRequest& Request, const FDModelsChallengeRewardsResponse& OnSuccess, const FDErrorHandler& OnError);
    
};

