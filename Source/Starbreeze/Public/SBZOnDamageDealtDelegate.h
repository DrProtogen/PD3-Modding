#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZDamageType.h"
#include "SBZOnDamageDealtDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FSBZOnDamageDealt, float, DamageAmount, ESBZDamageType, DamageType, AActor*, Victim, const TArray<FVector>&, HitLocations);

