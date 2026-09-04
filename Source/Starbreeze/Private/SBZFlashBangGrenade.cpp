#include "SBZFlashBangGrenade.h"
#include "UObject/NoExportTypes.h"

ASBZFlashBangGrenade::ASBZFlashBangGrenade(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCapsuleComponent>(TEXT("CollisionCapsule"))) {
    this->Tags.AddDefaulted(1);
    this->CapsuleCollision = (UCapsuleComponent*)RootComponent;
}


