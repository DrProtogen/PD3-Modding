#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "SBZExplosionParams.h"
#include "SBZExplosionTaskEventDelegateDelegate.h"
#include "SBZAbilityTask_Explosion.generated.h"

class UGameplayAbility;
class USBZAbilityTask_Explosion;
class USBZExplosionComponent;

UCLASS(Blueprintable)
class USBZAbilityTask_Explosion : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZExplosionTaskEventDelegate OnServerEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZExplosionComponent* ExplosionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZExplosionParams ExplosionParams;
    
public:
    USBZAbilityTask_Explosion();

    UFUNCTION(BlueprintCallable)
    void RejectExplosion();
    
    UFUNCTION(BlueprintCallable)
    static USBZAbilityTask_Explosion* CreateExplosionTask(UGameplayAbility* OwningAbility, const FSBZExplosionParams& NewExplosionParams, uint8 ExplosionKey, bool bIsServerOnly);
    
};

