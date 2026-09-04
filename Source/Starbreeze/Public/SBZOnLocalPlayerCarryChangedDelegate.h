#pragma once
#include "CoreMinimal.h"
#include "SBZOnLocalPlayerCarryChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnLocalPlayerCarryChanged, bool, bIsCarrying, bool, bIsHumanShield);

