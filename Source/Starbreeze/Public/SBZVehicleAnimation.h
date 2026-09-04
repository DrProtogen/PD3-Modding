#pragma once
#include "CoreMinimal.h"
#include "VehicleAnimationInstance.h"
#include "SBZVehicleAnimation.generated.h"

class USBZBuiltInAnimMontage;
class USBZBuiltInAnimMontagesHandler;

UCLASS(Blueprintable, NonTransient)
class USBZVehicleAnimation : public UVehicleAnimationInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZBuiltInAnimMontagesHandler* BuiltInAnimMontagesHandler;
    
public:
    USBZVehicleAnimation();

    UFUNCTION(BlueprintCallable)
    void StopBuiltInAnimMontage(const USBZBuiltInAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    float PlayBuiltInAnimMontage(const USBZBuiltInAnimMontage* AnimMontage);
    
};

