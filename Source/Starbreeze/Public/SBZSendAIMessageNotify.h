#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZSendAIMessageNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZSendAIMessageNotify : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AIMessage;
    
public:
    USBZSendAIMessageNotify();

};

