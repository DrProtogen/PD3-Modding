#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsConsumeUserItemsRequest.h"
#include "AccelByteModelsDeleteUserInventoryItemsRequest.h"
#include "AccelByteModelsMoveUserItemsBetweenInventoriesRequest.h"
#include "AccelByteModelsUpdateUserInventoryItemRequest.h"
#include "DErrorHandlerDelegate.h"
#include "DModelsDeleteUserItemsResponsesDelegate.h"
#include "DModelsMoveUserItemsBetweenInventoriesResponseDelegate.h"
#include "DModelsPaginatedInventoryTagsResponseDelegate.h"
#include "DModelsPaginatedInventoryTypesResponseDelegate.h"
#include "DModelsPaginatedItemTypesResponseDelegate.h"
#include "DModelsPaginatedUserInventoriesResponseDelegate.h"
#include "DModelsPaginatedUserItemsResponseDelegate.h"
#include "DModelsUpdateUserItemsResponsesDelegate.h"
#include "DModelsUserItemResponseDelegate.h"
#include "EAccelByteInventoryConfigurationSortBy.h"
#include "EAccelByteInventoryUtilitiesSortBy.h"
#include "EAccelByteUserInventoriesSortBy.h"
#include "EAccelByteUserItemsSortBy.h"
#include "ABInventory.generated.h"

UCLASS(Blueprintable)
class UABInventory : public UObject {
    GENERATED_BODY()
public:
    UABInventory();

    UFUNCTION(BlueprintCallable)
    void MoveItemsBetweenInventories(const FString& TargetInventoryId, const FAccelByteModelsMoveUserItemsBetweenInventoriesRequest& MoveItemsRequest, const FDModelsMoveUserItemsBetweenInventoriesResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserInventoryItem(const FString& InventoryId, const FString& SlotId, const FString& SourceItemId, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserInventoryAllItems(const FString& InventoryId, const FDModelsPaginatedUserItemsResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteUserItemsSortBy& SortBy, int32 Limit, int32 Offset, const FString& SourceItemId, const FString& Tags);
    
    UFUNCTION(BlueprintCallable)
    void GetUserInventories(const FDModelsPaginatedUserInventoriesResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteUserInventoriesSortBy& SortBy, const int32& Limit, const int32& Offset, const FString& InventoryConfigurationCode);
    
    UFUNCTION(BlueprintCallable)
    void GetItemTypes(const FDModelsPaginatedItemTypesResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteInventoryUtilitiesSortBy& SortBy, const int32& Limit, const int32& Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetInventoryTags(const FDModelsPaginatedInventoryTagsResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteInventoryUtilitiesSortBy& SortBy, const int32& Limit, const int32& Offset);
    
    UFUNCTION(BlueprintCallable)
    void GetInventoryConfigurations(const FDModelsPaginatedInventoryTypesResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteInventoryConfigurationSortBy& SortBy, const int32& Limit, const int32& Offset, const FString& InventoryConfigurationCode);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeUserInventoryItem(const FString& InventoryId, const FAccelByteModelsConsumeUserItemsRequest& ConsumedItemsRequest, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkUpdateInventoryItems(const FString& InventoryId, const TArray<FAccelByteModelsUpdateUserInventoryItemRequest>& UpdatedItemsRequest, const FDModelsUpdateUserItemsResponses& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkDeleteInventoryItems(const FString& InventoryId, const TArray<FAccelByteModelsDeleteUserInventoryItemsRequest>& DeletedItemsRequest, const FDModelsDeleteUserItemsResponses& OnSuccess, const FDErrorHandler& OnError);
    
};

