#include "CrimeForgeTabHandler.h"

#include "CrimeForgeGraphHandler.h"
#include "CrimeForgeFormatterGlobals.h"
#include "CrimeForgeFormatterUtils.h"
#include "Framework/Application/SlateApplication.h"
#include "Framework/Docking/TabManager.h"
#include "Misc/LazySingleton.h"
#include "GraphEditor.h"
#include "Widgets/Docking/SDockTab.h"

FCrimeForgeTabHandler& FCrimeForgeTabHandler::Get()
{
    return TLazySingleton<FCrimeForgeTabHandler>::Get();
}

void FCrimeForgeTabHandler::TearDown()
{
    TLazySingleton<FCrimeForgeTabHandler>::TearDown();
}

void FCrimeForgeTabHandler::Init()
{
    RefreshFromActiveTab();
}

void FCrimeForgeTabHandler::Tick(float DeltaTime)
{
    RefreshFromActiveTab();
    if (ActiveGraphHandler.IsValid())
    {
        ActiveGraphHandler->Tick(DeltaTime);
    }
}

void FCrimeForgeTabHandler::Cleanup()
{
    if (ActiveGraphHandler.IsValid())
    {
        ActiveGraphHandler->Cleanup();
    }
    ActiveGraphHandler.Reset();
    ActiveTab.Reset();
    ActiveGraphEditor.Reset();
}

TArray<TSharedPtr<FCrimeForgeGraphHandler>> FCrimeForgeTabHandler::GetAllGraphHandlers() const
{
    TArray<TSharedPtr<FCrimeForgeGraphHandler>> Out;
    if (ActiveGraphHandler.IsValid()) Out.Add(ActiveGraphHandler);
    return Out;
}

TSharedPtr<SGraphEditor> FCrimeForgeTabHandler::FindGraphEditor(TSharedPtr<SDockTab> Tab) const
{
    if (!Tab.IsValid()) return nullptr;
    return FCrimeForgeFormatterUtils::GetChildWidgetCasted<SGraphEditor>(Tab->GetContent(), TEXT("SGraphEditor"), true);
}

void FCrimeForgeTabHandler::ProcessTab(TSharedPtr<SDockTab> Tab)
{
    if (!Tab.IsValid()) return;
    TSharedPtr<SGraphEditor> GraphEditor = FindGraphEditor(Tab);
    if (!GraphEditor.IsValid()) return;

    if (ActiveGraphEditor.Pin() == GraphEditor && ActiveTab.Pin() == Tab && ActiveGraphHandler.IsValid())
    {
        return;
    }

    if (ActiveGraphHandler.IsValid()) ActiveGraphHandler->Cleanup();
    ActiveTab = Tab;
    ActiveGraphEditor = GraphEditor;
    ActiveGraphHandler = MakeShared<FCrimeForgeGraphHandler>(Tab, GraphEditor);
    ActiveGraphHandler->InitGraphHandler();
}

void FCrimeForgeTabHandler::RefreshFromActiveTab()
{
    if (!FSlateApplication::IsInitialized()) return;
    TSharedPtr<SDockTab> Tab = FGlobalTabmanager::Get()->GetActiveTab();
    if (Tab.IsValid()) ProcessTab(Tab);
}
