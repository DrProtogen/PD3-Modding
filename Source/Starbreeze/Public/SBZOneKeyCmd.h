#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SBZOneKeyCmd.generated.h"

class UInputComponent;

UCLASS(Blueprintable)
class STARBREEZE_API USBZOneKeyCmd : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* OKCInputComponent;
    
public:
    USBZOneKeyCmd();

};

