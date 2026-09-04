#pragma once
#include "CoreMinimal.h"
#include "SBZMouseInteractionHoverChangedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSBZMouseInteractionHoverChanged, AActor*, Actor, bool, bIsHovered);

