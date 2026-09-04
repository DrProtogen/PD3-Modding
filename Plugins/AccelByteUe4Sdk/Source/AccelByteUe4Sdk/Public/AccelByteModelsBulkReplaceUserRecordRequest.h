#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBulkReplaceUserRecordRequestDetail.h"
#include "AccelByteModelsBulkReplaceUserRecordRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBulkReplaceUserRecordRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsBulkReplaceUserRecordRequestDetail> Data;
    
    FAccelByteModelsBulkReplaceUserRecordRequest();
};

