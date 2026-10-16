#pragma once

#include "CoreMinimal.h"
#include "Wwise/CookedData/WwiseLocalizedEventCookedData.h"
#include "Wwise/CookedData/WwiseLocalizedAuxBusCookedData.h"
#include "Wwise/CookedData/WwiseInitBankCookedData.h"
#include "Wwise/CookedData/WwiseGameParameterCookedData.h"
#include "Wwise/CookedData/WwiseGroupValueCookedData.h"
#include "PD3WwiseRetailData.generated.h"

/** Decoded retail data persisted in editor packages. Never emitted into cooked property data. */
USTRUCT()
struct FPD3WwiseRetailData
{
	GENERATED_BODY()

	UPROPERTY() FString SourceObjectPath;
	UPROPERTY() FString Identity;
	UPROPERTY() FWwiseLocalizedEventCookedData Event;
	UPROPERTY() FWwiseLocalizedAuxBusCookedData AuxBus;
	UPROPERTY() FWwiseInitBankCookedData InitBank;
	UPROPERTY() FWwiseGameParameterCookedData GameParameter;
	UPROPERTY() FWwiseGroupValueCookedData GroupValue;
	UPROPERTY() float MaximumDuration = 0;
	UPROPERTY() float MinimumDuration = 0;
	UPROPERTY() bool IsInfinite = false;
	UPROPERTY() float MaxAttenuationRadius = 0;
};
