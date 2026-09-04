#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ESBZHumanShieldEnterType.h"
#include "SBZHumanShieldEnterTypeNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class USBZHumanShieldEnterTypeNotify : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZHumanShieldEnterType HumanShieldEnterType;
    
    USBZHumanShieldEnterTypeNotify();

};

