#pragma once
#include "CoreMinimal.h"
#include "SBZMouseInteractionClickedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSBZMouseInteractionClicked, AActor*, Actor);

