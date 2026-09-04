#pragma once
#include "CoreMinimal.h"
#include "SBZMenuStackScreenWidget.h"
#include "SBZVariantScreen.generated.h"

class USBZTileView;

UCLASS(Blueprintable, EditInlineNew)
class USBZVariantScreen : public USBZMenuStackScreenWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USBZTileView* ListView;
    
public:
    USBZVariantScreen();

};

