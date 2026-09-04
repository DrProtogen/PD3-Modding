#pragma once
#include "CoreMinimal.h"
#include "SBZOnPlayerMaskOnChangedDelegate.generated.h"

class ASBZPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnPlayerMaskOnChanged, const ASBZPlayerCharacter*, PlayerCharacter, bool, bIsMaskOn);

