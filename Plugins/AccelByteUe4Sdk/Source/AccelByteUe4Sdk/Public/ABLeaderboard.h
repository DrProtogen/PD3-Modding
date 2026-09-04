#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DErrorHandlerDelegate.h"
#include "DModelsBaseLeaderboardDataDelegate.h"
#include "DModelsBulkUserRankingDataV3Delegate.h"
#include "DModelsLeaderboardRankingResultResponseDelegate.h"
#include "DModelsLeaderboardRankingResultV3Delegate.h"
#include "DModelsPaginatedLeaderboardDataDelegate.h"
#include "DModelsUserRankingDataResponseDelegate.h"
#include "DModelsUserRankingDataV3Delegate.h"
#include "EAccelByteLeaderboardTimeFrame.h"
#include "ABLeaderboard.generated.h"

UCLASS(Blueprintable)
class UABLeaderboard : public UObject {
    GENERATED_BODY()
public:
    UABLeaderboard();

    UFUNCTION(BlueprintCallable)
    void GetUserRankingV3(const FString& UserId, const FString& LeaderboardCode, const FDModelsUserRankingDataV3& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserRanking(const FString& UserId, const FString& LeaderboardCode, const FDModelsUserRankingDataResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetRankingsV3(const FString& LeaderboardCode, int32 Offset, int32 Limit, const FDModelsLeaderboardRankingResultV3& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetRankings(const FString& LeaderboardCode, const EAccelByteLeaderboardTimeFrame& TimeFrame, int32 Offset, int32 Limit, const FDModelsLeaderboardRankingResultResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetRankingByCycleV3(const FString& LeaderboardCode, const FString& CycleId, const FDModelsLeaderboardRankingResultV3& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetRankingByCycle(const FString& LeaderboardCode, const FString& CycleId, int32 Offset, int32 Limit, const FDModelsLeaderboardRankingResultV3& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetLeaderboardV3(const FString& LeaderboardCode, const FDModelsBaseLeaderboardData& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetLeaderboardsV3(const FDModelsPaginatedLeaderboardData& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetLeaderboards(int32 Offset, int32 Limit, const FDModelsPaginatedLeaderboardData& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetBulkUserRankingV3(const TArray<FString>& UserIds, const FString& LeaderboardCode, const FDModelsBulkUserRankingDataV3& OnSuccess, const FDErrorHandler& OnError);
    
};

