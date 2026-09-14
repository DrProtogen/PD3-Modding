

#pragma once

#include "ParentDropdownBuilder.h"

struct ISelectedAssetToolsDropdownBuilder final : IParentDropdownBuilder {
	virtual void Build(FMenuBuilder& MenuBuilder) const override;
};