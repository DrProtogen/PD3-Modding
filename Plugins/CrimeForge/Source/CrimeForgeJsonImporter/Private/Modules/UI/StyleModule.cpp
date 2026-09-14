

#include "Modules/UI/StyleModule.h"
#include "Styling/SlateStyleRegistry.h"
#include "Interfaces/IPluginManager.h"
#include "Modules/Metadata.h"
#include "Engine/EngineUtilities.h"
#include "Engine/Compatibility.h"

/* 4.25 and below build this module without the engine's shared PCH (see CrimeForgeJsonImporter.Build.cs),
 * which is where the slate application used to come in from */
#if UE4_25_BELOW
#include "Framework/Application/SlateApplication.h"
#endif

#if ENGINE_UE5
#include "Styling/ToolBarStyle.h"
#include "Styling/StyleColors.h"
#include "Brushes/SlateRoundedBoxBrush.h"
#endif


TSharedRef<FSlateStyleSet> FCrimeForgeJsonImporterStyle::Create() {
	TSharedRef<FSlateStyleSet> Style = MakeShareable(new FSlateStyleSet("CrimeForgeJsonImporterStyle"));
	Style->SetContentRoot(FRMetadata::Plugin->GetBaseDir() / TEXT("Resources"));

	/* Use Unreal's editor-owned Content Browser icon instead of carrying a dedicated 40px image.
	 * The JSON importer is fundamentally an asset import/content operation, so this stays clear at
	 * toolbar size and automatically follows the active editor theme. */
#if ENGINE_UE5
	Style->Set("Toolbar.Icon", new FSlateBrush(*FAppStyle::Get().GetBrush("LevelEditor.Tabs.ContentBrowser")));
#else
	Style->Set("Toolbar.Icon", new FSlateBrush(*FEditorStyle::Get().GetBrush("LevelEditor.Tabs.ContentBrowser")));
#endif

	return Style;
}

TSharedPtr<FSlateStyleSet> FCrimeForgeJsonImporterStyle::StyleInstance = nullptr;

void FCrimeForgeJsonImporterStyle::Initialize() {
	if (!StyleInstance.IsValid()) {
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FCrimeForgeJsonImporterStyle::Shutdown() {
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FCrimeForgeJsonImporterStyle::GetStyleSetName() {
	static FName StyleSetName(TEXT("CrimeForgeJsonImporterStyle"));
	return StyleSetName;
}

FName FCrimeForgeJsonImporterStyle::GetEmbeddedToolbarStyleName() {
	static FName EmbeddedToolbarStyleName(TEXT("CrimeForgeJsonImporter.EmbeddedToolbar"));
	return EmbeddedToolbarStyleName;
}

#if ENGINE_UE5
void FCrimeForgeJsonImporterStyle::EnsureEmbeddedToolbarStyleRegistered() {
	static bool bRegistered = false;

	if (bRegistered) {
		return;
	}

	bRegistered = true;

	FToolBarStyle EmbeddedToolbarStyle = FAppStyle::Get().GetWidgetStyle<FToolBarStyle>("AssetEditorToolbar");

	EmbeddedToolbarStyle.SetBackground(FSlateRoundedBoxBrush(FStyleColors::Recessed, 8.0f));
	EmbeddedToolbarStyle.SetBackgroundPadding(FMargin(6.f, 3.f, 6.f, 3.f));

	StyleInstance->Set(GetEmbeddedToolbarStyleName(), EmbeddedToolbarStyle);
	StyleInstance->Set(TEXT("CalloutToolbar"), FAppStyle::Get().GetWidgetStyle<FToolBarStyle>("CalloutToolbar"));

#if !UE5_4_BEYOND
	/* Before 5.4 a UToolMenu keeps its style set to itself: the member is private, only UToolMenus
	 * is a friend, and there is no setter. Whatever the menu is handed, it looks its style name up
	 * in FCoreStyle::Get(), which in an editor build is the app style. So the style goes in there
	 * as well, under the same name, and the menu finds it without ever being told where to look.
	 * Its copy above stays put so Get() keeps answering for it either way.
	 *
	 * The cast holds because the app style is always an FSlateStyleSet in the editor: the editor's
	 * own FStarshipEditorStyle::FStyle derives from it, and this module only builds for the editor. */
	if (FSlateStyleSet* AppStyleSet = static_cast<FSlateStyleSet*>(const_cast<ISlateStyle*>(FSlateStyleRegistry::FindSlateStyle(FAppStyle::GetAppStyleSetName())))) {
		AppStyleSet->Set(GetEmbeddedToolbarStyleName(), EmbeddedToolbarStyle);
	}
#endif
}
#endif

const ISlateStyle& FCrimeForgeJsonImporterStyle::Get() {
	return *StyleInstance;
}


void FCrimeForgeJsonImporterStyle::ReloadTextures() {
	if (FSlateApplication::IsInitialized()) {
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}