#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "SBZHurtReactionData.h"
#include "SBZMeleeComponent.h"
#include "SBZPlayerMeleeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZPlayerMeleeComponent : public USBZMeleeComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHurtReactionData HeavyHurtReactionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FTimerHandle> EnemyTimerHandleMap;
    
public:
    USBZPlayerMeleeComponent(const FObjectInitializer& ObjectInitializer);

};

