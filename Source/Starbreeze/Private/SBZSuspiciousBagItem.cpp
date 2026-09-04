#include "SBZSuspiciousBagItem.h"

ASBZSuspiciousBagItem::ASBZSuspiciousBagItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(3);
    this->bIsDespawnedInLoud = true;
}


