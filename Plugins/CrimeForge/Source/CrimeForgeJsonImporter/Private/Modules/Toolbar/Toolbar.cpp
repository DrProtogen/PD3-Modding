

#include "Modules/Toolbar/Toolbar.h"

#include "CrimeForgeJsonImporter.h"
#include "CrimeForgeSettings.h"
#include "Engine/Compatibility.h"
#include "Engine/EngineUtilities.h"

#include "Modules/UI/StyleModule.h"
#include "Importers/Constructor/ImportJob.h"
#include "Importers/Constructor/ImportReader.h"
#include "Modules/Metadata.h"
#include "Modules/AssetBackend/AssetBackend.h"
#include "Modules/Toolbar/Tools/ImportFromPath.h"
#if ENGINE_UE5
#include "Modules/Toolbar/Dropdowns/ValidationDropdownBuilder.h"
#endif
#include "Settings/Runtime.h"
#include "Utilities/Dialog.h"

/* Every menu type below comes from here. Later engines drag it in behind one of the includes
 * above, 5.0 does not, so name it rather than depend on the shared PCH's include graph. */
#if !UE4_23_BELOW
#include "ToolMenus.h"
#endif

/* 4.25 and below build this module without the engine's shared PCH (see CrimeForgeJsonImporter.Build.cs),
 * which is where the multi box builders used to come in from */
#if UE4_25_BELOW
#include "Framework/MultiBox/MultiBoxBuilder.h"
#endif

static TWeakPtr<SNotificationItem> WaitingForBackend;

#if ENGINE_UE5
/* CrimeForge JSON Importer ships no validation artwork, so the editor's own stands in */
static FSlateIcon GetValidationIcon() {
	return FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Validate");
}
#endif

void UCrimeForgeJsonImporterToolbar::Register() {
#if ENGINE_UE5
	UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
	if (Menu != nullptr) {
		FToolMenuSection& Section = Menu->FindOrAddSection(GCrimeForgeJsonImporterName);
		AddCrimeForgeJsonImporterButtons(Section);
	}

	/* Validation remains on the main menu bar. All importer/asset tools now live inside
	 * the JSON Import window so the editor toolbar has one clear entry point. */
	RegisterMainMenu();
#endif
}

#if ENGINE_UE5
void UCrimeForgeJsonImporterToolbar::RegisterMainMenu() {
	UToolMenus* ToolMenus = UToolMenus::Get();
	if (ToolMenus == nullptr) {
		return;
	}

	UToolMenu* MenuBar = ToolMenus->ExtendMenu("LevelEditor.MainMenu");
	if (MenuBar == nullptr) {
		return;
	}

	/* Scoped so ShutdownModule can tear the menu back down */
	FToolMenuOwnerScoped OwnerScoped(this);

	/* Sits after Window, which is where this project puts its other tool menus */
	FToolMenuSection& Section = MenuBar->AddSection(
		"CrimeForgeJsonImporterValidationSection",
		FText::GetEmpty(),
		FToolMenuInsert("WindowLayout", EToolMenuInsertType::After)
	);

	/* FNewToolMenuChoice takes an FMenuBuilder delegate as its legacy form, which lets the
	 * dropdown builder stay the single implementation of the menu's contents */
	Section.AddSubMenu(
		"Validation",
		FText::FromString("Validation"),
		FText::FromString("Validate this project's content against the real game files"),
		FNewToolMenuChoice(FNewMenuDelegate::CreateStatic(&UCrimeForgeJsonImporterToolbar::PopulateValidationMenu)),
		false,
		GetValidationIcon()
	);
}

void UCrimeForgeJsonImporterToolbar::PopulateValidationMenu(FMenuBuilder& MenuBuilder) {
	IValidationDropdownBuilder().Build(MenuBuilder);
}
#endif

