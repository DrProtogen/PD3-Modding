#include "SBZWheeledVehicleMovementComponent.h"

USBZWheeledVehicleMovementComponent::USBZWheeledVehicleMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReverseAsBrake = false;
    this->bOverrideDriveTorque = false;
    this->OverriddenDriveTorque = 500.00f;
}


