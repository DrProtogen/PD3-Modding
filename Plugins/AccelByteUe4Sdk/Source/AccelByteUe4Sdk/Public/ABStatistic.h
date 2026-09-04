#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsBulkStatItemInc.h"
#include "DArrayModelsBulkStatItemOperationResultResponseDelegate.h"
#include "DErrorHandlerDelegate.h"
#include "DModelsGlobalStatItemDelegateDelegate.h"
#include "DModelsGlobalStatItemPagingSlicedResultResponseDelegate.h"
#include "DModelsStatItemValueResponsesDelegate.h"
#include "DModelsUserStatItemPagingSlicedResultResponseDelegate.h"
#include "EAccelByteStatisticSortBy.h"
#include "ABStatistic.generated.h"

UCLASS(Blueprintable)
class UABStatistic : public UObject {
    GENERATED_BODY()
public:
    UABStatistic();

    UFUNCTION(BlueprintCallable)
    void ListGlobalStatItemsWithFilter(const FDModelsGlobalStatItemPagingSlicedResultResponse& OnSuccess, const FDErrorHandler& OnError, const TArray<FString>& StatCodesFilter, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void ListGlobalStatItems(const FDModelsGlobalStatItemPagingSlicedResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void IncrementUserStatItems(const TArray<FAccelByteModelsBulkStatItemInc>& Data, const FDArrayModelsBulkStatItemOperationResultResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserStatItems(const TArray<FString>& StatCodes, const TArray<FString>& Tags, const FDModelsUserStatItemPagingSlicedResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteStatisticSortBy SortBy);
    
    UFUNCTION(BlueprintCallable)
    void GetGlobalStatItemsByStatCode(const FString& StatCode, const FDModelsGlobalStatItemDelegate& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetAllUserStatItems(const FDModelsUserStatItemPagingSlicedResultResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteStatisticSortBy SortBy);
    
    UFUNCTION(BlueprintCallable)
    void CreateUserStatItems(const TArray<FString>& StatCodes, const FDArrayModelsBulkStatItemOperationResultResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkFetchStatItemsValue(const FString& StatCode, const TArray<FString>& UserIds, const FDModelsStatItemValueResponses& OnSuccess, const FDErrorHandler& OnError);
    
};

