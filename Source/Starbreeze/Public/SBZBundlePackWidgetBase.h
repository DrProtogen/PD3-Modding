#pragma once
#include "CoreMinimal.h"
#include "ESBZBundleMannequinContext.h"
#include "SBZCrimeBondProgression.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZBundlePackWidgetBase.generated.h"

class USBZBundlePackData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STARBREEZE_API USBZBundlePackWidgetBase : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDetailedView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZBundleMannequinContext MannequinContext;
    
public:
    USBZBundlePackWidgetBase();

    UFUNCTION(BlueprintCallable)
    void ShowPack(int32 PackIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPackByData(USBZBundlePackData* PackData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZCrimeBondProgression GetPackProgression(int32 PackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBundlePackData* GetPackData(int32 PackIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZCrimeBondProgression GetCurrentPackProgression() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentPackIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USBZBundlePackData* GetCurrentPackData() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCurrentPackChanged(int32 NewIndex, USBZBundlePackData* PackData, FSBZCrimeBondProgression Progression);
    
};

