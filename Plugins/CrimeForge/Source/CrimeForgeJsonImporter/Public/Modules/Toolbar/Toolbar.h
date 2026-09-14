

#pragma once

#include "CoreMinimal.h"
#include "Engine/Compatibility.h"
#include "Toolbar.generated.h"

class FMenuBuilder;

/* 4.25 and below build this module without the engine's shared PCH (see CrimeForgeJsonImporter.Build.cs),
 * which is where the menu types below used to come in from. FToolMenuSection is only named at
 * all on the versions that have ToolMenus, so 4.24 and 4.25 are the ones that need it. */
#if UE4_25_BELOW
class FToolBarBuilder;

#if !UE4_23_BELOW
struct FToolMenuSection;
#endif
#endif

UCLASS()
class CRIMEFORGEJSONIMPORTER_API UCrimeForgeJsonImporterToolbar : public UObject {
	GENERATED_BODY()
public:
	void Register();

	/* FToolMenuSection arrived with ToolMenus, which replaced the FExtender toolbar in 4.24 ~~~ */
#if !UE4_23_BELOW
	void AddCrimeForgeJsonImporterButtons(FToolMenuSection& Section);
#endif

	/* Validation is UE5 only, it has no place to live on UE4's menu bar ~~~~~~~~~~~~~~~~~~~ */
#if ENGINE_UE5
	/* Adds CrimeForge JSON Importer's own menu to the editor's main menu bar, alongside the project's
	 * other tool menus rather than buried in the Content Browser toolbar */
	void RegisterMainMenu();

	/* Fills the Validation menu with everything in the validator registry */
	static void PopulateValidationMenu(FMenuBuilder& MenuBuilder);
#endif

#if ENGINE_UE4
	void UE4Register(FToolBarBuilder& Builder);
#endif

	/* Checks if CrimeForge JSON Importer is fit to function */
	void IsFitToFunction(TFunction<void(bool)> OnResponse);
	
	/* Checks if CrimeForge JSON Importer is fit to function, then called Import */
	void ImportAction();

	/* Asks for asset paths, or for a JSON file when bypassed */
	void Import();


	static bool IsToolBarVisible();

protected:
	/* Wait for backend to initialize */
	void HandleBackendWaiting();

	FTimerHandle WaitForBackendTimer;
	int32 BackendDotCount = 0;

	void WaitForBackendTimerCallback();
	void CancelWaitForBackendTimer();
};
