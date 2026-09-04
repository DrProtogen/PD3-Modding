#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "SBZBaseInventoryItemVisualsWidget.generated.h"

class UImage;
class UObject;
class UPaperSprite;
class USBZInventoryBaseData;

UCLASS(Blueprintable, EditInlineNew)
class USBZBaseInventoryItemVisualsWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZInventoryBaseData* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPaperSprite* ItemSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPaperSprite* LastItemSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> ResourceObject;
    
public:
    USBZBaseInventoryItemVisualsWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpriteLoaded(UPaperSprite* OutLoadedSprite);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetEmpty();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLoadingChanged(bool bIsLoading);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnImageLoaded(UObject* LoadedObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeOnSpriteLoaded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ItemInitialized(const USBZInventoryBaseData* NewItem);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeResourceObject(TSoftObjectPtr<UObject> InItem);
    
    UFUNCTION(BlueprintCallable)
    void InitializeItem(const USBZInventoryBaseData* InItem, bool bShouldLoadImage);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EmptySet();
    
};

