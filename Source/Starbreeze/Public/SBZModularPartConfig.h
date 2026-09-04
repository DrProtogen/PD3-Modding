#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZModularPartConfig.generated.h"

class USBZModularPartDataAsset;

UCLASS(Blueprintable, MinimalAPI)
class USBZModularPartConfig : public UDataAsset {
    GENERATED_BODY()
public:
    USBZModularPartConfig();

    UFUNCTION(BlueprintCallable)
    void SetPart(const USBZModularPartDataAsset* PartAsset, int32 Index);
    
};

