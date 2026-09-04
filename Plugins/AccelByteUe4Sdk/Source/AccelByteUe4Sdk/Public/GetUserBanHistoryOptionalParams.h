#pragma once
#include "CoreMinimal.h"
#include "GetUserBanHistoryOptionalParams.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FGetUserBanHistoryOptionalParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveOnly;
    
    FGetUserBanHistoryOptionalParams();
};

