#pragma once
#include "CoreMinimal.h"
#include "SBZItemDatabase.h"
#include "SBZSecurityCompanyItemDatabase.generated.h"

class UPD3SecurityCompanyDataAsset;

UCLASS(Blueprintable)
class USBZSecurityCompanyItemDatabase : public USBZItemDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPD3SecurityCompanyDataAsset*> SecurityCompanyArray;
    
    USBZSecurityCompanyItemDatabase();

};

