#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SBZAIConfigDPSData.h"
#include "SBZAgilityNavlinkRooms.h"
#include "SBZGlobalMaterialParameters.h"
#include "SBZVehicleSpawnData.h"
#include "SBZWorldSettings.generated.h"

class AActor;
class ASBZAgilityNavLink;
class ASBZAkAcousticPortal;
class ASBZCoverPoint;
class ASBZDespawnVolume;
class ASBZGate;
class ASBZRoomConnectorVolume;
class ASBZRoomVolume;
class UAkAudioEvent;
class UAnimMontage;
class UPD3AssaultSettings;
class USBZAISmallTalkCollection;
class USBZBagType;
class USBZCascadedShadowMapDefaults;
class USBZCivilianManagerSettings;
class USBZDialogDataAsset;
class USBZKeyItemData;
class USBZLifeActionComponent;
class USBZLifeActionSettings;
class USBZMarkerDataAsset;
class USBZMusicDataAsset;
class USBZNegotiationSettings;
class USBZPlayerLoadoutAsset;
class USBZSurfaceTypesConfig;
class USBZTrafficSettings;

UCLASS(Blueprintable)
class STARBREEZE_API ASBZWorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, Category = "SBZWorldSettings|SurfaceTypes", meta=(AllowPrivateAccess=true))
    USBZSurfaceTypesConfig* SurfaceTypesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|SurfaceTypes", meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USBZSurfaceTypesConfig> OverrideSoftSurfaceTypesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="SBZWorldSettings|CascadedShadowMap", meta = (AllowPrivateAccess = true))
    bool bIsUsingDefaultCSM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Music", meta=(AllowPrivateAccess=true))
    UAkAudioEvent* MusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Music", meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Music", meta=(AllowPrivateAccess=true))
    USBZMusicDataAsset* MusicDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Music", meta=(AllowPrivateAccess=true))
    TMap<FName, FName> MusicSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USBZKeyItemData*> KeyItemDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Music", meta=(AllowPrivateAccess=true))
    bool bStartMusicOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Music", meta=(AllowPrivateAccess=true))
    bool bIsSoloMusicStartOnActionPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Music", meta=(AllowPrivateAccess=true))
    bool bStopMusicOnEndPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Music", meta=(AllowPrivateAccess=true))
    bool bIsMusicMainMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Assault", meta=(AllowPrivateAccess=true))
    bool bSkipNegotiation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Assault", meta=(AllowPrivateAccess=true))
    bool bSkipFirstResponders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Assault", meta=(AllowPrivateAccess=true))
    float TimeToNextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    bool bStartInCasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|TeamAI", meta=(AllowPrivateAccess=true))
    bool bAICrewStartInCasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|TeamAI", meta=(AllowPrivateAccess=true))
    bool bStartWithAICrew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|TeamAI", meta=(AllowPrivateAccess=true))
    bool bCanCrewShootStreetCops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    bool bIsInRandomSublevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Audio", meta=(AllowPrivateAccess=true))
    int32 AudioVolumetricCullingDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Assault", meta=(AllowPrivateAccess=true))
    UPD3AssaultSettings* AssaultManagerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Vehicle", meta=(AllowPrivateAccess=true))
    TArray<FSBZVehicleSpawnData> VehicleSpawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Assault", meta=(AllowPrivateAccess=true))
    USBZNegotiationSettings* NegotiationManagerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Managers", meta=(AllowPrivateAccess=true))
    USBZCivilianManagerSettings* CivilianManagerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Vehicle", meta=(AllowPrivateAccess=true))
    USBZTrafficSettings* TrafficManagerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|LifeAction", meta=(AllowPrivateAccess=true))
    USBZLifeActionSettings* LifeActionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Collections", meta=(AllowPrivateAccess=true))
    TArray<USBZAISmallTalkCollection*> SmallTalkCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Collections", meta=(AllowPrivateAccess=true))
    TArray<USBZAISmallTalkCollection*> PhoneSmallTalkCollections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|MaterialParameters", meta=(AllowPrivateAccess=true))
    FSBZGlobalMaterialParameters GlobalMaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    USBZPlayerLoadoutAsset* SoloPlayerLoadoutOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TSet<USBZMarkerDataAsset*> LoadedDynamicMarkerAssetSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Assault", meta=(AllowPrivateAccess=true, InlineEditConditionToggle))
    bool bOverrideAIDPS;
    
    UPROPERTY(EditAnywhere, Category = "SBZWorldSettings|Assault", meta = (AllowPrivateAccess = true, EditCondition = "bOverrideAIDPS"))
    FSBZAIConfigDPSData AIDPS[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Bags", meta=(AllowPrivateAccess=true))
    bool bIsUsingSystemicBagCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Bags", meta=(AllowPrivateAccess=true))
    bool bIsUsingBagCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Bags", meta=(AllowPrivateAccess=true))
    int32 StartBagCountdownFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Bags", meta=(AllowPrivateAccess=true))
    TMap<USBZBagType*, USBZDialogDataAsset*> SecureBagVOOverrideMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Bags", meta=(AllowPrivateAccess=true, InlineEditConditionToggle))
    bool bIsUsingLastSecureBagVOOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|Bags", meta=(AllowPrivateAccess=true, EditCondition = "bIsUsingLastSecureBagVOOverride"))
    USBZDialogDataAsset* LastSecureBagVOOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, Category = "SBZWorldSettings|CascadedShadowMap", meta=(AllowPrivateAccess=true))
    USBZCascadedShadowMapDefaults* CSMDefaults;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZCoverPoint>, TSoftObjectPtr<ASBZRoomVolume>> CoverRoomConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZRoomConnectorVolume>, TSoftObjectPtr<ASBZGate>> ConnectorGateConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AActor>, FSBZAgilityNavlinkRooms> GateConnectorComponentConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZDespawnVolume>, TSoftObjectPtr<ASBZRoomVolume>> DespawnRoomConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZAgilityNavLink>, FSBZAgilityNavlinkRooms> AgilityNavlinkConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AActor>, FSBZAgilityNavlinkRooms> ConnectorComponentConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AActor>, FSBZAgilityNavlinkRooms> ConnectorComponentRoomPathConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<ASBZAkAcousticPortal>, TSoftObjectPtr<ASBZGate>> AcousticPortalConnection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings", meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<AActor>, TSoftObjectPtr<ASBZAkAcousticPortal>> PortalConnectorConnection;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Category = "SBZWorldSettings|LifeAction", meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LifeActionMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, Category = "SBZWorldSettings|LifeAction", meta=(AllowPrivateAccess=true))
    TArray<USBZLifeActionComponent*> LifeActionComponents;
    
public:
    ASBZWorldSettings(const FObjectInitializer& ObjectInitializer);

};

