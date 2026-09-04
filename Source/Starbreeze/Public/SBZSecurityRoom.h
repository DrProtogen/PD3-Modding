#pragma once
#include "CoreMinimal.h"
#include "ESBZLifeActionStopReason.h"
#include "SBZPawnSpawnPredefined.h"
#include "SBZViewTargetCollectionInterface.h"
#include "SBZSecurityRoom.generated.h"

class AActor;
class ASBZCharacter;
class ASBZSecurityCamera;
class UAnimMontage;
class USBZAIActionData_LifeAction;
class USBZAIAction_SecurityRoom;
class USBZDialogDataAsset;
class USBZLifeActionInstance;
class USBZLifeActionSlot;
class UWorld;

UCLASS(Blueprintable)
class ASBZSecurityRoom : public ASBZPawnSpawnPredefined, public ISBZViewTargetCollectionInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayCameraStatusVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnlyOnGuardDeathOrHumanShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* ShadeCameraDownVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogDataAsset* ShadeCameraUpVO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ASBZSecurityCamera*> SecurityCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASBZPawnSpawnPredefined* GuardRoomSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FocusActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAIOrderEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsValidHeistState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZAIAction_SecurityRoom* ActionOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIActionData_LifeAction* AFKLifeActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZAIActionData_LifeAction* AFKDoneLifeActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLifeActionSlot* AFKLifeActionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLifeActionSlot* AFKDoneLifeActionSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsServerAFKLifeActionActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsServerAFKLifeActionDoneActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AFKMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisabledAtCheckpointCounter;
    
public:
    ASBZSecurityRoom(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ServerAFKLifeActionFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION(BlueprintCallable)
    void ServerAFKDoneLifeActionFreed(ASBZCharacter* Character, USBZLifeActionInstance* ActionInstance, USBZLifeActionSlot* ActionSlot, ESBZLifeActionStopReason Result);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayableLevelInitialized(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void OnCameraDestroyed(AActor* DestroyedActor);
    

    // Fix for true pure virtual functions not being implemented
};

