#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SBZMarkerInfoInterface.generated.h"

UINTERFACE(Blueprintable)
class USBZMarkerInfoInterface : public UInterface {
    GENERATED_BODY()
};

class ISBZMarkerInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetMarkerText();
    
};

