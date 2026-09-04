#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZPlayerEmoteCamera.generated.h"

class APlayerController;
class UCameraComponent;
class USBZSpringArmComponent;

UCLASS(Blueprintable)
class ASBZPlayerEmoteCamera : public ASpectatorPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZSpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* CurrentPlayerController;
    
public:
    ASBZPlayerEmoteCamera(const FObjectInitializer& ObjectInitializer);

};

