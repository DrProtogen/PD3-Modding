#pragma once
#include "CoreMinimal.h"
#include "SBZWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "SBZShopContentListWidget.generated.h"

class USBZScrollBox;
class USBZShopContentListItemWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USBZShopContentListWidget : public USBZWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZShopContentListItemWidget> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText IncludesTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* IncludesTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZScrollBox* ItemScrollBox;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USBZShopContentListItemWidget*> ItemWidgets;
    
public:
    USBZShopContentListWidget();

};

