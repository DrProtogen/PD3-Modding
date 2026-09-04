#include "ABServerCloudsave.h"

UABServerCloudsave::UABServerCloudsave() {
}

void UABServerCloudsave::RetrieveGameRecordsKey(const FDModelsPaginatedRecordsKey& OnSuccess, const FDErrorHandler& OnError, const FString& Query, int32 Limit, int32 Offset) {
}

void UABServerCloudsave::QueryAdminUserRecordsByKey(const FString& Key, const FString& UserId, const FDModelsAdminUserRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::QueryAdminUserRecordKeys(const FString& UserId, int32 Limit, int32 Offset, const FDModelsPaginatedGetAdminUserRecordKeysResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::QueryAdminGameRecordsByKey(const FString& Key, const FDModelsAdminGameRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::QueryAdminGameRecordKeys(int32 Limit, int32 Offset, const FDModelsPaginatedRecordsKey& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::GetUserRecord(const FString& Key, const FString& UserId, const FDModelsUserRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::GetPublicUserRecord(const FString& Key, const FString& UserId, const FDModelsUserRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::GetGameRecord(const FString& Key, const FDModelsGameRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::DeleteUserRecord(const FString& Key, const FString& UserId, bool bIsPublic, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::DeleteGameRecordTTLConfig(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::DeleteGameRecord(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::DeleteAdminUserRecord(const FString& Key, const FString& UserId, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::DeleteAdminGameRecordTTLConfig(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::DeleteAdminGameRecord(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::BulkReplaceUserRecord(const FString& Key, const FAccelByteModelsBulkReplaceUserRecordRequest& Request, const FDModelsBulkReplaceUserRecordResponses& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::BulkGetUserRecordsByKeys(const FString& UserId, const TArray<FString>& Keys, const FDModelsAdminGetUserRecords& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::BulkGetUserRecord(const FString& Key, const TArray<FString>& UserIds, const FDModelsUserRecords& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerCloudsave::BulkGetPlayerRecordSize(const FAccelByteModelsBulkGetPlayerRecordSizeRequest& GetPlayerRecordSizeRequest, const FDModelsPaginatedBulkGetPlayerRecordSizeResponse& OnSuccess, const FDErrorHandler& OnError) {
}


