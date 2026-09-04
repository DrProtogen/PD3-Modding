#pragma once
#include "CoreMinimal.h"
#include "OnSpanGridItemClickedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpanGridItemClicked, UObject*, ClickedItem);

