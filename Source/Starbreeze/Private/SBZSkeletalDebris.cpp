#include "SBZSkeletalDebris.h"
#include "UObject/NoExportTypes.h"

ASBZSkeletalDebris::ASBZSkeletalDebris(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->SkeletalMeshComponent = (USkeletalMeshComponent*)RootComponent;
}


