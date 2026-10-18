#pragma once

#include "Commandlets/Commandlet.h"
#include "CrimeFactoryPALCommandlet.generated.h"

/** Runs the same PAL validation and manifest generation as the packaging UI. */
UCLASS()
class UCrimeFactoryPALCommandlet : public UCommandlet
{
	GENERATED_BODY()
public:
	UCrimeFactoryPALCommandlet();
	virtual int32 Main(const FString& Params) override;
};
