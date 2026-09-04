#pragma once
#include "CoreMinimal.h"
#include "SBZOnHostageReleasedDelegate.generated.h"

class ASBZAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnHostageReleased, ASBZAICharacter*, Character);

