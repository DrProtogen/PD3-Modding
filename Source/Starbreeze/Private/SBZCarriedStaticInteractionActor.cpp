#include "SBZCarriedStaticInteractionActor.h"
#include "SBZOutlineComponent.h"

ASBZCarriedStaticInteractionActor::ASBZCarriedStaticInteractionActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetachOutlineAsset = NULL;
    this->OutlineComponent = CreateDefaultSubobject<USBZOutlineComponent>(TEXT("SBZOutlineComponent"));
    this->AttachedAIParent = NULL;
    this->bIsSingleUse = true;
}


