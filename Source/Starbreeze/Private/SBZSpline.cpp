#include "SBZSpline.h"
#include "SBZSplineComponent.h"

ASBZSpline::ASBZSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USBZSplineComponent>(TEXT("SBZSplineComponent"));
    this->SplineComponent = (USBZSplineComponent*)RootComponent;
}

TArray<ASBZSpline*> ASBZSpline::GetOutputSplines() const {
    return SplineComponent ? SplineComponent->OutputSplineActors : TArray<ASBZSpline*>();
}

TArray<ASBZSpline*> ASBZSpline::GetInputSplines() const {
    return SplineComponent ? SplineComponent->InputSplineActors : TArray<ASBZSpline*>();
}


