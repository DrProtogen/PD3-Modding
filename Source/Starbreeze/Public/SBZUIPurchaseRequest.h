#pragma once
#include "CoreMinimal.h"
#include "ESBZUIPurchaseDisallowReason.h"
#include "SBZStoreItemUIData.h"
#include "SBZUIPurchaseFlowConfig.h"
#include "SBZUIPurchaseRequest.generated.h"

USTRUCT(BlueprintType)
struct FSBZUIPurchaseRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZStoreItemUIData StoreItemUIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZUIPurchaseFlowConfig Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZUIPurchaseDisallowReason DisallowReason;
    
    STARBREEZE_API FSBZUIPurchaseRequest();
};

