#pragma once
#include "CoreMinimal.h"
#include "ESBZCreditUserWalletSource.h"
#include "ESBZWalletTable.h"
#include "SBZCreditUserWalletRequest.generated.h"

USTRUCT(BlueprintType)
struct SBZBACKEND_API FSBZCreditUserWalletRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZCreditUserWalletSource Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZWalletTable Origin;
    
    FSBZCreditUserWalletRequest();
};

