#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZFeatureToggleLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class STARBREEZE_API USBZFeatureToggleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZFeatureToggleLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetFeatureToggleValue(const UObject* WorldContextObject, const FString& FeatureName);
    
};

