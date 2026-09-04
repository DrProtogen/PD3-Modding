#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "SBZItemBundleStoreItem.h"
#include "SBZBundleDisplayBase.generated.h"

class APlayerController;

UCLASS(Abstract, Blueprintable)
class STARBREEZE_API USBZBundleDisplayBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShowDetailedView;
    
public:
    USBZBundleDisplayBase();

    UFUNCTION(BlueprintCallable)
    void Show();
    
    UFUNCTION(BlueprintCallable)
    void SetShowDetailedView(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    void SetEntrySelected(int32 Index, bool bIsSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetEntryHovered(int32 Index, bool bIsHovered);
    
    UFUNCTION(BlueprintCallable)
    void Hide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<FSoftObjectPath> GetPreloadSoftPathsForPack(const UObject* WorldContextObject, FName PackName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox2D GetEntryScreenRect(APlayerController* PC, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEntryCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSBZItemBundleStoreItem GetEntryBundle(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void DressFromPack(FName PackName);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

