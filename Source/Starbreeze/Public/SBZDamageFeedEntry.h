#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBZDamageType.h"
#include "SBZFeedEntryInterface.h"
#include "SBZDamageFeedEntry.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDamageFeedEntry : public UUserWidget, public ISBZFeedEntryInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ESBZDamageType DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
public:
    USBZDamageFeedEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMergeAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayDisappearAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayAppearAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageDataUpdated(float InDamageAmount, ESBZDamageType InDamageType, FLinearColor InColor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESBZDamageType GetDamageType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageAmount() const;
    

    // Fix for true pure virtual functions not being implemented
};

