#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SBZEnvQueryTest_BagTypeTag.generated.h"

UCLASS(Blueprintable)
class USBZEnvQueryTest_BagTypeTag : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery BagTypeTagQuery;
    
public:
    USBZEnvQueryTest_BagTypeTag();

};

