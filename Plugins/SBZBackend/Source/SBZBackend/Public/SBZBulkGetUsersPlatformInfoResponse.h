#pragma once
#include "CoreMinimal.h"
#include "SBZUserPlatformInfoData.h"
#include "SBZBulkGetUsersPlatformInfoResponse.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBulkGetUsersPlatformInfoResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZUserPlatformInfoData> Data;
    
    FSBZBulkGetUsersPlatformInfoResponse();
};

