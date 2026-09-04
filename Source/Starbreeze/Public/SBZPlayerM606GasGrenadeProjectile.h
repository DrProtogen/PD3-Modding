#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "SBZGasDamageInterface.h"
#include "SBZGasExplosionData.h"
#include "SBZGasVolumeTarget.h"
#include "SBZPlayerM606GrenadeProjectile.h"
#include "SBZPlayerM606GasGrenadeProjectile.generated.h"

class AActor;
class UNiagaraComponent;
class UPrimitiveComponent;
class USBZGasVolumeComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class ASBZPlayerM606GasGrenadeProjectile : public ASBZPlayerM606GrenadeProjectile, public ISBZGasDamageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* GasCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZGasVolumeComponent* GasComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSBZGasExplosionData GasExplosionRepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZGasVolumeTarget> TargetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* GasDetonationEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRemainingLifeTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NiagaraParticleUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateOverlapsInterval;
    
public:
    ASBZPlayerM606GasGrenadeProjectile(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GasExplosionData();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bIsSweep, const FHitResult& SweepHitResult);
    

    // Fix for true pure virtual functions not being implemented
};

