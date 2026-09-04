#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SBZHostageTradeData.h"
#include "SBZPlayerStateAddedEvent.h"
#include "SBZPlayerStateRemovedEvent.h"
#include "SBZNegotiationManager.generated.h"

class USBZNegotiationSettings;

UCLASS(Blueprintable, Within=PD3HeistGameMode)
class USBZNegotiationManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EndNegotiationTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZNegotiationSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSBZHostageTradeData> HostageTradeDataArray;
    
public:
    USBZNegotiationManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateRemoved(const FSBZPlayerStateRemovedEvent& PlayerStateRemovedEventData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateAdded(const FSBZPlayerStateAddedEvent& PlayerStateAddedEventData);
    
};

