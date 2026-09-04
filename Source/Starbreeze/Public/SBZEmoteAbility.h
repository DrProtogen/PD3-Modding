#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "SBZGameplayAbility.h"
#include "SBZEmoteAbility.generated.h"

class ASBZCharacter;
class ASBZPlayerCameraManager;
class ASBZPlayerController;
class ASBZPlayerEmoteCamera;
class UAbilitySystemComponent;
class UAnimMontage;
class USBZEmoteCallAsset;

UCLASS(Blueprintable)
class USBZEmoteAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisableBlendOutAbilities;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* AbilityCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCameraManager* PlayerCameraManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZEmoteCallAsset* CurrentEmoteCallAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerEmoteCamera* EmoteCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag MontageTag;
    
public:
    USBZEmoteAbility();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* PlayedMontage, bool bInterrupted, const int32 InstanceID);
    
};

