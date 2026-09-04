#pragma once
#include "CoreMinimal.h"
#include "SBZButtonControlReference.h"
#include "Templates/SubclassOf.h"
#include "SBZUIPurchaseFlowConfig.generated.h"

class USBZUIPurchaseFlowPopupBody;

USTRUCT(BlueprintType)
struct FSBZUIPurchaseFlowConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZUIPurchaseFlowPopupBody> BodyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HeaderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference AcceptAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZButtonControlReference CancelAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZButtonControlReference> SuccessActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZButtonControlReference> FailActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResultDisplayDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InProgressTimeoutSeconds;
    
    STARBREEZE_API FSBZUIPurchaseFlowConfig();
};

