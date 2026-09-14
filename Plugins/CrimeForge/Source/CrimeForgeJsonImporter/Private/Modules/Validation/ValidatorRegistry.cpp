

#include "Modules/Validation/ValidatorRegistry.h"

/* Validation is UE5 only */
#if ENGINE_UE5

#include "Engine/Log.h"

/* Registration order is the order the dropdown lists them in, and the first one is what the
 * toolbar button runs, so this stays an array rather than a map */
static TArray<FCrimeForgeJsonImporterValidator> GRegisteredValidators;

void FCrimeForgeJsonImporterValidatorRegistry::Register(const FCrimeForgeJsonImporterValidator& Validator) {
	if (Validator.Id.IsNone()) {
		UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Refused to register a validator without an Id."));

		return;
	}

	const int32 ExistingIndex = GRegisteredValidators.IndexOfByPredicate([&Validator](const FCrimeForgeJsonImporterValidator& Existing) {
		return Existing.Id == Validator.Id;
	});

	/* Re-registering keeps the original position, so a hot reload doesn't shuffle the dropdown */
	if (ExistingIndex != INDEX_NONE) {
		GRegisteredValidators[ExistingIndex] = Validator;

		return;
	}

	GRegisteredValidators.Add(Validator);
}

const TArray<FCrimeForgeJsonImporterValidator>& FCrimeForgeJsonImporterValidatorRegistry::GetValidators() {
	return GRegisteredValidators;
}

const FCrimeForgeJsonImporterValidator* FCrimeForgeJsonImporterValidatorRegistry::Find(const FName Id) {
	return GRegisteredValidators.FindByPredicate([Id](const FCrimeForgeJsonImporterValidator& Validator) {
		return Validator.Id == Id;
	});
}

void FCrimeForgeJsonImporterValidatorRegistry::Open(const FName Id) {
	const FCrimeForgeJsonImporterValidator* Validator = Find(Id);

	if (Validator != nullptr && Validator->OnOpen.IsBound()) {
		Validator->OnOpen.Execute();
	}
}

void FCrimeForgeJsonImporterValidatorRegistry::OpenDefault() {
	if (GRegisteredValidators.Num() == 0) {
		return;
	}

	const FCrimeForgeJsonImporterValidator& Validator = GRegisteredValidators[0];

	if (Validator.OnOpen.IsBound()) {
		Validator.OnOpen.Execute();
	}
}

#endif
