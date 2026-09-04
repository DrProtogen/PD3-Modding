#include "ABLeaderboard.h"

UABLeaderboard::UABLeaderboard() {
}

void UABLeaderboard::GetUserRankingV3(const FString& UserId, const FString& LeaderboardCode, const FDModelsUserRankingDataV3& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetUserRanking(const FString& UserId, const FString& LeaderboardCode, const FDModelsUserRankingDataResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetRankingsV3(const FString& LeaderboardCode, int32 Offset, int32 Limit, const FDModelsLeaderboardRankingResultV3& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetRankings(const FString& LeaderboardCode, const EAccelByteLeaderboardTimeFrame& TimeFrame, int32 Offset, int32 Limit, const FDModelsLeaderboardRankingResultResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetRankingByCycleV3(const FString& LeaderboardCode, const FString& CycleId, const FDModelsLeaderboardRankingResultV3& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABLeaderboard::GetRankingByCycle(const FString& LeaderboardCode, const FString& CycleId, int32 Offset, int32 Limit, const FDModelsLeaderboardRankingResultV3& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetLeaderboardV3(const FString& LeaderboardCode, const FDModelsBaseLeaderboardData& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetLeaderboardsV3(const FDModelsPaginatedLeaderboardData& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABLeaderboard::GetLeaderboards(int32 Offset, int32 Limit, const FDModelsPaginatedLeaderboardData& OnSuccess, const FDErrorHandler& OnError) {
}

void UABLeaderboard::GetBulkUserRankingV3(const TArray<FString>& UserIds, const FString& LeaderboardCode, const FDModelsBulkUserRankingDataV3& OnSuccess, const FDErrorHandler& OnError) {
}


