#pragma once
#include "CoreMinimal.h"
#include "SBZOnPagerChangedDelegate.generated.h"

class ASBZAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSBZOnPagerChanged, ASBZAICharacter*, Character, bool, bIsEnabled, bool, bIsFailed);

