#pragma once
#include "CoreMinimal.h"
#include "SBZGameplayAbility.h"
#include "SBZHUDNotificationData.h"
#include "SBZGameplayAbility_CharacterCrouch.generated.h"

class ASBZCharacter;

UCLASS(Blueprintable)
class USBZGameplayAbility_CharacterCrouch : public USBZGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZHUDNotificationData UncrouchNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* Character;
    
    USBZGameplayAbility_CharacterCrouch();

};

