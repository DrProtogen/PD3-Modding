#include "ABCloudSave.h"

UABCloudSave::UABCloudSave() {
}

void UABCloudSave::SaveUserRecord(const FString& Key, const FJsonObjectWrapper& RecordRequest, bool IsPublic, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::SaveGameRecord(const FString& Key, const FJsonObjectWrapper& RecordRequest, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::ReplaceUserRecordCheckLatestWithResponse(const FString& Key, const FDateTime& LastUpdated, const FJsonObjectWrapper& RecordRequest, const FDModelsReplaceUserRecordResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::ReplaceUserRecordCheckLatestRetryWithResponse(int32 TryAttempt, const FString& Key, const FJsonObjectWrapper& RecordRequest, const FDPayloadJsonObject& PayloadModifier, const FDModelsReplaceUserRecordResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::ReplaceUserRecordCheckLatestRetry(int32 TryAttempt, const FString& Key, const FJsonObjectWrapper& RecordRequest, const FDPayloadJsonObject& PayloadModifier, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::ReplaceUserRecordCheckLatest(const FString& Key, const FDateTime& LastUpdated, const FJsonObjectWrapper& RecordRequest, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::ReplaceUserRecord(const FString& Key, const FJsonObjectWrapper& RecordRequest, bool IsPublic, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::ReplaceGameRecordCheckLatestRetry(int32 TryAttempt, const FString& Key, const FJsonObjectWrapper& RecordRequest, const FDPayloadJsonObject& PayloadModifier, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::ReplaceGameRecordCheckLatest(const FString& Key, const FDateTime& LastUpdated, const FJsonObjectWrapper& RecordRequest, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::ReplaceGameRecord(const FString& Key, const FJsonObjectWrapper& RecordRequest, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::GetUserRecord(const FString& Key, const FDModelsUserRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::GetPublicUserRecord(const FString& Key, const FString& UserId, const FDModelsUserRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::GetGameRecord(const FString& Key, const FDModelsGameRecord& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::DeleteUserRecord(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::DeleteGameRecord(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::BulkGetUserRecords(const TArray<FString>& Keys, const FDModelsListUserRecords& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::BulkGetOtherPlayerPublicRecords(const FString& UserId, const TArray<FString>& Keys, const FDModelsListUserRecords& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::BulkGetOtherPlayerPublicRecordKeys(const FString& UserId, const FDModelsPaginatedBulkGetPublicUserRecordKeysResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}

void UABCloudSave::BulkGetGameRecords(const TArray<FString>& Keys, const FDModelsListGameRecords& OnSuccess, const FDErrorHandler& OnError) {
}

void UABCloudSave::BulkGetCurrentPlayerPublicRecordKeys(const FDModelsPaginatedBulkGetPublicUserRecordKeysResponse& OnSuccess, const FDErrorHandler& OnError, const int32& Offset, const int32& Limit) {
}


