#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "SBZFlashbangEffect.generated.h"

class UTargetTagsGameplayEffectComponent;

UCLASS(Blueprintable)
class USBZFlashbangEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTargetTagsGameplayEffectComponent* TagsComponent;
    
public:
    USBZFlashbangEffect();

};

