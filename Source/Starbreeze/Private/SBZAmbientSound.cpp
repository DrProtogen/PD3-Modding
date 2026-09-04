#include "SBZAmbientSound.h"
#include "UObject/NoExportTypes.h"
#include "SBZAmbientSoundComponent.h"

ASBZAmbientSound::ASBZAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->ReactionEvent = NULL;
    this->bAllowReaction = false;
    this->MaxNormalizedReactionDistance = 0.00f;
    this->AllowedReactionIndex = 0;
    this->Cooldown = 0.00f;
    this->AmbientSoundComponent = CreateDefaultSubobject<USBZAmbientSoundComponent>(TEXT("SBZAmbientSoundComponent"));
    this->AmbientSoundComponent->SetupAttachment(RootComponent);
}

void ASBZAmbientSound::HandleStealthNoiseReaction(FVector Location) {
}

void ASBZAmbientSound::HandleDeactivateSoundComponent(UActorComponent* Component) {
}

void ASBZAmbientSound::HandleActivateSoundComponent(UActorComponent* Component, bool bReset) {
}


