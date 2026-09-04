#pragma once
#include "CoreMinimal.h"
#include "SBZBagItem.h"
#include "SBZEquippableConfig.h"
#include "SBZReplicatedMarkerInfo.h"
#include "SBZPlaceableWeaponBagItem.generated.h"

UCLASS(Blueprintable)
class ASBZPlaceableWeaponBagItem : public ASBZBagItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSBZEquippableConfig StoredWeaponConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, Replicated, meta=(AllowPrivateAccess=true))
    FSBZReplicatedMarkerInfo ReplicatedMarkerInfo;
    
public:
    ASBZPlaceableWeaponBagItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedMarkerInfo();
    
};