#if !UE4_23_BELOW
void UCrimeForgeJsonImporterToolbar::AddCrimeForgeJsonImporterButtons(FToolMenuSection& Section) {
#if ENGINE_UE5
	FToolMenuEntry& ActionButton = Section.AddEntry(FToolMenuEntry::InitToolBarButton(
		FName("CrimeForgeJsonImporterImport"),
		FToolUIActionChoice(
			FUIAction(
				FExecuteAction::CreateUObject(this, &UCrimeForgeJsonImporterToolbar::ImportAction),
				FCanExecuteAction(),
				FGetActionCheckState(),
				FIsActionButtonVisible::CreateStatic(&IsToolBarVisible)
			)
		),
		FText::FromString("JSON Import"),
		FText::FromString("Open CrimeForge JSON Importer and PAYDAY 3 asset tools."),
		FSlateIcon(FCrimeForgeJsonImporterStyle::Get().GetStyleSetName(), FName("Toolbar.Icon")),
		EUserInterfaceActionType::Button
	));

	ActionButton.StyleNameOverride = "CalloutToolbar";
#endif
}
#endif

#if ENGINE_UE4
void UCrimeForgeJsonImporterToolbar::UE4Register(FToolBarBuilder& Builder) {
	Builder.AddToolBarButton(
		FUIAction(
			FExecuteAction::CreateUObject(this, &UCrimeForgeJsonImporterToolbar::ImportAction),
			FCanExecuteAction(),
			FGetActionCheckState(),
			FIsActionButtonVisible::CreateStatic(IsToolBarVisible)
		),
		NAME_None,
		FText::FromString("JSON Import"),
		FText::FromString("Open CrimeForge JSON Importer and asset tools."),
		FSlateIcon(FCrimeForgeJsonImporterStyle::Get().GetStyleSetName(), FName("Toolbar.Icon"))
	);
}
#endif

IConsoleVariable* GCrimeForgeJsonImporterButtonVisibility = nullptr;

bool UCrimeForgeJsonImporterToolbar::IsToolBarVisible() {
	if (!UCrimeForgeSettings::AreExperimentalFeaturesEnabled()) {
		return false;
	}

	if (!GCrimeForgeJsonImporterRuntime.bEnableToolbarToggling) {
		return true;
	}
	
	bool Visible = true;

	static bool bHasCheckedConsoleVariable = false;

	if (!bHasCheckedConsoleVariable) {
		GCrimeForgeJsonImporterButtonVisibility = IConsoleManager::Get().FindConsoleVariable(TEXT("Toolbar.Tools.FlippedVisibility"));

		bHasCheckedConsoleVariable = true;
	}

	if (GCrimeForgeJsonImporterButtonVisibility) {
		if (GCrimeForgeJsonImporterButtonVisibility->GetInt() == 1) {
			Visible = false;
		}
	}

	if (GEditor) {
		for (const FWorldContext& WorldContext : GEditor->GetWorldContexts()) {
			if (WorldContext.World() && WorldContext.World()->WorldType == EWorldType::PIE) {
				Visible = false;
			}
		}
	}

	return Visible;
}

void UCrimeForgeJsonImporterToolbar::WaitForBackendTimerCallback() {
	if (WaitingForBackend.IsValid()) {
		BackendDotCount = (BackendDotCount + 1) % 4;

		/* Appended rather than formatted: no dots leaves an FString that never allocated, and the
		 * pointer %s gets out of one of those is null, which prints as "(null)" once every four
		 * ticks */
		WaitingForBackend.Pin()->SetText(
			FText::FromString(TEXT("Initializing PAYDAY 3 data") + FString::ChrN(BackendDotCount, TEXT('.')))
		);
	}
	
	/* Kept as a compatibility path for old wait-style call sites. The AssetReader backend normally
	 * initializes synchronously enough that ShouldWaitUntilInitialized() is false. */
	if (!AssetBackend::Status::IsOpened()) {
		CancelWaitForBackendTimer();

		AppendNotification(
			FText::FromString("Backend Initialization Failed"),
			FText::FromString("CrimeForge could not initialize PAYDAY 3 data. Check Project Settings -> Plugins -> CrimeForge."),
			4.0f,
			FCrimeForgeJsonImporterStyle::Get().GetBrush("Toolbar.Icon"),
			SNotificationItem::CS_Fail,
			false,
			310.0f
		);

		return;
	}

	AssetBackend::Status::IsReady([this](const bool bReady) {
		if (!bReady) {
			return;
		}

		CancelWaitForBackendTimer();
		ImportAction();
	});
}

