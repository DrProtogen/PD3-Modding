#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZChromaSensaLibrary.generated.h"

class USBZChromaSensaEffectDataAsset;

UCLASS(Blueprintable)
class USBZChromaSensaLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZChromaSensaLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopChromaSensaEffect(const USBZChromaSensaEffectDataAsset* Effect);
    
    UFUNCTION(BlueprintCallable)
    static void SetChromaIdleEffect(const USBZChromaSensaEffectDataAsset* Effect);
    
    UFUNCTION(BlueprintCallable)
    static void PlayChromaSensaEffect(const USBZChromaSensaEffectDataAsset* Effect);
    
    UFUNCTION(BlueprintCallable)
    static void EnableChromaSensa(bool bEnable);
    
};

