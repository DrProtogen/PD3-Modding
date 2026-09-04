#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZCharacterTraverseAbility.generated.h"

class USBZAbilitySystemComponent;
class USBZCharacterMovementComponent;

UCLASS(Blueprintable)
class USBZCharacterTraverseAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeTrajectoryOnActivationAttempt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActivateConsumingInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAbilitySystemComponent* AbilitySystem;
    
public:
    USBZCharacterTraverseAbility();

};

