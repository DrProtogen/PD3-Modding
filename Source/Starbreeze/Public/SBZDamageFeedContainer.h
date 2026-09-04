#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZDamageType.h"
#include "SBZFeedContainer.h"
#include "SBZDamageFeedContainer.generated.h"

class AActor;
class USBZDamageFeedBridge;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDamageFeedContainer : public USBZFeedContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDamageFeedBridge* Bridge;
    
public:
    USBZDamageFeedContainer();

private:
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(float DamageAmount, ESBZDamageType DamageType, AActor* Target, const TArray<FVector>& HitLocations);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddDamageFeedEntry(float DamageAmount, ESBZDamageType DamageType, AActor* Target);
    
};

