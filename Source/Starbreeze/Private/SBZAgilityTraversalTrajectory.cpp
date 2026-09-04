#include "SBZAgilityTraversalTrajectory.h"

FSBZAgilityTraversalTrajectory::FSBZAgilityTraversalTrajectory() {
    this->AgilityType = ESBZAgilityTraversalType::VaultLowSlow;
    this->bEndsFalling = false;
    this->bEndsInCrouchState = false;
    this->bIsValid = false;
    this->WallImpactNormal = FVector::ZeroVector;
    this->WallImpactLocation = FVector::ZeroVector;
}

