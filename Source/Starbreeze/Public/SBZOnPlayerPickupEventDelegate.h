#pragma once
#include "CoreMinimal.h"
#include "SBZPlayerPickupEvent.h"
#include "SBZOnPlayerPickupEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnPlayerPickupEvent, const FSBZPlayerPickupEvent&, PlayerPickupEventData);

