#pragma once

#include "CoreMinimal.h"

struct FSlateDynamicImageBrush;

namespace CrimeFactoryModIcon
{
    /** Decode current bytes into a uniquely named Slate resource, avoiding filename texture-cache staleness. */
    TSharedPtr<FSlateDynamicImageBrush> Load(const FString& Filename);
}
