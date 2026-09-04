#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsBlockUserRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsBlockUserRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BlockedUserId;
    
    FAccelByteModelsBlockUserRequest();
};

