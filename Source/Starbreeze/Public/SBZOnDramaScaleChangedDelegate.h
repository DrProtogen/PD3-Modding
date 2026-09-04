#pragma once
#include "CoreMinimal.h"
#include "SBZOnDramaScaleChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnDramaScaleChanged, float, NewDramaScale);

