#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SBZDeveloperSettings.generated.h"

UCLASS(Abstract, Blueprintable, DefaultConfig, Config=Starbreeze)
class USBZDeveloperSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    USBZDeveloperSettings();

};

