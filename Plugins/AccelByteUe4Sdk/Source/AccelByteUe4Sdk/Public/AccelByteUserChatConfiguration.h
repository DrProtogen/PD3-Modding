#pragma once
#include "CoreMinimal.h"
#include "AccelByteUserChatConfiguration.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteUserChatConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ProfanityDisabled;
    
    FAccelByteUserChatConfiguration();
};

