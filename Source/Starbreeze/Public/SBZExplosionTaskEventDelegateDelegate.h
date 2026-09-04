#pragma once
#include "CoreMinimal.h"
#include "SBZExplosionTaskEventData.h"
#include "SBZExplosionTaskEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZExplosionTaskEventDelegate, const FSBZExplosionTaskEventData&, ExplosionEventData);

