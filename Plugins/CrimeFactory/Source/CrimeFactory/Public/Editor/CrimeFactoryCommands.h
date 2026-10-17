#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"

class FCrimeFactoryCommands : public TCommands<FCrimeFactoryCommands> {
public:
    FCrimeFactoryCommands();

    virtual void RegisterCommands() override;
public:
    TSharedPtr<FUICommandInfo> OpenPluginWindow;
    TSharedPtr<FUICommandInfo> OpenAssetPalette;
};
