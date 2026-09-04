#pragma once
#include "CoreMinimal.h"
#include "SBZProgressMeterValueChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZProgressMeterValueChanged, float, Value);

