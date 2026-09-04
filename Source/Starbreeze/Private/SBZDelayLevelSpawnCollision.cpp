#include "SBZDelayLevelSpawnCollision.h"
#include "UObject/NoExportTypes.h"
#include "Net/UnrealNetwork.h"

ASBZDelayLevelSpawnCollision::ASBZDelayLevelSpawnCollision(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->AutoDestroyDuration = 60.00f;
}

void ASBZDelayLevelSpawnCollision::OnRep_ReplicatedActorArray() {
}

void ASBZDelayLevelSpawnCollision::Multicast_EnableCollisions_Implementation(const TArray<AActor*>& InArray) {
}

void ASBZDelayLevelSpawnCollision::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZDelayLevelSpawnCollision, ReplicatedActorArray);
}


