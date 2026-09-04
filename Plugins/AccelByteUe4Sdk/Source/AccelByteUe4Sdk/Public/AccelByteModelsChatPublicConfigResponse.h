#pragma once
#include "CoreMinimal.h"
#include "AccelByteModelsChatPublicConfigResponse.generated.h"

USTRUCT(BlueprintType)
struct ACCELBYTEUE4SDK_API FAccelByteModelsChatPublicConfigResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChatRateLimitBurst;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ChatRateLimitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneralRateLimitBurst;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 GeneralRateLimitDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxChatMessageLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpamChatBurst;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SpamChatDuration;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SpamMuteDuration;
    
    FAccelByteModelsChatPublicConfigResponse();
};

