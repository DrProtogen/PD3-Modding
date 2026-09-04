#pragma once
#include "CoreMinimal.h"
#include "SBZExplosionTasks.generated.h"

class USBZAbilityTask_Explosion;

USTRUCT(BlueprintType)
struct FSBZExplosionTasks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USBZAbilityTask_Explosion*> Array;
    
    STARBREEZE_API FSBZExplosionTasks();
};

