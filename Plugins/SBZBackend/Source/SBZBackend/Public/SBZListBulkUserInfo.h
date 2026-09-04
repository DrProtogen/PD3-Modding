#pragma once
#include "CoreMinimal.h"
#include "SBZUserInfo.h"
#include "SBZListBulkUserInfo.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZListBulkUserInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZUserInfo> Data;
    
    FSBZListBulkUserInfo();
};

