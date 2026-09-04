#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Engine/NetSerialization.h"
#include "SBZFragGrenade.h"
#include "SBZGasDamageInterface.h"
#include "SBZGasExplosionData.h"
#include "SBZGasVolumeTarget.h"
#include "SBZGasGrenade.generated.h"

class AActor;
class UPrimitiveComponent;
class USBZGasVolumeComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class ASBZGasGrenade : public ASBZFragGrenade, public ISBZGasDamageInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NiagaraParticleUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateOverlapsInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateRemainingLifeTimeInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RootCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* GasCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZGasVolumeComponent* GasComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSBZGasExplosionData GasExplosionRepData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZGasVolumeTarget> TargetArray;
    
public:
    ASBZGasGrenade(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_GasExplosionData();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bIsSweep, const FHitResult& SweepHitResult);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_ReplicateExplosionLocation(const FVector_NetQuantize& Location);
    

    // Fix for true pure virtual functions not being implemented
};

