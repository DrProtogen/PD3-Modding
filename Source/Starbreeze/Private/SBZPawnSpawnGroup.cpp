#include "SBZPawnSpawnGroup.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Texture2D.h"
#include "Components/BillboardComponent.h"

ASBZPawnSpawnGroup::ASBZPawnSpawnGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->Seed = -1;
    this->bShouldRandomizeSpawnPoints = false;
    this->SpawnGroupRoom = NULL;
#if WITH_EDITORONLY_DATA
    GoodSprite = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
    if (!IsRunningCommandlet())
    {
        static ConstructorHelpers::FObjectFinder<UTexture2D> SpriteTexture(TEXT("/Engine/EditorResources/S_Actor"));
        if (GoodSprite)
        {
            GoodSprite->SetSprite(SpriteTexture.Object);
            GoodSprite->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
            GoodSprite->bHiddenInGame = true;
            GoodSprite->SetupAttachment(RootComponent);
            GoodSprite->SetUsingAbsoluteScale(true);
            GoodSprite->bIsScreenSizeScaled = true;
        }
    }
#endif // WITH_EDITORONLY_DATA
}

void ASBZPawnSpawnGroup::OnPawnSpawnDestroyed(AActor* DestroyedActor) {
}


