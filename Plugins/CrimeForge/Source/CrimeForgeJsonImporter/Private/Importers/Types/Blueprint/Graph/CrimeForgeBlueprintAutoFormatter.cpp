

#include "Importers/Types/Blueprint/Graph/CrimeForgeBlueprintAutoFormatter.h"

#include "CrimeForgeBlueprintFormatter.h"

#include "Editor.h"
#include "Engine/Package.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Modules/ModuleManager.h"
#include "Containers/Ticker.h"

#include "EdGraph/EdGraph.h"
#include "Engine/Blueprint.h"

#include "Engine/Log.h"

TArray<FCrimeForgeBlueprintAutoFormatter::FFormatJob> FCrimeForgeBlueprintAutoFormatter::PendingJobs;
FTSTicker::FDelegateHandle FCrimeForgeBlueprintAutoFormatter::TickerHandle;

namespace
{
    constexpr double GraphHandlerTimeoutSeconds = 8.0;
    constexpr double FormattingTimeoutSeconds = 20.0;

}

void FCrimeForgeBlueprintAutoFormatter::Enqueue(UBlueprint* Blueprint, const bool bSaveWhenFinished)
{
    if (!Blueprint)
    {
        return;
    }

    // The integrated formatter is editor-only. Loading it here guarantees the live graph bridge is ready before generated graphs are focused.
    if (!FModuleManager::Get().LoadModule(FName(TEXT("CrimeForgeBlueprintFormatter"))))
    {
        UE_LOG(LogCrimeForgeJsonImporter, Warning,
            TEXT("CrimeForge Blueprint formatter skipped for %s because the CrimeForgeBlueprintFormatter module could not be loaded"),
            *Blueprint->GetName());
        return;
    }

    FFormatJob Job;
    Job.Blueprint = Blueprint;
    Job.bSaveWhenFinished = bSaveWhenFinished;

    auto AddGraph = [&Job](UEdGraph* Graph)
    {
        if (Graph && Graph->Nodes.Num() > 0)
        {
            Job.Graphs.AddUnique(Graph);
        }
    };

    // These are the graphs CrimeForge JSON Importer currently reconstructs. Avoid delegate-signature and other
    // generated utility graphs; we only want the editable Event Graph and normal function graphs.
    for (UEdGraph* Graph : Blueprint->UbergraphPages)
    {
        AddGraph(Graph);
    }

    for (UEdGraph* Graph : Blueprint->FunctionGraphs)
    {
        AddGraph(Graph);
    }

    if (Job.Graphs.Num() == 0)
    {
        return;
    }

    Job.StateStartSeconds = FPlatformTime::Seconds();
    PendingJobs.Add(MoveTemp(Job));

    UE_LOG(LogCrimeForgeJsonImporter, Display,
        TEXT("CrimeForge Blueprint formatter queued for %s (%d graph%s)"),
        *Blueprint->GetName(),
        PendingJobs.Last().Graphs.Num(),
        PendingJobs.Last().Graphs.Num() == 1 ? TEXT("") : TEXT("s"));

    EnsureTicker();
}

void FCrimeForgeBlueprintAutoFormatter::EnsureTicker()
{
    if (TickerHandle.IsValid())
    {
        return;
    }

    TickerHandle = FTSTicker::GetCoreTicker().AddTicker(
        FTickerDelegate::CreateStatic(&FCrimeForgeBlueprintAutoFormatter::Tick));
}

void FCrimeForgeBlueprintAutoFormatter::FinishCurrentJob()
{
    if (PendingJobs.Num() == 0)
    {
        return;
    }

    FFormatJob& Job = PendingJobs[0];
    if (UBlueprint* Blueprint = Job.Blueprint.Get())
    {
        if (Job.bSaveWhenFinished)
        {
            SavePackage(Blueprint->GetPackage());
        }

        UE_LOG(LogCrimeForgeJsonImporter, Display,
            TEXT("CrimeForge Blueprint formatter finished for %s"),
            *Blueprint->GetName());
    }

    PendingJobs.RemoveAt(0);
}

bool FCrimeForgeBlueprintAutoFormatter::Tick(float DeltaSeconds)
{
    if (PendingJobs.Num() == 0)
    {
        TickerHandle.Reset();
        return false;
    }

    FFormatJob& Job = PendingJobs[0];
    UBlueprint* Blueprint = Job.Blueprint.Get();
    if (!Blueprint)
    {
        FinishCurrentJob();
        return true;
    }

    while (Job.GraphIndex < Job.Graphs.Num() && !Job.Graphs[Job.GraphIndex].IsValid())
    {
        ++Job.GraphIndex;
    }

    if (Job.GraphIndex >= Job.Graphs.Num())
    {
        FinishCurrentJob();
        return true;
    }

    UEdGraph* Graph = Job.Graphs[Job.GraphIndex].Get();
    const double Now = FPlatformTime::Seconds();

    switch (Job.State)
    {
    case EJobState::FocusGraph:
        UE_LOG(LogCrimeForgeJsonImporter, Display,
            TEXT("CrimeForge Blueprint formatter: opening %s.%s"),
            *Blueprint->GetName(), *Graph->GetName());

        // This opens the Blueprint editor if necessary and selects the requested graph. The
        // integrated formatter then discovers the live SGraphEditor and prepares its layout state.
        FKismetEditorUtilities::BringKismetToFocusAttentionOnObject(Graph, false);

        Job.State = EJobState::WaitForGraphHandler;
        Job.StateStartSeconds = Now;
        break;

    case EJobState::WaitForGraphHandler:
        if (FCrimeForgeBlueprintFormatter::IsGraphReady(Graph))
        {
            UE_LOG(LogCrimeForgeJsonImporter, Display,
                TEXT("CrimeForge Blueprint formatter: formatting %s.%s"),
                *Blueprint->GetName(), *Graph->GetName());

            if (FCrimeForgeBlueprintFormatter::RequestFormatAll(Graph))
            {
                Job.State = EJobState::WaitForFormatting;
                Job.StateStartSeconds = Now;
                break;
            }
        }

        if ((Now - Job.StateStartSeconds) > GraphHandlerTimeoutSeconds)
        {
            UE_LOG(LogCrimeForgeJsonImporter, Warning,
                TEXT("CrimeForge Blueprint formatter timed out waiting for graph handler: %s.%s"),
                *Blueprint->GetName(), *Graph->GetName());

            ++Job.GraphIndex;
            Job.State = EJobState::FocusGraph;
            Job.StateStartSeconds = Now;
        }
        break;

    case EJobState::WaitForFormatting:
        {
            bool bIsFormatting = false;
            if (FCrimeForgeBlueprintFormatter::GetFormattingState(Graph, bIsFormatting) && !bIsFormatting)
            {
                UE_LOG(LogCrimeForgeJsonImporter, Display,
                    TEXT("CrimeForge Blueprint formatter: completed %s.%s"),
                    *Blueprint->GetName(), *Graph->GetName());

                ++Job.GraphIndex;
                Job.State = EJobState::FocusGraph;
                Job.StateStartSeconds = Now;
                break;
            }
        }

        if ((Now - Job.StateStartSeconds) > FormattingTimeoutSeconds)
        {
            UE_LOG(LogCrimeForgeJsonImporter, Warning,
                TEXT("CrimeForge Blueprint formatter timed out while formatting: %s.%s"),
                *Blueprint->GetName(), *Graph->GetName());

            ++Job.GraphIndex;
            Job.State = EJobState::FocusGraph;
            Job.StateStartSeconds = Now;
        }
        break;
    }

    return true;
}
