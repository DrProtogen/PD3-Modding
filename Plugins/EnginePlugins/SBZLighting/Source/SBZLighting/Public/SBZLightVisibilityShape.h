#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZLightVisibilityShape.generated.h"

UCLASS(Abstract, Blueprintable)
class ASBZLightVisibilityShape : public AActor {
    GENERATED_BODY()
public:
    ASBZLightVisibilityShape(const FObjectInitializer& ObjectInitializer);

};

