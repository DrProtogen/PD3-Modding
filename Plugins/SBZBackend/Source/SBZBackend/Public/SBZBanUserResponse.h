#pragma once
#include "CoreMinimal.h"
#include "SBZBanUserResponse.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZBanUserResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BanId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    FSBZBanUserResponse();
};

