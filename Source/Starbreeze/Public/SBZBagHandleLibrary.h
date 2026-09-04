#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBagHandle.h"
#include "SBZBagHandleLibrary.generated.h"

UCLASS(Blueprintable)
class USBZBagHandleLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USBZBagHandleLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FSBZBagHandle& BagHandle);
    
};

