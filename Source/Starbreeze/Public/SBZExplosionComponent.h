#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayAbilitySpecHandle.h"
#include "PredictionKey.h"
#include "SBZExplosionParams.h"
#include "SBZExplosionResult.h"
#include "SBZExplosionReturnData.h"
#include "SBZExplosionTasks.h"
#include "SBZExplosive.h"
#include "SBZHurtReactionDataInterface.h"
#include "SBZPredictedExplosions.h"
#include "SBZExplosionComponent.generated.h"

class AActor;
class UGameplayAbility;
class USBZExplosiveData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZExplosionComponent : public UActorComponent, public ISBZExplosive, public ISBZHurtReactionDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayAbilitySpecHandle, FSBZExplosionTasks> ServerExplosionTaskMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayAbilitySpecHandle, FSBZPredictedExplosions> PredictedExplosionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZExplosionParams CurrentExplosionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentExplosionAvatarActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentExplosionInstigator;
    
public:
    USBZExplosionComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(Reliable, Server)
    void Server_ReceivePredictedExplosion(const FSBZExplosionResult& Result, const FPredictionKey& PredictionKey, const FGameplayAbilitySpecHandle& AbilitySpecHandle, uint8 ExplosionKey, const USBZExplosiveData* ExplosiveData);
    
    UFUNCTION(BlueprintCallable)
    void OnPredictingAbilityEnded(UGameplayAbility* Ability);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ReplicatePredictedExplosionWithData(const FSBZExplosionResult& Result, const USBZExplosiveData* ExplosiveData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ReplicateExplosionWithData(const FSBZExplosionResult& Result, const USBZExplosiveData* ExplosiveData);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitiateExplosion(FSBZExplosionReturnData& OutExplosionReturnData, const FSBZExplosionParams& ExplosiveParams);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZExplosiveData* GetExplosiveData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetExplosionLocation() const;
    

    // Fix for true pure virtual functions not being implemented
};

