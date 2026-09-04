#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZBridgeBase.generated.h"

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZBridgeBase : public UObject {
    GENERATED_BODY()
public:
    USBZBridgeBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void Initialize(UObject* WorldContextObject);
    
};

