#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZSecurityCompany.h"
#include "SBZSecurityCompanyEventFloatAttributeData.h"
#include "SBZSecurityCompanyEventIntAttributeData.h"
#include "SBZSecurityCompanyEventData.generated.h"

USTRUCT(BlueprintType)
struct FSBZSecurityCompanyEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZSecurityCompany SecurityCompany;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime EndDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSecurityCompanyEventFloatAttributeData> FloatAttributeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSBZSecurityCompanyEventIntAttributeData> IntAttributeArray;
    
    STARBREEZE_API FSBZSecurityCompanyEventData();
};

