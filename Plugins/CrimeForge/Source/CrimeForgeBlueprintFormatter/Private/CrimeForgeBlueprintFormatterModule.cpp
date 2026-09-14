#include "CrimeForgeBlueprintFormatterModule.h"

#include "CrimeForgeFormatterGlobals.h"
#include "CrimeForgeTabHandler.h"
#include "Containers/Ticker.h"
#include "Framework/Application/SlateApplication.h"

DEFINE_LOG_CATEGORY(LogCrimeForgeBlueprintFormatter);

void FCrimeForgeBlueprintFormatterModule::StartupModule()
{
    if (!IsRunningCommandlet() && FSlateApplication::IsInitialized())
    {
        FCrimeForgeTabHandler::Get().Init();
        TickerHandle = FTSTicker::GetCoreTicker().AddTicker(
            FTickerDelegate::CreateRaw(this, &FCrimeForgeBlueprintFormatterModule::Tick));
    }
}

void FCrimeForgeBlueprintFormatterModule::ShutdownModule()
{
    if (TickerHandle.IsValid())
    {
        FTSTicker::GetCoreTicker().RemoveTicker(TickerHandle);
        TickerHandle.Reset();
    }

    if (FSlateApplication::IsInitialized())
    {
        FCrimeForgeTabHandler::Get().Cleanup();
    }
    FCrimeForgeTabHandler::TearDown();
}

bool FCrimeForgeBlueprintFormatterModule::Tick(float DeltaTime)
{
    FCrimeForgeTabHandler::Get().Tick(DeltaTime);
    return true;
}

IMPLEMENT_MODULE(FCrimeForgeBlueprintFormatterModule, CrimeForgeBlueprintFormatter)
