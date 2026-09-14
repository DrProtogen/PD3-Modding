

#pragma once

#include "ParentDropdownBuilder.h"
#include "Engine/Compatibility.h"

/* Validation is UE5 only */
#if ENGINE_UE5

/* Lists every validator registered with FCrimeForgeJsonImporterValidatorRegistry */
struct IValidationDropdownBuilder final : IParentDropdownBuilder {
	virtual void Build(FMenuBuilder& MenuBuilder) const override;
};

#endif
