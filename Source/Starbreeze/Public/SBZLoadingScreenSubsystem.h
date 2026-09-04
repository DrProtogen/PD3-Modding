#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "SBZLoadingScreenSubsystem.generated.h"

class USBZLoadingScreen;

UCLASS(Blueprintable)
class USBZLoadingScreenSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USBZLoadingScreen* LoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<USBZLoadingScreen> LoadingScreenWidgetClass;
    
public:
    USBZLoadingScreenSubsystem();

};

