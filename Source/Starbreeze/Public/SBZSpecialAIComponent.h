#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSpecialAIComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USBZSpecialAIComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USBZSpecialAIComponent(const FObjectInitializer& ObjectInitializer);

};

