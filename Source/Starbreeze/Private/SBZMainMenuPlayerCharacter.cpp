#include "SBZMainMenuPlayerCharacter.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBZModularCharacterComponent.h"

ASBZMainMenuPlayerCharacter::ASBZMainMenuPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->Mesh = CreateDefaultSubobject<USBZModularCharacterComponent>(TEXT("UIPlayerCharacterMesh"));
    this->NameplateWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("NameplateWidget"));
    this->Equippable = NULL;
    this->MaskEquipped = NULL;
    this->PlayerCharacterData = NULL;
    this->StartMontageName = ESBZMainMenuAnimationName::IdleSequence;
    this->PreferredEquippableIndex = 0;
    this->RandomSeed = -1;
    this->Mesh->SetupAttachment(RootComponent);
    this->NameplateWidgetComponent->SetupAttachment(Mesh);
}

void ASBZMainMenuPlayerCharacter::OnChunkInstall(bool bIsGameInstallPending) {
}

void ASBZMainMenuPlayerCharacter::DestroyEquippable() {
}

void ASBZMainMenuPlayerCharacter::BP_SetPlayerLoadoutForMultiplayerMannequin(int32 LoadoutIndex, int32 WeaponDisplayIndex) {
}

void ASBZMainMenuPlayerCharacter::BP_ApplyIngameLoadout() {
}


