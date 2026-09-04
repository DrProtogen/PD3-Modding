#include "SBZPlaceableWeaponBagItem.h"
#include "Net/UnrealNetwork.h"

ASBZPlaceableWeaponBagItem::ASBZPlaceableWeaponBagItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(3);
}

void ASBZPlaceableWeaponBagItem::OnRep_ReplicatedMarkerInfo() {
}

void ASBZPlaceableWeaponBagItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASBZPlaceableWeaponBagItem, ReplicatedMarkerInfo);
}


