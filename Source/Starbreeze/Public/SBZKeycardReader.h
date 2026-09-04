#pragma once
#include "CoreMinimal.h"
#include "SBZAutoAimInterface.h"
#include "SBZModuleActor.h"
#include "SBZKeycardReader.generated.h"

class UBoxComponent;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZOutlineComponent;
class USBZWeaponAimAssistDataAsset;

UCLASS(Blueprintable)
class ASBZKeycardReader : public ASBZModuleActor, public ISBZAutoAimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* InteractableComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AutoAimBoundsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponAimAssistDataAsset* AimAssistData;
    
public:
    ASBZKeycardReader(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionStateChanged(const USBZBaseInteractableComponent* Interactable, bool bInNewState);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionComplete(USBZBaseInteractableComponent* Interactable, USBZInteractorComponent* Interactor, bool bIsLocallyControlled);
    

    // Fix for true pure virtual functions not being implemented
};

