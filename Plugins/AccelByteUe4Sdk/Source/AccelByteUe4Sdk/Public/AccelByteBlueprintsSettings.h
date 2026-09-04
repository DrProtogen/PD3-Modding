#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AccelByteBlueprintsSettings.generated.h"

UCLASS(Blueprintable)
class ACCELBYTEUE4SDK_API UAccelByteBlueprintsSettings : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAccelByteBlueprintsSettings();

    UFUNCTION(BlueprintCallable)
    static FString GetSettingsEnvironment();
    
    UFUNCTION(BlueprintCallable)
    static FString GetNamespace();
    
};

