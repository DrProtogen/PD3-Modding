#include "SBZMinimalAgilityTraversalTrajectory.h"

FSBZMinimalAgilityTraversalTrajectory::FSBZMinimalAgilityTraversalTrajectory() {
    this->EntrySpeed = 0;
    this->AgilityType = ESBZAgilityTraversalType::VaultLowSlow;
    this->bEndsInCrouchState = false;
    this->bEndsFalling = false;
    this->JumpPointLocation = FVector::ZeroVector;
    this->EdgePointFrontLocation = FVector::ZeroVector;
    this->EdgePointBackLocation = FVector::ZeroVector;
    this->LandPointLocation = FVector::ZeroVector;
}

