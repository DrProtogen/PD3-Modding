#include "SBZSecuredBag.h"
#include "UObject/NoExportTypes.h"

ASBZSecuredBag::ASBZSecuredBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}



