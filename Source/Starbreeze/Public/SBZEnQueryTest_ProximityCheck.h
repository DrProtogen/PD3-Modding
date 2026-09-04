#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "UObject/NoExportTypes.h"
#include "ESBZProximityCheckTestType.h"
#include "SBZEnQueryTest_ProximityCheck.generated.h"

UCLASS(Blueprintable)
class USBZEnQueryTest_ProximityCheck : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESBZProximityCheckTestType TestType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue Radius;
    
public:
    USBZEnQueryTest_ProximityCheck();

};

