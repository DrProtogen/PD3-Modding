#pragma once

#include "Commandlets/Commandlet.h"
#include "PD3WwiseValidateCommandlet.generated.h"

/** Read-only asset inspection, plus an explicitly requested editor copy for cook regression tests. */
UCLASS()
class UPD3WwiseValidateCommandlet : public UCommandlet
{
	GENERATED_BODY()
public:
	UPD3WwiseValidateCommandlet();
	virtual int32 Main(const FString& Params) override;
};
