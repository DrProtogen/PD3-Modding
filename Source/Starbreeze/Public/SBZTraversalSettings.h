#pragma once
#include "CoreMinimal.h"
#include "EPD3HeistState.h"
#include "SBZDeveloperSettings.h"
#include "SBZTraversalSettings.generated.h"

class UObject;
class USBZTraversalSettings;

UCLASS(Blueprintable, Config=Engine)
class USBZTraversalSettings : public USBZDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPD3HeistState MinBreakTraversalDestructibleHeistState;
    
public:
    USBZTraversalSettings();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTraversalDestructionAllowed(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static USBZTraversalSettings* Get();
    
};

