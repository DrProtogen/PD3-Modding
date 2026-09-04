#pragma once
#include "CoreMinimal.h"
#include "SBZGrenadeProjectile.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerM606GrenadeProjectile.generated.h"

class UGameplayEffect;

UCLASS(Abstract, Blueprintable)
class ASBZPlayerM606GrenadeProjectile : public ASBZGrenadeProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> M606SkillDamageGameplayEffectClass;
    
public:
    ASBZPlayerM606GrenadeProjectile(const FObjectInitializer& ObjectInitializer);

};

