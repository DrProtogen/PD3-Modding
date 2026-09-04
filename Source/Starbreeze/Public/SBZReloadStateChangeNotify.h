#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZReloadState.h"
#include "SBZReloadStateChangeNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZReloadStateChangeNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZReloadState TargetState;
    
public:
    USBZReloadStateChangeNotify();

};

