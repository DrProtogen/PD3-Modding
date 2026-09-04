#pragma once
#include "CoreMinimal.h"
#include "AccelByteUserChatConfiguration.h"
#include "AccelByteModelsSetUserChatConfigurationRequest.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsSetUserChatConfigurationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAccelByteUserChatConfiguration Config;
    
    FAccelByteModelsSetUserChatConfigurationRequest();
};

