#include "SBZAIShieldCoverAttachPoint.h"
#include "UObject/NoExportTypes.h"

ASBZAIShieldCoverAttachPoint::ASBZAIShieldCoverAttachPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Occupier = NULL;
}


