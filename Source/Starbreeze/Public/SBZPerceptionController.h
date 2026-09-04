#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZPerceptionController.generated.h"

class USBZAIVisualDetectionComponent;

UCLASS(Blueprintable)
class ASBZPerceptionController : public AAIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZAIVisualDetectionComponent* VisualDetectionComponent;
    
public:
    ASBZPerceptionController(const FObjectInitializer& ObjectInitializer);

};

