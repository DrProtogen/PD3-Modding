#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsUGCFilterRequestV2.h"
#include "AccelByteModelsUGCSearchContentsRequest.h"
#include "AccelByteModelsUGCUpdateRequest.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsUGCBulkContentResponseDelegate.h"
#include "DModelsUGCBulkContentResponseV2Delegate.h"
#include "DModelsUGCContentPageResponseV2Delegate.h"
#include "DModelsUGCContentPagingResponseDelegate.h"
#include "DModelsUGCContentResponseDelegate.h"
#include "DModelsUGCContentResponseV2Delegate.h"
#include "DModelsUGCSearchContentsPagingResponseDelegate.h"
#include "DModelsUGCSearchContentsPagingResponseV2Delegate.h"
#include "DModelsUGCSearchContentsResponseDelegate.h"
#include "DModelsUGCServerResponseDelegate.h"
#include "EAccelByteUGCContentSortByV2.h"
#include "EAccelByteUgcOrderBy.h"
#include "EAccelByteUgcSortBy.h"
#include "ABServerUGC.generated.h"

UCLASS(Blueprintable)
class UABServerUGC : public UObject {
    GENERATED_BODY()
public:
    UABServerUGC();

    UFUNCTION(BlueprintCallable)
    void SearchContentsSpecificToChannel(const FString& ChannelId, const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void SearchContents(const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void PublicSearchContentsV2(const FAccelByteModelsUGCFilterRequestV2& Filter, const FDModelsUGCSearchContentsPagingResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteUGCContentSortByV2 SortBy);
    
    UFUNCTION(BlueprintCallable)
    void PublicSearchContentsSpecificToChannelV2(const FString& ChannelId, const FDModelsUGCSearchContentsPagingResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset, EAccelByteUGCContentSortByV2 SortBy);
    
    UFUNCTION(BlueprintCallable)
    void PublicSearchContents(const FString& Name, const FString& Creator, const FString& Type, const FString& Subtype, const TArray<FString>& Tags, bool IsOfficial, const FString& UserId, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, EAccelByteUgcSortBy SortBy, EAccelByteUgcOrderBy OrderBy, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void PublicSearchAllContents(const FAccelByteModelsUGCSearchContentsRequest& Request, const FDModelsUGCSearchContentsPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void PublicGetUserContentsV2(const FString& UserId, const FDModelsUGCContentPageResponseV2& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void PublicGetUserContent(const FString& UserId, const FDModelsUGCContentPagingResponse& OnSuccess, const FDErrorHandler& OnError, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void PublicGetContentByShareCodeV2(const FString& ShareCode, const FDModelsUGCContentResponseV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void PublicGetContentByShareCode(const FString& ShareCode, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void PublicGetContentByContentIdV2(const FString& ContentId, const FDModelsUGCContentResponseV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void PublicGetContentByContentId(const FString& ContentId, const FDModelsUGCContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void PublicGetContentBulkByIdsV2(const TArray<FString>& ContentIds, const FDModelsUGCBulkContentResponseV2& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void PublicGetContentBulk(const TArray<FString>& ContentIds, const FDModelsUGCBulkContentResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void ModifyContentByShareCode(const FString& UserId, const FString& ChannelId, const FString& ShareCode, const FAccelByteModelsUGCUpdateRequest& ModifyRequest, const FDModelsUGCServerResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteContentByShareCode(const FString& UserId, const FString& ChannelId, const FString& ShareCode, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
};

