#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidgetPool.h"
#include "ESBZDamageType.h"
#include "Templates/SubclassOf.h"
#include "SBZDamageNumberContainer.generated.h"

class AActor;
class UCanvasPanel;
class USBZDamageFeedBridge;
class USBZDamageNumberEntry;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDamageNumberContainer : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZDamageNumberEntry> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWidgetsPerDamageEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Container;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZDamageFeedBridge* Bridge;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UUserWidget>, FUserWidgetPool> PoolMap;
    
public:
    USBZDamageNumberContainer();

    UFUNCTION(BlueprintCallable)
    void SpawnDamageNumberAtLocation(float DamageAmount, ESBZDamageType DamageType, FVector WorldLocation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDamageDealt(float DamageAmount, ESBZDamageType DamageType, AActor* Victim, const TArray<FVector>& HitLocations);
    
};

