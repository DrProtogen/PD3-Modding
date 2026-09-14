#include "SBZSplineComponent.h"

USBZSplineComponent::USBZSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bYawControlEnabled = false;
    this->bReverse = false;
    this->SplineType = ESBZSplineType::Forward;
    this->ReparamStepsPerSegment = 50;
    this->UpdateSpline();
}

void USBZSplineComponent::PostLoad()
{
    Super::PostLoad();
    if (bReverse)
    {
        this->SplineType = ESBZSplineType::Reverse;
    }
}