void UCrimeForgeJsonImporterToolbar::CancelWaitForBackendTimer() {
	RemoveNotification(WaitingForBackend);
	GEditor->GetTimerManager()->ClearTimer(WaitForBackendTimer);
}

void UCrimeForgeJsonImporterToolbar::IsFitToFunction(TFunction<void(bool)> OnResponse) {
	/* The old compile-time "backend" branch now means "embedded game-data backend". */
	if (!CRIMEFORGEJSONIMPORTER_ASSET_BACKEND) {
		OnResponse(true);

		return;
	}

	AssetBackend::Status::Check([this, OnResponse](const bool bStatusOk) {
		if (!bStatusOk) {
			OnResponse(false);

			return;
		}

		AssetBackend::Update([OnResponse](const bool bUpdated) {
			OnResponse(bUpdated);
		});
	});
}

void UCrimeForgeJsonImporterToolbar::ImportAction() {
	if (!UCrimeForgeSettings::AreExperimentalFeaturesEnabled()) {
		SpawnPrompt(
			"CrimeForge Experimental Features",
			"Asset reading and importing are experimental and currently disabled. Enable Experimental Features in Project Settings -> Plugins -> CrimeForge to use them."
		);
		return;
	}

	/* The window itself contains useful local asset tools and settings, so opening it never depends
	 * on AssetReader. Any action that needs PAYDAY 3 data initializes/builds the backend on demand. */
	Import();
}

void UCrimeForgeJsonImporterToolbar::Import() {
	if (!UCrimeForgeSettings::AreExperimentalFeaturesEnabled()) {
		return;
	}

	/* Update Runtime */
	GCrimeForgeJsonImporterRuntime.Update();

	CancelWaitForBackendTimer();

	/* A path is the direct way in, and having to export a JSON first to import something CrimeForge
	 * can read from PAYDAY 3 is a step that does not need to exist. Built the other way, the file on
	 * disk is what is being imported, so the file dialog is the way in. */
	if (CRIMEFORGEJSONIMPORTER_ASSET_BACKEND) {
		TToolImportFromPath Tool;
		Tool.Execute();

		return;
	}

	/* Dialog for a JSON File */
	const TArray<FString> OutFileNames = OpenFileDialog("Select a JSON File", "JSON Files|*.json");
	if (OutFileNames.Num() == 0) {
		return;
	}

	/* Imported a slice at a time, so the editor keeps drawing for however long it takes */
	FImportJob::Enqueue(OutFileNames);
}

void UCrimeForgeJsonImporterToolbar::HandleBackendWaiting() {
	if (!AssetBackend::Status::ShouldWaitUntilInitialized() || WaitingForBackend.IsValid()) return;
	
	WaitingForBackend =
		AppendNotificationWithHandler(
			FText::FromString("Initializing PAYDAY 3 data"),
			FText::FromString(""),
			999.0f,
			FCrimeForgeJsonImporterStyle::Get().GetBrush("Toolbar.Icon"),
			SNotificationItem::CS_Pending,
			false,
			0.0f);

	GEditor->GetTimerManager()->SetTimer(
		WaitForBackendTimer,
		FTimerDelegate::CreateUObject(this, &UCrimeForgeJsonImporterToolbar::WaitForBackendTimerCallback),
		0.2f,
		true);
}



