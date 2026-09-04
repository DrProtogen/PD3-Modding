#pragma once
#include "CoreMinimal.h"
#include "ESBZNumberLocalizationFormat.h"
#include "SBZSecurityCompanyEventAttributeData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSecurityCompanyEventAttributeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZNumberLocalizationFormat FormatType;
    
    STARBREEZE_API FSBZSecurityCompanyEventAttributeData();
};

