#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZRappellingRopeSettings.h"
#include "SBZRappellingRopeData.generated.h"

UCLASS(Blueprintable)
class USBZRappellingRopeData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZRappellingRopeSettings EnterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSBZRappellingRopeSettings ExitSettings;
    
    USBZRappellingRopeData();

};

