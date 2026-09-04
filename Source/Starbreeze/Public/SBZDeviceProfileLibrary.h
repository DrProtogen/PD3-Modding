#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZDeviceProfileOverrideMode.h"
#include "SBZDeviceProfileLibrary.generated.h"

UCLASS(Blueprintable)
class STARBREEZE_API USBZDeviceProfileLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZDeviceProfileLibrary();

    UFUNCTION(BlueprintCallable)
    static void RestoreDefaultDeviceProfile();
    
    UFUNCTION(BlueprintCallable)
    static void OverrideDeviceProfileForMode(ESBZDeviceProfileOverrideMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBaseDeviceProfileName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetActiveDeviceProfileName();
    
};

