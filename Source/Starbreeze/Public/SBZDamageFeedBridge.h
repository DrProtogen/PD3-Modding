#pragma once
#include "CoreMinimal.h"
#include "SBZBridgeBase.h"
#include "SBZDamageEvent.h"
#include "SBZOnDamageDealtDelegate.h"
#include "SBZDamageFeedBridge.generated.h"

class UObject;
class USBZDamageFeedBridge;

UCLASS(Blueprintable)
class STARBREEZE_API USBZDamageFeedBridge : public USBZBridgeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZOnDamageDealt OnDamageDealt;
    
    USBZDamageFeedBridge();

private:
    UFUNCTION(BlueprintCallable)
    void OnGameDamageEvent(const FSBZDamageEvent& DamageEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static USBZDamageFeedBridge* Get(const UObject* WorldContextObject);
    
};

