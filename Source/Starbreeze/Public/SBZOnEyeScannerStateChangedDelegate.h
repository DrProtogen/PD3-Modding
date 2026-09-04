#pragma once
#include "CoreMinimal.h"
#include "ESBZEyeScannerState.h"
#include "SBZOnEyeScannerStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZOnEyeScannerStateChanged, ESBZEyeScannerState, Oldstate, ESBZEyeScannerState, NewState);

