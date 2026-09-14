

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/UIAction.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Textures/SlateIcon.h"
#include "Engine/Compatibility.h"

/* Validation is UE5 only */
#if ENGINE_UE5

/* A validator offered by the Validation toolbar button.
 *
 * Validators register themselves at module startup, which is all it takes for them to show up
 * in the toolbar dropdown. */
struct CRIMEFORGEJSONIMPORTER_API FCrimeForgeJsonImporterValidator {
	/* Stable identifier, ex: "Validation" */
	FName Id;

	FText Label;
	FText Description;
	FSlateIcon Icon;

	/* Opens this validator's UI. Also what the toolbar button itself runs for the first one. */
	FExecuteAction OnOpen;

	/* Extra entries listed under the validator. When bound, it becomes a submenu in the
	 * dropdown rather than a plain entry, so validators can offer their own scopes and presets. */
	FNewMenuDelegate BuildMenu;
};

/* Everything the Validation toolbar button knows how to run */
class CRIMEFORGEJSONIMPORTER_API FCrimeForgeJsonImporterValidatorRegistry {
public:
	/* Adds a validator, replacing any validator already registered under the same Id */
	static void Register(const FCrimeForgeJsonImporterValidator& Validator);

	static const TArray<FCrimeForgeJsonImporterValidator>& GetValidators();
	static const FCrimeForgeJsonImporterValidator* Find(FName Id);

	/* Opens the validator registered under Id, doing nothing if there isn't one */
	static void Open(FName Id);

	/* Opens the first registered validator, which is what clicking the toolbar button does */
	static void OpenDefault();
};

#endif
