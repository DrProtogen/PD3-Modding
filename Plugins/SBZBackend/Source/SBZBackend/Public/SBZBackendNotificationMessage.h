#pragma once
#include "CoreMinimal.h"
#include "SBZBackendNotificationMessage.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBackendNotificationMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Topic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Payload;
    
    FSBZBackendNotificationMessage();
};

