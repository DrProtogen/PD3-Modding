#pragma once
#include "CoreMinimal.h"
#include "DelegateULowEntryExtendedStandardLibraryCompareObjectsDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FDelegateULowEntryExtendedStandardLibraryCompareObjects, UObject*, ObjectA, UObject*, ObjectB, bool&, Result);

