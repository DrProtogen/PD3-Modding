#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AccelByteModelsBulkGetPlayerRecordSizeRequest.h"
#include "AccelByteModelsBulkReplaceUserRecordRequest.h"
#include "DErrorHandlerDelegate.h"
#include "DHandlerDelegate.h"
#include "DModelsAdminGameRecordDelegate.h"
#include "DModelsAdminGetUserRecordsDelegate.h"
#include "DModelsAdminUserRecordDelegate.h"
#include "DModelsBulkReplaceUserRecordResponsesDelegate.h"
#include "DModelsGameRecordDelegate.h"
#include "DModelsPaginatedBulkGetPlayerRecordSizeResponseDelegate.h"
#include "DModelsPaginatedGetAdminUserRecordKeysResponseDelegate.h"
#include "DModelsPaginatedRecordsKeyDelegate.h"
#include "DModelsUserRecordDelegate.h"
#include "DModelsUserRecordsDelegate.h"
#include "ABServerCloudsave.generated.h"

UCLASS(Blueprintable)
class UABServerCloudsave : public UObject {
    GENERATED_BODY()
public:
    UABServerCloudsave();

    UFUNCTION(BlueprintCallable)
    void RetrieveGameRecordsKey(const FDModelsPaginatedRecordsKey& OnSuccess, const FDErrorHandler& OnError, const FString& Query, int32 Limit, int32 Offset);
    
    UFUNCTION(BlueprintCallable)
    void QueryAdminUserRecordsByKey(const FString& Key, const FString& UserId, const FDModelsAdminUserRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void QueryAdminUserRecordKeys(const FString& UserId, int32 Limit, int32 Offset, const FDModelsPaginatedGetAdminUserRecordKeysResponse& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void QueryAdminGameRecordsByKey(const FString& Key, const FDModelsAdminGameRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void QueryAdminGameRecordKeys(int32 Limit, int32 Offset, const FDModelsPaginatedRecordsKey& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetUserRecord(const FString& Key, const FString& UserId, const FDModelsUserRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetPublicUserRecord(const FString& Key, const FString& UserId, const FDModelsUserRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void GetGameRecord(const FString& Key, const FDModelsGameRecord& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteUserRecord(const FString& Key, const FString& UserId, bool bIsPublic, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteGameRecordTTLConfig(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteGameRecord(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAdminUserRecord(const FString& Key, const FString& UserId, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAdminGameRecordTTLConfig(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAdminGameRecord(const FString& Key, const FDHandler& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkReplaceUserRecord(const FString& Key, const FAccelByteModelsBulkReplaceUserRecordRequest& Request, const FDModelsBulkReplaceUserRecordResponses& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetUserRecordsByKeys(const FString& UserId, const TArray<FString>& Keys, const FDModelsAdminGetUserRecords& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetUserRecord(const FString& Key, const TArray<FString>& UserIds, const FDModelsUserRecords& OnSuccess, const FDErrorHandler& OnError);
    
    UFUNCTION(BlueprintCallable)
    void BulkGetPlayerRecordSize(const FAccelByteModelsBulkGetPlayerRecordSizeRequest& GetPlayerRecordSizeRequest, const FDModelsPaginatedBulkGetPlayerRecordSizeResponse& OnSuccess, const FDErrorHandler& OnError);
    
};

