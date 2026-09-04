#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "SBZAutoAimInterface.h"
#include "SBZCodeViewerSet.h"
#include "SBZModuleActor.h"
#include "SBZOnCodeEnteredDelegate.h"
#include "SBZKeypadBase.generated.h"

class AActor;
class ASBZPlayerCharacter;
class UAkAudioEvent;
class UBoxComponent;
class UCapsuleComponent;
class UPrimitiveComponent;
class USBZBaseInteractableComponent;
class USBZInteractableComponent;
class USBZInteractorComponent;
class USBZRenderTargetWidgetComponent;
class USBZWeaponAimAssistDataAsset;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASBZKeypadBase : public ASBZModuleActor, public ISBZAutoAimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCodeEntered OnCodeCorrect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnCodeEntered OnCodeIncorrect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 GuessedCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 Inputs;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZInteractableComponent*> KeypadInteractableComponentArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BaseKeypadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZRenderTargetWidgetComponent* CodeWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* LanternCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZCodeViewerSet> PossibleCodeViewerSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncorrectCodeWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ButtonSoundEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizeOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, Replicated, meta=(AllowPrivateAccess=true))
    bool bHasRandomized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* AutoAimBoundsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZWeaponAimAssistDataAsset* AimAssistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> StickyAimArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FVector> ButtonNameLocationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerCharacter* OverlappingPlayer;
    
public:
    ASBZKeypadBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartRandomization();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInteractionEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsInteractable();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HasRandomized();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GuessedCode();
    
    UFUNCTION(BlueprintCallable)
    void OnLanternCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLanternCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnKeypadPressed(USBZBaseInteractableComponent* InteractableComp, USBZInteractorComponent* Interactor, bool bIsLocallyControlled);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusChanged(const USBZBaseInteractableComponent* InteractableComp, bool bInNewState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_StartRandomization();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_UpdateHighlights(const TArray<int32>& GeneratedCode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnKeypadPressed(const int32 KeyIndexPressed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnKeypadFocusChanged(const int32 KeyIndex, bool bInNewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnGuessedCodeChanged(const FText& GuessedCodeText);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_HandleLanternOverlapEnd(const TArray<AActor*>& PlayerAttachedActors);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_HandleLanternOverlapBegin(const TArray<AActor*>& PlayerAttachedActors, USkeletalMeshComponent* PlayerMesh, FName SocketToAttach, FTransform SpawnTransform);
    

    // Fix for true pure virtual functions not being implemented
};

