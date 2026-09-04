#include "SBZPlayerM606GasGrenadeProjectile.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"
#include "SBZGasVolumeComponent.h"

ASBZPlayerM606GasGrenadeProjectile::ASBZPlayerM606GasGrenadeProjectile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->GasCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->GasComponent = CreateDefaultSubobject<USBZGasVolumeComponent>(TEXT("SBZGasVolumeComponent"));
    this->GasDetonationEffect = NULL;
    this->UpdateRemainingLifeTimeInterval = 0.25f;
    this->NiagaraParticleUpdateInterval = 0.50f;
    this->UpdateOverlapsInterval = 0.25f;
}

void ASBZPlayerM606GasGrenadeProjectile::OnRep_GasExplosionData() {
}

void ASBZPlayerM606GasGrenadeProjectile::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ASBZPlayerM606GasGrenadeProjectile::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bIsSweep, const FHitResult& SweepHitResult) {
}

void ASBZPlayerM606GasGrenadeProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlayerM606GasGrenadeProjectile, GasExplosionRepData);
}


