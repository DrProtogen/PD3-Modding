

#include "Modules/Toolbar/Dropdowns/ValidationDropdownBuilder.h"

/* Validation is UE5 only */
#if ENGINE_UE5

#include "Modules/Validation/ValidatorRegistry.h"

#define LOCTEXT_NAMESPACE "CrimeForgeJsonImporter.Validation"

void IValidationDropdownBuilder::Build(FMenuBuilder& MenuBuilder) const {
	const TArray<FCrimeForgeJsonImporterValidator>& Validators = FCrimeForgeJsonImporterValidatorRegistry::GetValidators();

	MenuBuilder.BeginSection("CrimeForgeJsonImporterValidationSection", LOCTEXT("ValidatorsSection", "Validators"));
	{
		if (Validators.Num() == 0) {
			MenuBuilder.AddMenuEntry(
				LOCTEXT("NoValidators", "No Validators Available"),
				FText::GetEmpty(),
				FSlateIcon(),
				FUIAction(FExecuteAction(), FCanExecuteAction::CreateLambda([] { return false; }))
			);
		}

		for (const FCrimeForgeJsonImporterValidator& Validator : Validators) {
			/* Validators offering their own scopes or presets become a submenu */
			if (Validator.BuildMenu.IsBound()) {
				MenuBuilder.AddSubMenu(
					Validator.Label,
					Validator.Description,
					Validator.BuildMenu,
					false,
					Validator.Icon
				);

				continue;
			}

			MenuBuilder.AddMenuEntry(
				Validator.Label,
				Validator.Description,
				Validator.Icon,
				FUIAction(Validator.OnOpen),
				NAME_None
			);
		}
	}
	MenuBuilder.EndSection();
}

#undef LOCTEXT_NAMESPACE

#endif
