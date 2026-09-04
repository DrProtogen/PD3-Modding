#pragma once
#include "CoreMinimal.h"
#include "SBZSecurityCompanyEventAttributeData.h"
#include "SBZSecurityCompanyEventFloatAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSecurityCompanyEventFloatAttributeData : public FSBZSecurityCompanyEventAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    STARBREEZE_API FSBZSecurityCompanyEventFloatAttributeData();
};

