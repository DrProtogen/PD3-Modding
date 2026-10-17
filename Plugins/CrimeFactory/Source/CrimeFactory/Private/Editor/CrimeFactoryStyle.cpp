#include "Editor/CrimeFactoryStyle.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleRegistry.h"
#include "Styling/AppStyle.h"
#include "Brushes/SlateImageBrush.h"

static FName StyleSetName(TEXT("CrimeFactoryStyle"));
TSharedPtr< FSlateStyleSet > FCrimeFactoryStyle::StyleInstance = NULL;

void FCrimeFactoryStyle::Initialize() {
    if (!StyleInstance.IsValid()) {
        StyleInstance = Create();
        FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
    }
}

void FCrimeFactoryStyle::Shutdown() {
    FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
    ensure(StyleInstance.IsUnique());
    StyleInstance.Reset();
}

FName FCrimeFactoryStyle::GetStyleSetName() {
    return StyleSetName;
}

TSharedRef<FSlateStyleSet> FCrimeFactoryStyle::Create() {
    TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet(StyleSetName));
    Style->SetContentRoot(IPluginManager::Get().FindPlugin(TEXT("CrimeFactory"))->GetBaseDir() / TEXT("Resources"));
    Style->Set(TEXT("CrimeFactory.OpenPluginWindow"), new FSlateImageBrush(
        Style->RootToContentDir(TEXT("CrimeFactory128"), TEXT(".png")),
        FVector2D(40.0f, 40.0f)));
    Style->Set(TEXT("CrimeFactory.OpenAssetPalette"), new FSlateBrush(*FAppStyle::GetBrush("Icons.PlaceActors")));
    // SButton adds its style padding on top of ContentPadding. Icon buttons
    // Keep a 4px highlight visible around icons without shifting them on press.
    Style->Set(TEXT("CrimeFactory.ModCardIconButton"), FButtonStyle(FAppStyle::Get().GetWidgetStyle<FButtonStyle>("Button"))
        .SetNormalPadding(FMargin(4.0f))
        .SetPressedPadding(FMargin(4.0f)));
    return Style;
}

void FCrimeFactoryStyle::ReloadTextures() {
    if (FSlateApplication::IsInitialized()) {
        FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
    }
}

const ISlateStyle& FCrimeFactoryStyle::Get() {
    return *StyleInstance;
}
