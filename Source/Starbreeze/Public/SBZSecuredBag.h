#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSecuredBag.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class ASBZSecuredBag : public AActor {
    GENERATED_BODY()
public:
    ASBZSecuredBag(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaced(bool bDoCosmetics);
    
};

