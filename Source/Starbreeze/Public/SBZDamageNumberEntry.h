#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESBZDamageType.h"
#include "SBZDamageNumberEntry.generated.h"

class APlayerController;
class UCanvasPanelSlot;
class USBZDamageNumberConfigAsset;
class USBZDamageNumberContainer;

UCLASS(Blueprintable, EditInlineNew)
class STARBREEZE_API USBZDamageNumberEntry : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDamageNumberConfigAsset* Config;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USBZDamageNumberContainer> OwningContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerController> CachedPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* CachedCanvasSlot;
    
public:
    USBZDamageNumberEntry();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDamageDataSet(float InDamageAmount, ESBZDamageType InDamageType, FLinearColor InColor);
    
};

