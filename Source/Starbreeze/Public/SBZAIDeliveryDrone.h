#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SBZAIDroneBase.h"
#include "SBZBagHandle.h"
#include "SBZEquippableConfig.h"
#include "SBZMarkerInfoInterface.h"
#include "SBZPawnLifetime.h"
#include "SBZReplicatedMarkerInfo.h"
#include "SBZRoomVolumeInterface.h"
#include "SBZTypeInterface.h"
#include "SBZAIDeliveryDrone.generated.h"

class ASBZRoomVolume;
class UAkAudioEvent;
class UAkComponent;
class UBehaviorTree;
class USBZBagType;
class USBZMarkerDataAsset;

UCLASS(Blueprintable)
class ASBZAIDeliveryDrone : public ASBZAIDroneBase, public ISBZTypeInterface, public ISBZRoomVolumeInterface, public ISBZPawnLifetime, public ISBZMarkerInfoInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZBagType* OverkillWeaponBagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreferredRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BackupBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DropBagEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DespawnEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* MarkerDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZMarkerDataAsset* OwnerMarkerDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZBagHandle CurrentBagHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZRoomVolume*> RoomVolumeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig CarriedWeaponConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, Replicated, meta=(AllowPrivateAccess=true))
    FSBZReplicatedMarkerInfo ReplicatedMarkerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsBagDropped;
    
public:
    ASBZAIDeliveryDrone(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMarkerInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsBagDropped();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DropBag();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_DespawnSplineReached();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void BP_OnBagDropped();
    

    // Fix for true pure virtual functions not being implemented
};

