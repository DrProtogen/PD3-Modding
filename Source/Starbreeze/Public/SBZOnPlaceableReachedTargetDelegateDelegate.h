#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "SBZOnPlaceableReachedTargetDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZOnPlaceableReachedTargetDelegate, const FHitResult&, HitResult);

