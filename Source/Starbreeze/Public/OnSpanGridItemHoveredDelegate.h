#pragma once
#include "CoreMinimal.h"
#include "OnSpanGridItemHoveredDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSpanGridItemHovered, UObject*, HoveredItem, bool, bIsHovered);

