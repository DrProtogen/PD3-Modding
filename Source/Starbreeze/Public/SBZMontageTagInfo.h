#pragma once
#include "CoreMinimal.h"
#include "SBZMontageTagInfo.generated.h"

class ASBZCharacter;
class UAnimMontage;
class USBZCharacterAnimation;

USTRUCT(BlueprintType)
struct FSBZMontageTagInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USBZCharacterAnimation* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASBZCharacter* LeadingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ASBZCharacter*> Followers;
    
    STARBREEZE_API FSBZMontageTagInfo();
};

