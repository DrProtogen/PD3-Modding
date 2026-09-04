#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZTickOverskillBaseAbility.generated.h"

class ASBZPlayerState;
class USBZOverskillData;

UCLASS(Blueprintable)
class USBZTickOverskillBaseAbility : public USBZGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZPlayerState* OwnerPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOverskillData* OverskillData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZOverskillData* OriginalOverskillData;
    
public:
    USBZTickOverskillBaseAbility();

};

