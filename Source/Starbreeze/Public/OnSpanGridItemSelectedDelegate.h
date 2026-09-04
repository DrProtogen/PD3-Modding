#pragma once
#include "CoreMinimal.h"
#include "OnSpanGridItemSelectedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpanGridItemSelected, UObject*, SelectedItem);

