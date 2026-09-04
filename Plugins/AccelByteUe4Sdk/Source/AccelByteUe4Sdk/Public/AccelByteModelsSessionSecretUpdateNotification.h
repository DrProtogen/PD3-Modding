#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsSessionSecretUpdateNotification.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSessionSecretUpdateNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Secret;
    
    FAccelByteModelsSessionSecretUpdateNotification();
};

