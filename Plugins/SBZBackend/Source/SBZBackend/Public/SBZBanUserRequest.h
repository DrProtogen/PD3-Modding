#pragma once
#include "CoreMinimal.h"
#include "ESBZBanReason.h"
#include "ESBZBanType.h"
#include "SBZBanUserRequest.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBanUserRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBanType BanType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBanReason Reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SkipNotif;
    
    FSBZBanUserRequest();
};

