#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsConsumeUserItemsRequest.h"
#include "AccelByteModelsCreateInventoryRequest.h"
#include "AccelByteModelsDeleteInventoryRequest.h"
#include "AccelByteModelsDeleteUserInventoryItemsRequest.h"
#include "AccelByteModelsSaveInventoryItemByInventoryIdRequest.h"
#include "AccelByteModelsSaveInventoryItemRequest.h"
#include "AccelByteModelsUpdateInventoryItemRequest.h"
#include "AccelByteModelsUpdateInventoryRequest.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsDeleteUserItemsResponsesDelegate.h"
#include "DModelsPaginatedUserInventoriesResponseDelegate.h"
#include "DModelsPaginatedUserItemsResponseDelegate.h"
#include "DModelsSaveInventoryItemsResponsesDelegate.h"
#include "DModelsUpdateAllInventoriesResponseDelegate.h"
#include "DModelsUpdateInventoryItemsResponsesDelegate.h"
#include "DModelsUserInventoryResponseDelegate.h"
#include "DModelsUserItemResponseDelegate.h"
#include "EAccelByteInventoriesSortBy.h"
#include "EAccelByteUserItemsSortBy.h"
#include "ABServerInventory.generated.h"

UCLASS(Blueprintable)
class UABServerInventory : public UObject {
    GENERATED_BODY()
public:
    UABServerInventory();

    UFUNCTION(BlueprintCallable)
    void UpdateInventory(const FString& InventoryId, const FAccelByteModelsUpdateInventoryRequest& UpdateInventoryRequest, const FDModelsUserInventoryResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAllUserInventories(const FString& UserId, const FString& InventoryConfigurationCode, const FAccelByteModelsUpdateInventoryRequest& UpdateInventoryRequest, const FDModelsUpdateAllInventoriesResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void SyncUserEntitlement(const FString& UserId, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void SaveInventoryItemByInventoryId(const FString& UserId, const FString& InventoryId, const FAccelByteModelsSaveInventoryItemByInventoryIdRequest& SaveItemRequest, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void SaveInventoryItem(const FString& UserId, const FAccelByteModelsSaveInventoryItemRequest& SaveItemRequest, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetInventoryItem(const FString& InventoryId, const FString& SlotId, const FString& SourceItemId, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetInventoryAllItems(const FString& InventoryId, const FDModelsPaginatedUserItemsResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteUserItemsSortBy& SortBy, int32 Limit, int32 Offset, const FString& SourceItemId, const FString& Tags);
    
    UFUNCTION(BlueprintCallable)
    void GetInventory(const FString& InventoryId, const FDModelsUserInventoryResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetInventories(const FDModelsPaginatedUserInventoriesResponse& OnSuccess, const FDErrorHandler& OnError, const FString& UserId, const FString& InventoryConfigurationCode, EAccelByteInventoriesSortBy SortBy, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void DeleteInventory(const FString& InventoryId, const FAccelByteModelsDeleteInventoryRequest& DeleteInventoryRequest, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void CreateInventory(const FAccelByteModelsCreateInventoryRequest& CreateInventoryRequest, const FDModelsUserInventoryResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ConsumeInventoryItem(const FString& UserId, const FString& InventoryId, const FAccelByteModelsConsumeUserItemsRequest& ConsumedItemsRequest, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkUpdateInventoryItems(const FString& UserId, const FString& InventoryId, const TArray<FAccelByteModelsUpdateInventoryItemRequest>& UpdatedItemsRequest, const FDModelsUpdateInventoryItemsResponses& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkSaveInventoryItemsByInventoryId(const FString& UserId, const FString& InventoryId, const TArray<FAccelByteModelsSaveInventoryItemByInventoryIdRequest>& SaveItemsRequests, const FDModelsSaveInventoryItemsResponses& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkSaveInventoryItems(const FString& UserId, const TArray<FAccelByteModelsSaveInventoryItemRequest>& SaveItemsRequests, const FDModelsSaveInventoryItemsResponses& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkDeleteUserInventoryItems(const FString& UserId, const FString& InventoryId, const TArray<FAccelByteModelsDeleteUserInventoryItemsRequest>& DeletedItemsRequest, const FDModelsDeleteUserItemsResponses& OnSuccess, const FDErrorHandler& OnError);
    
};

