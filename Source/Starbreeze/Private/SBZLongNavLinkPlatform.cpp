#include "SBZLongNavLinkPlatform.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"

ASBZLongNavLinkPlatform::ASBZLongNavLinkPlatform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->NavModifierComponent = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifierComponent"));
}


