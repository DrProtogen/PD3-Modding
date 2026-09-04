#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBZAIAttractorInterface.h"
#include "SBZAgilityObstacleInterface.h"
#include "SBZBreakableInterface.h"
#include "SBZPropDamageContext.h"
#include "SBZTraversalDestructibleInterface.h"
#include "SBZAIAttractorDestruction.generated.h"

class APawn;
class UActorComponent;
class USBZAIAttractorComponent;
class USBZPropDamageComponent;

UCLASS(Blueprintable)
class ASBZAIAttractorDestruction : public AActor, public ISBZAIAttractorInterface, public IAISightTargetInterface, public ISBZAgilityObstacleInterface, public ISBZBreakableInterface, public ISBZTraversalDestructibleInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZPropDamageComponent* PropDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIAttractorComponent* AttractorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAirNavOnDestruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBreakableByPlayerVaulting;
    
public:
    ASBZAIAttractorDestruction(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPropDamageHits(UActorComponent* PoolComponent, int32 Hits, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext);
    
    UFUNCTION(BlueprintCallable)
    void OnPropDamageHealth(UActorComponent* PoolComponent, float Health, bool bDoCosmetics, const FSBZPropDamageContext& DamageContext);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_BreakDestructionAttractor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void BreakDestructionAttractor();
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetEnabled(bool bEnabled) override PURE_VIRTUAL(SetEnabled, return false;);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAttractorInstigator(APawn* NewInstigator) override PURE_VIRTUAL(SetAttractorInstigator,);
    
};

