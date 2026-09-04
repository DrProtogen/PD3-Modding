#include "ABChallenge.h"

UABChallenge::UABChallenge() {
}

void UABChallenge::GetRewards(const FDModelsChallengeGetRewardStatusResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteModelsChallengeRewardStatus Status, EAccelByteModelsChallengeSortBy SortBy, int64 Offset, int64 Limit) {
}

void UABChallenge::GetPreviousChallengeProgresses(const FString& ChallengeCode, int32 Index, const FDModelsChallengeProgressResponse& OnSuccess, const FDErrorHandler& OnError, const TArray<FString>& OptionalTags, const FString& GoalCode, int64 Offset, int64 Limit) {
}

void UABChallenge::GetChallenges(const FDModelsGetChallengesResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteModelsChallengeSortBy SortBy, EAccelByteModelsChallengeStatus Status, int64 Offset, int64 Limit) {
}

void UABChallenge::GetChallengeProgress(const FString& ChallengeCode, const FString& GoalCode, const FDModelsChallengeProgressResponse& OnSuccess, const FDErrorHandler& OnError, const TArray<FString>& OptionalTags, int64 Offset, int64 Limit) {
}

void UABChallenge::GetChallengeList(const FDModelsGetChallengesResponse& OnSuccess, const FDErrorHandler& OnError, const TArray<FString>& OptionalTags, EAccelByteModelsChallengeSortBy SortBy, EAccelByteModelsChallengeStatus Status, int64 Offset, int64 Limit, const FString& Keyword) {
}

void UABChallenge::EvaluateChallengeProgress(const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABChallenge::ClaimReward(const FAccelByteModelsChallengeRewardClaimRequest& Request, const FDModelsChallengeRewardsResponse& OnSuccess, const FDErrorHandler& OnError) {
}


