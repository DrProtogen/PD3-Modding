#pragma once
#include "CoreMinimal.h"
#include "SBZSecurityCompanyEventAttributeData.h"
#include "SBZSecurityCompanyEventIntAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSecurityCompanyEventIntAttributeData : public FSBZSecurityCompanyEventAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    STARBREEZE_API FSBZSecurityCompanyEventIntAttributeData();
};

