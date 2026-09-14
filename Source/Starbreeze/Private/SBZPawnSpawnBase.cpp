#include "SBZPawnSpawnBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/ArrowComponent.h"
#include "Engine/Texture2D.h"
#include "Components/BillboardComponent.h"

ASBZPawnSpawnBase::ASBZPawnSpawnBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetLoadOnClient = false;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponentNew"));
    this->Seed = -1;
    this->bRandomizeSpawnTransformStartingIndex = true;
    this->NextSpawnDefinitionIndex = 0;
#if WITH_EDITORONLY_DATA
    GoodSprite = CreateEditorOnlyDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
    ArrowComponent = CreateEditorOnlyDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
    if (!IsRunningCommandlet())
    {
        static ConstructorHelpers::FObjectFinder<UTexture2D> SpriteTexture(TEXT("/Engine/EditorResources/S_Player"));
        if (GoodSprite)
        {
            GoodSprite->SetSprite(SpriteTexture.Object);
            GoodSprite->SetRelativeScale3D(FVector(0.5f, 0.5f, 0.5f));
            GoodSprite->bHiddenInGame = true;
            GoodSprite->SetupAttachment(RootComponent);
            GoodSprite->SetUsingAbsoluteScale(true);
            GoodSprite->bIsScreenSizeScaled = true;
        }
        if (ArrowComponent)
        {
            ArrowComponent->ArrowColor = FColor(150, 200, 255);

            ArrowComponent->ArrowSize = 1.0f;
            ArrowComponent->bTreatAsASprite = true;
            ArrowComponent->SetupAttachment(RootComponent);
            ArrowComponent->bIsScreenSizeScaled = true;
        }
    }
#endif // WITH_EDITORONLY_DATA
}

#if WITH_EDITORONLY_DATA
void ASBZPawnSpawnBase::PostEditMove(bool bFinished) {
    Super::PostEditMove(bFinished);

    if (bFinished)
    {
        OnApplyLevelTransform(GetActorTransform());
    }
}

void ASBZPawnSpawnBase::OnConstruction(const FTransform& Transform)
{
    Super::OnConstruction(Transform);

    OnApplyLevelTransform(Transform);
}
#endif

void ASBZPawnSpawnBase::OnApplyLevelTransform(const FTransform& InTransform) {
    // this is nowhere close to the original code but i dont care cause it works in editor lol
    bool bNeedsUpdate = false;

    if (!SpawnDefinitionArray.IsValidIndex(0))
    {
        bNeedsUpdate = true;
    }
    else if (!SpawnDefinitionArray[0].Transform.Equals(InTransform))
    {
        bNeedsUpdate = true;
    }

    if (bNeedsUpdate)
    {
        SpawnDefinitionArray.Empty();

        FSBZPawnSpawnDefinition NewSpawnDefinition;
        NewSpawnDefinition.Transform = InTransform;
        NewSpawnDefinition.NameType = FName("None");

        SpawnDefinitionArray.Add(NewSpawnDefinition);
    }

    FVector InPos = InTransform.GetLocation();

    if (!WeightedLocation.Equals(InPos))
    {
        WeightedLocation = InPos;
    }
}


