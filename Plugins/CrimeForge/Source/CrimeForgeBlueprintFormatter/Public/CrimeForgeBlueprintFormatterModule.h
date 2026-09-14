#pragma once

#include "CoreMinimal.h"
#include "Containers/Ticker.h"
#include "Modules/ModuleManager.h"

class FCrimeForgeBlueprintFormatterModule final : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;

private:
    bool Tick(float DeltaTime);
    FTSTicker::FDelegateHandle TickerHandle;
};
