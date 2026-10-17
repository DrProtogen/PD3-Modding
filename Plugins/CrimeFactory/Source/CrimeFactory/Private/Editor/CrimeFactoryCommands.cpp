#include "Editor/CrimeFactoryCommands.h"
#include "Editor/CrimeFactoryStyle.h"

#define LOCTEXT_NAMESPACE "FCrimeFactoryModule"

FCrimeFactoryCommands::FCrimeFactoryCommands() : TCommands<FCrimeFactoryCommands>(
    TEXT("CrimeFactory"),
    NSLOCTEXT("Contexts", "CrimeFactory", "CrimeFactory Plugin"),
    NAME_None,
    FCrimeFactoryStyle::GetStyleSetName()) {}

void FCrimeFactoryCommands::RegisterCommands() {
    UI_COMMAND(OpenPluginWindow, "CrimeFactory", "Open the crimefactory window", EUserInterfaceActionType::Button, FInputChord{});
    UI_COMMAND(OpenAssetPalette, "Asset Palette", "Browse assets and drag them into the level viewport", EUserInterfaceActionType::Button, FInputChord{});
}

#undef LOCTEXT_NAMESPACE
