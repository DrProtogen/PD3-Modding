#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZDebugCameraController.generated.h"

class AActor;

UCLASS(Blueprintable, Config=Engine)
class ASBZDebugCameraController : public ADebugCameraController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedScaleAdjustment;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedScale;
    
public:
    ASBZDebugCameraController(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOriginalControllerDestroyed(AActor* DestroyedActor);
    
};

