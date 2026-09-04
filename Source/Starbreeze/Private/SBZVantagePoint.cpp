#include "SBZVantagePoint.h"
#include "UObject/NoExportTypes.h"

ASBZVantagePoint::ASBZVantagePoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void ASBZVantagePoint::OnOccupantKilled(APawn* Pawn) {
}


