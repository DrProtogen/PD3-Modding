#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZLootedSignatureDelegate.h"
#include "SBZInstantLoot.generated.h"

class UAkAudioEvent;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZOutlineComponent;
class USBZPlayerPickupEventConfig;

UCLASS(Blueprintable)
class ASBZInstantLoot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZInteractableComponent* Interactable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZOutlineComponent* OutlineComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZLootedSignature OnLootedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDestroyOnLooted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OnLootedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZPlayerPickupEventConfig* PlayerPickupEventConfigData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsLooted;
    
public:
    ASBZInstantLoot(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInteractionEnabled(bool bIsEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsLooted(bool bOldIsLooted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLooted(bool bDoCosmetics);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePredictedEnd(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void HandleAckRejectedPredicted(USBZBaseInteractableComponent* InInteractable, USBZInteractorComponent* InInteractor, bool bInIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void HandleAckComplete(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bInIsLocallyControlled);
    
};

