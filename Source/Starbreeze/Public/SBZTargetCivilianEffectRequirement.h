#pragma once
#include "CoreMinimal.h"
#include "GameplayEffectCustomApplicationRequirement.h"
#include "ESBZTargetCivilianEffectRequirement.h"
#include "SBZTargetCivilianEffectRequirement.generated.h"

UCLASS(Abstract, Blueprintable)
class USBZTargetCivilianEffectRequirement : public UGameplayEffectCustomApplicationRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZTargetCivilianEffectRequirement Requirement;
    
    USBZTargetCivilianEffectRequirement();

};

