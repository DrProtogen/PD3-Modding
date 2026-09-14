#include "CrimeForgeStyle.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleRegistry.h"
#include "Styling/AppStyle.h"
#include "Brushes/SlateImageBrush.h"

static FName StyleSetName(TEXT("CrimeForgeStyle"));
TSharedPtr< FSlateStyleSet > FCrimeForgeStyle::StyleInstance = NULL;

void FCrimeForgeStyle::Initialize() {
    if (!StyleInstance.IsValid()) {
        StyleInstance = Create();
        FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
    }
}

void FCrimeForgeStyle::Shutdown() {
    FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
    ensure(StyleInstance.IsUnique());
    StyleInstance.Reset();
}

FName FCrimeForgeStyle::GetStyleSetName() {
    return StyleSetName;
}

TSharedRef<FSlateStyleSet> FCrimeForgeStyle::Create() {
    TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet(StyleSetName));
    Style->SetContentRoot(IPluginManager::Get().FindPlugin(TEXT("CrimeForge"))->GetBaseDir() / TEXT("Resources"));
    Style->Set(TEXT("CrimeForge.OpenPluginWindow"), new FSlateImageBrush(
        Style->RootToContentDir(TEXT("CrimeForge128"), TEXT(".png")),
        FVector2D(40.0f, 40.0f)));
    return Style;
}

void FCrimeForgeStyle::ReloadTextures() {
    if (FSlateApplication::IsInitialized()) {
        FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
    }
}

const ISlateStyle& FCrimeForgeStyle::Get() {
    return *StyleInstance;
}
