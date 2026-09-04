#include "SBZDebris.h"
#include "UObject/NoExportTypes.h"

ASBZDebris::ASBZDebris(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent0"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
}


