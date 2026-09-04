#include "ABInventory.h"

UABInventory::UABInventory() {
}

void UABInventory::MoveItemsBetweenInventories(const FString& TargetInventoryId, const FAccelByteModelsMoveUserItemsBetweenInventoriesRequest& MoveItemsRequest, const FDModelsMoveUserItemsBetweenInventoriesResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABInventory::GetUserInventoryItem(const FString& InventoryId, const FString& SlotId, const FString& SourceItemId, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABInventory::GetUserInventoryAllItems(const FString& InventoryId, const FDModelsPaginatedUserItemsResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteUserItemsSortBy& SortBy, int32 Limit, int32 Offset, const FString& SourceItemId, const FString& Tags) {
}

void UABInventory::GetUserInventories(const FDModelsPaginatedUserInventoriesResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteUserInventoriesSortBy& SortBy, const int32& Limit, const int32& Offset, const FString& InventoryConfigurationCode) {
}

void UABInventory::GetItemTypes(const FDModelsPaginatedItemTypesResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteInventoryUtilitiesSortBy& SortBy, const int32& Limit, const int32& Offset) {
}

void UABInventory::GetInventoryTags(const FDModelsPaginatedInventoryTagsResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteInventoryUtilitiesSortBy& SortBy, const int32& Limit, const int32& Offset) {
}

void UABInventory::GetInventoryConfigurations(const FDModelsPaginatedInventoryTypesResponse& OnSuccess, const FDErrorHandler& OnError, const EAccelByteInventoryConfigurationSortBy& SortBy, const int32& Limit, const int32& Offset, const FString& InventoryConfigurationCode) {
}

void UABInventory::ConsumeUserInventoryItem(const FString& InventoryId, const FAccelByteModelsConsumeUserItemsRequest& ConsumedItemsRequest, const FDModelsUserItemResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABInventory::BulkUpdateInventoryItems(const FString& InventoryId, const TArray<FAccelByteModelsUpdateUserInventoryItemRequest>& UpdatedItemsRequest, const FDModelsUpdateUserItemsResponses& OnSuccess, const FDErrorHandler& OnError) {
}

void UABInventory::BulkDeleteInventoryItems(const FString& InventoryId, const TArray<FAccelByteModelsDeleteUserInventoryItemsRequest>& DeletedItemsRequest, const FDModelsDeleteUserItemsResponses& OnSuccess, const FDErrorHandler& OnError) {
}


