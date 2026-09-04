#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSyncThirdPartyBlockListInfo.h"
#include "AccelByteModelsSyncThirdPartyBlockListRequest.generated.h"

USTRUCT(BlueprintType)
struct FAccelByteModelsSyncThirdPartyBlockListRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAccelByteModelsSyncThirdPartyBlockListInfo> BlockListSyncDetails;
    
    ACCELBYTEUE4SDK_API FAccelByteModelsSyncThirdPartyBlockListRequest();
};

