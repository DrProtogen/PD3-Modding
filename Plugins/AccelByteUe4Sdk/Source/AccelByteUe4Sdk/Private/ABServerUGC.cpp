#include "ABServerUGC.h"

UABServerUGC::UABServerUGC() {
}

void UABServerUGC::SearchContentsSpecificToChannel(const FString& ChannelId, const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABServerUGC::SearchContents(const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABServerUGC::PublicSearchContentsV2(const FAccelByteModelsUGCFilterRequestV2& Filter, const FDModelsUGCSearchContentsPagingResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteUGCContentSortByV2 SortBy) {
}

void UABServerUGC::PublicSearchContentsSpecificToChannelV2(const FString& ChannelId, const FDModelsUGCSearchContentsPagingResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteUGCContentSortByV2 SortBy) {
}

void UABServerUGC::PublicSearchContents(const FString& Name, const FString& Creator, const FString& Type, const FString& Subtype, const TArray<FString>& Tags, bool IsOfficial, const FString& UserId, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteUgcSortBy SortBy, EAccelByteUgcOrderBy OrderBy, int32 Limit, int32 Offset) {
}

void UABServerUGC::PublicSearchAllContents(const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABServerUGC::PublicGetUserContentsV2(const FString& UserId, const FDModelsUGCContentPageResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABServerUGC::PublicGetUserContent(const FString& UserId, const FDModelsUGCContentPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset) {
}

void UABServerUGC::PublicGetContentByShareCodeV2(const FString& ShareCode, const FDModelsUGCContentResponseV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerUGC::PublicGetContentByShareCode(const FString& ShareCode, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerUGC::PublicGetContentByContentIdV2(const FString& ContentId, const FDModelsUGCContentResponseV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerUGC::PublicGetContentByContentId(const FString& ContentId, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerUGC::PublicGetContentBulkByIdsV2(const TArray<FString>& ContentIds, const FDModelsUGCBulkContentResponseV2& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerUGC::PublicGetContentBulk(const TArray<FString>& ContentIds, const FDModelsUGCBulkContentResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerUGC::ModifyContentByShareCode(const FString& UserId, const FString& ChannelId, const FString& ShareCode, const FAccelByteModelsUGCUpdateRequest& ModifyRequest, const FDModelsUGCServerResponse& OnSuccess, const FDErrorHandler& OnError) {
}

void UABServerUGC::DeleteContentByShareCode(const FString& UserId, const FString& ChannelId, const FString& ShareCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError) {
}


