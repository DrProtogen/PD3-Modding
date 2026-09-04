#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZMenuButton.h"
#include "SBZShopItemPreviewButton.generated.h"

class USBZShopImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZShopItemPreviewButton : public USBZMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DefaultImageBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultImageOffsetY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FilledImageBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZShopImage* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ItemNameTextBlock;
    
public:
    USBZShopItemPreviewButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateOwnershipStatus(bool bIsOwned);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow(bool bIsLast, bool bCanBeInspected, bool bIsVendorPermission);
    
    UFUNCTION(BlueprintCallable)
    void Inspect();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemIndex() const;
    
};

