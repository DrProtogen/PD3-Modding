#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZHUDBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ASBZHUDBase : public AHUD {
    GENERATED_BODY()
public:
    ASBZHUDBase(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void DelayedHudInitizalize();
    
};

