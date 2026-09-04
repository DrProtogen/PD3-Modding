#pragma once
#include "CoreMinimal.h"
#include "ESBZExplosionEventType.h"
#include "SBZExplosionResult.h"
#include "SBZExplosionReturnData.h"
#include "SBZExplosionTaskEventData.generated.h"

class USBZAbilityTask_Explosion;

USTRUCT(BlueprintType)
struct FSBZExplosionTaskEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZExplosionEventType EventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZAbilityTask_Explosion* ExplosionTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZExplosionResult RejectableClientResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZExplosionReturnData SuccessReturnData;
    
    STARBREEZE_API FSBZExplosionTaskEventData();
};

