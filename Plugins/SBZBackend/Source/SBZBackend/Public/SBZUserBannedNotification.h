#pragma once
#include "CoreMinimal.h"
#include "ESBZBanReason.h"
#include "SBZUserBannedNotification.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZUserBannedNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBanReason Reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndDate;
    
    FSBZUserBannedNotification();
};

