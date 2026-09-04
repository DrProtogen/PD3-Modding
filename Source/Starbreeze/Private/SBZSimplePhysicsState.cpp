#include "SBZSimplePhysicsState.h"

FSBZSimplePhysicsState::FSBZSimplePhysicsState() {
    this->bEnsurePos = false;
    this->LastPos = FVector::ZeroVector;
    this->LastRot = FQuat::Identity;
}

