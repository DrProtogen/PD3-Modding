#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZDialogBodyGesturesNotifyState.generated.h"

class USBZDialogBodyGesturesData;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class STARBREEZE_API USBZDialogBodyGesturesNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USBZDialogBodyGesturesData* DialogBodyGesturesData;
    
    USBZDialogBodyGesturesNotifyState();

};

