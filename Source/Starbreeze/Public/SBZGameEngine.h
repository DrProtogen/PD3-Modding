#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZGameEngine.generated.h"

UCLASS(Blueprintable, NonTransient)
class USBZGameEngine : public UGameEngine {
    GENERATED_BODY()
public:
    USBZGameEngine();

private:
    UFUNCTION(BlueprintCallable)
    void OnResumingGamePopupClosed(FName ActionName);
    
};

