#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZEquippableCharmAnimation.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class USBZEquippableCharmAnimation : public UAnimInstance {
    GENERATED_BODY()
public:
    USBZEquippableCharmAnimation();

};

