#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SBZHoldOutLibrary.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class USBZHoldOutLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZHoldOutLibrary();

    UFUNCTION(BlueprintCallable)
    static void AssignCharacterLocationsToParticle(UNiagaraComponent* Particle, const FName& ParameterName, const FVector& Location, float Radius, int32 MaxLocations);
    
};

