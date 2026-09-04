#include "SBZStaticMeshHandheldEquippable.h"
#include "UObject/NoExportTypes.h"

ASBZStaticMeshHandheldEquippable::ASBZStaticMeshHandheldEquippable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UStaticMeshComponent>(TEXT("Mesh"))) {
    this->Mesh = (UMeshComponent*)RootComponent;
}

UStaticMeshComponent* ASBZStaticMeshHandheldEquippable::GetStaticMeshComponent() {
    return NULL;
}


