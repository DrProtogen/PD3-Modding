#pragma once
#include "CoreMinimal.h"
#include "SBZOnHostageFollowStateChangedDelegate.generated.h"

class ASBZAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnHostageFollowStateChanged, ASBZAICharacter*, Character, bool, bIsFollowing);

