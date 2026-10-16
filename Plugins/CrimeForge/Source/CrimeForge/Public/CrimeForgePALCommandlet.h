#pragma once

#include "Commandlets/Commandlet.h"
#include "CrimeForgePALCommandlet.generated.h"

/** Runs the same PAL validation and manifest generation as the packaging UI. */
UCLASS()
class UCrimeForgePALCommandlet : public UCommandlet
{
	GENERATED_BODY()
public:
	UCrimeForgePALCommandlet();
	virtual int32 Main(const FString& Params) override;
};
