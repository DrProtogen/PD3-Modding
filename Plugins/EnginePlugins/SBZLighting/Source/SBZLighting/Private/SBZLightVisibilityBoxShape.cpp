#include "SBZLightVisibilityBoxShape.h"
#include "UObject/NoExportTypes.h"

ASBZLightVisibilityBoxShape::ASBZLightVisibilityBoxShape(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
}


