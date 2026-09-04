#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZBTDecorator_SendAIMessage.generated.h"

UCLASS(Blueprintable)
class USBZBTDecorator_SendAIMessage : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActivationMessage;
    
public:
    USBZBTDecorator_SendAIMessage();

};

