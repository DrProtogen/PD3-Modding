#include "ABServerInventory.h"

UABServerInventory::UABServerInventory() {
}

void UABServerInventory::UpdateInventory(const FString& InventoryId, const FAccelByteModelsUpdateInventoryRequest& UpdateInventoryRequest, const FDModelsUserInventoryResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::UpdateAllUserInventories(const FString& UserId, const FString& InventoryConfigurationCode, const FAccelByteModelsUpdateInventoryRequest& UpdateInventoryRequest, const FDModelsUpdateAllInventoriesResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::SyncUserEntitlement(const FString& UserId, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::SaveInventoryItemByInventoryId(const FString& UserId, const FString& InventoryId, const FAccelByteModelsSaveInventoryItemByInventoryIdRequest& SaveItemRequest, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::SaveInventoryItem(const FString& UserId, const FAccelByteModelsSaveInventoryItemRequest& SaveItemRequest, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::GetInventoryItem(const FString& InventoryId, const FString& SlotId, const FString& SourceItemId, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::GetInventoryAllItems(const FString& InventoryId, const FDModelsPaginatedUserItemsResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteUserItemsSortBy& SortBy, int32 Limit, int32 Offset, const FString& SourceItemId, const FString& Tags) {
}

void UABServerInventory::GetInventory(const FString& InventoryId, const FDModelsUserInventoryResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::GetInventories(const FDModelsPaginatedUserInventoriesResponse& OnSuccess, const FDErrorHandler& OnError, const FString& UserId, const FString& InventoryConfigurationCode, EAccelByteInventoriesSortBy SortBy, int32 Limit, int32 Offset) {
}

void UABServerInventory::DeleteInventory(const FString& InventoryId, const FAccelByteModelsDeleteInventoryRequest& DeleteInventoryRequest, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::CreateInventory(const FAccelByteModelsCreateInventoryRequest& CreateInventoryRequest, const FDModelsUserInventoryResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::ConsumeInventoryItem(const FString& UserId, const FString& InventoryId, const FAccelByteModelsConsumeUserItemsRequest& ConsumedItemsRequest, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::BulkUpdateInventoryItems(const FString& UserId, const FString& InventoryId, const TArray<FAccelByteModelsUpdateInventoryItemRequest>& UpdatedItemsRequest, const FDModelsUpdateInventoryItemsResponses& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::BulkSaveInventoryItemsByInventoryId(const FString& UserId, const FString& InventoryId, const TArray<FAccelByteModelsSaveInventoryItemByInventoryIdRequest>& SaveItemsRequests, const FDModelsSaveInventoryItemsResponses& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::BulkSaveInventoryItems(const FString& UserId, const TArray<FAccelByteModelsSaveInventoryItemRequest>& SaveItemsRequests, const FDModelsSaveInventoryItemsResponses& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerInventory::BulkDeleteUserInventoryItems(const FString& UserId, const FString& InventoryId, const TArray<FAccelByteModelsDeleteUserInventoryItemsRequest>& DeletedItemsRequest, const FDModelsDeleteUserItemsResponses& OnSuccess, const FDErrorHandler& OnError) {
}


