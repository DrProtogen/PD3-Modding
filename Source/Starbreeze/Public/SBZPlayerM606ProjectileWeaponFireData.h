#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerProjectileWeaponFireData.h"
#include "Templates/SubclassOf.h"
#include "SBZPlayerM606ProjectileWeaponFireData.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class STARBREEZE_API USBZPlayerM606ProjectileWeaponFireData : public USBZPlayerProjectileWeaponFireData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> M606WhiteEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> M606WhiteEffectValueMap;
    
    USBZPlayerM606ProjectileWeaponFireData();

};

