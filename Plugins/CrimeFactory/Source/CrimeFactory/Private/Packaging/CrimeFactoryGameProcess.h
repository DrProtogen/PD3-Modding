#pragma once

#include "CoreMinimal.h"

namespace CrimeFactoryGameProcess
{
    bool IsGameExecutable(const FString& Name);
    /** Close only identified PAYDAY 3 processes, never the editor, launchers or their process trees. */
    bool CloseBeforeForge(FString& OutError);
}
