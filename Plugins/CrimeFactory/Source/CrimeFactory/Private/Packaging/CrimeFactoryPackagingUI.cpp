#include "Packaging/CrimeFactoryPackagingUI.h"

#include "Editor/CrimeFactory.h"
#include "Framework/Application/SlateApplication.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformApplicationMisc.h"
#include "HAL/PlatformProcess.h"
#include "Misc/App.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Misc/ScopedSlowTask.h"
#include "Misc/ScopeExit.h"
#include "Styling/AppStyle.h"
#include "Styling/StyleColors.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/SWindow.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "CrimeFactoryPackagingUI"

void FCrimeFactoryPreflightResult::Add(ECrimeFactoryPreflightSeverity Severity, const FString& Message)
{
    Items.Add({Severity, Message});
    switch (Severity)
    {
    case ECrimeFactoryPreflightSeverity::Pass: ++PassCount; break;
    case ECrimeFactoryPreflightSeverity::Warning: ++WarningCount; break;
    case ECrimeFactoryPreflightSeverity::Error: ++ErrorCount; break;
    }
}

FString FCrimeFactoryPreflightResult::BuildReport(const FString& PluginName) const
{
    FString Report = FString::Printf(TEXT("CrimeFactory Preflight - %s\n\n%d passed    %d warning(s)    %d error(s)\n"),
        *PluginName, PassCount, WarningCount, ErrorCount);
    for (const FCrimeFactoryPreflightItem& Item : Items)
    {
        const TCHAR* Prefix = Item.Severity == ECrimeFactoryPreflightSeverity::Error ? TEXT("ERROR") :
            Item.Severity == ECrimeFactoryPreflightSeverity::Warning ? TEXT("WARN") : TEXT("PASS");
        Report += FString::Printf(TEXT("[%s] %s\n"), Prefix, *Item.Message);
    }
    return Report;
}

bool CrimeFactoryPackagingUI::RunSetup(const FString& BatchFile, const FString& Arguments,
    int32& OutReturnCode, FString& OutOutput, const FString& Action, const FString& Detail)
{
    check(IsInGameThread());
    OutReturnCode = INDEX_NONE;
    OutOutput.Reset();

    const bool bShowProgress = !IsRunningCommandlet() && !FApp::IsUnattended() && FSlateApplication::IsInitialized();
    FScopedSlowTask Progress(3.f, LOCTEXT("SetupTitle", "CrimeFactory — First-time setup"), bShowProgress);
    Progress.MakeDialog(); // No cancel: interrupting MSBuild/UAT can leave installed engine tools incomplete.
    Progress.EnterProgressFrame(1.f, LOCTEXT("SetupPrepare", "Step 1 of 3: Preparing setup…"));

    const FString SetupDirectory = FPaths::ConvertRelativePathToFull(
        FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("CrimeFactory/Setup")));
    const FString SetupId = FGuid::NewGuid().ToString(EGuidFormats::Digits);
    const FString WrapperPath = FPaths::Combine(SetupDirectory, TEXT("CrimeFactorySetup_") + SetupId + TEXT(".bat"));
    const FString CapturePath = FPaths::Combine(SetupDirectory, TEXT("CrimeFactorySetup_") + SetupId + TEXT(".log"));
    // File redirection avoids full-pipe deadlocks during verbose builds. Keep the log for support.
    const FString Wrapper = FString::Printf(TEXT("@echo off\r\ncall \"%s\" %s > \"%s\" 2>&1\r\nexit /b %%errorlevel%%\r\n"),
        *BatchFile, *Arguments, *CapturePath);
    if (!IFileManager::Get().MakeDirectory(*SetupDirectory, true) ||
        !FFileHelper::SaveStringToFile(Wrapper, *WrapperPath))
    {
        OutOutput = FString::Printf(TEXT("Cannot write CrimeFactory setup files in %s. Check folder permissions."), *SetupDirectory);
        return false;
    }
    ON_SCOPE_EXIT { IFileManager::Get().Delete(*WrapperPath, false, true, true); };

    UE_LOG(LogCrimeFactory, Display, TEXT("%s %s Setup output: %s"), *Action, *Detail, *CapturePath);
    Progress.EnterProgressFrame(1.f, FText::FromString(Action));
    const FString CmdArguments = FString::Printf(TEXT("/d /s /c \"\"%s\"\""), *WrapperPath);
    FProcHandle Process = FPlatformProcess::CreateProc(TEXT("cmd.exe"), *CmdArguments,
        false, true, true, nullptr, 0, nullptr, nullptr);
    if (!Process.IsValid())
    {
        OutOutput = TEXT("Could not start cmd.exe for CrimeFactory setup. Check process permissions and antivirus restrictions.");
        return false;
    }
    ON_SCOPE_EXIT { FPlatformProcess::CloseProc(Process); };

    const double Started = FPlatformTime::Seconds();
    int32 PreviousElapsed = INDEX_NONE;
    while (FPlatformProcess::IsProcRunning(Process))
    {
        const int32 Elapsed = static_cast<int32>(FPlatformTime::Seconds() - Started);
        if (Elapsed != PreviousElapsed)
        {
            PreviousElapsed = Elapsed;
            // Progress measures the three actual setup phases, not an invented build percentage.
            // The native main-bar caption has a fixed height; keep it to one line.
            Progress.FrameMessage = FText::Format(LOCTEXT("SetupRunning",
                "Step 2 of 3: {0} ({1}m {2}s elapsed)"),
                FText::FromString(Action), FText::AsNumber(Elapsed / 60), FText::AsNumber(Elapsed % 60));
        }
        Progress.TickProgress(); // Pumps native slow-task feedback while the child runs.
        FPlatformProcess::Sleep(0.05f);
    }
    if (!FPlatformProcess::GetProcReturnCode(Process, &OutReturnCode)) OutReturnCode = INDEX_NONE;
    Progress.EnterProgressFrame(1.f, LOCTEXT("SetupReadResults", "Step 3 of 3: Reading setup results…"));
    if (!FFileHelper::LoadFileToString(OutOutput, *CapturePath))
    {
        OutReturnCode = INDEX_NONE;
        OutOutput = FString::Printf(TEXT("Setup finished but its output could not be read: %s"), *CapturePath);
    }
    UE_LOG(LogCrimeFactory, Display, TEXT("CrimeFactory setup exited with code %d. Full output: %s"), OutReturnCode, *CapturePath);
    // Callers still validate the generated DLL/command registration or UnrealPak executable.
    return true;
}

namespace
{
    FSlateColor SeverityColor(ECrimeFactoryPreflightSeverity Severity)
    {
        return Severity == ECrimeFactoryPreflightSeverity::Error ? FStyleColors::Error :
            Severity == ECrimeFactoryPreflightSeverity::Warning ? FStyleColors::Warning : FStyleColors::Success;
    }

    const FSlateBrush* SeverityIcon(ECrimeFactoryPreflightSeverity Severity)
    {
        return FAppStyle::GetBrush(Severity == ECrimeFactoryPreflightSeverity::Error ? "Icons.Error" :
            Severity == ECrimeFactoryPreflightSeverity::Warning ? "Icons.Warning" : "Icons.Check");
    }

    TSharedRef<SWidget> SummaryCard(const FText& Label, const FText& Value, ECrimeFactoryPreflightSeverity Severity)
    {
        return SNew(SBorder).BorderImage(FAppStyle::GetBrush("WhiteBrush")).BorderBackgroundColor(FStyleColors::Recessed)
            .Padding(FMargin(16, 10))
            [
                SNew(SVerticalBox)
                + SVerticalBox::Slot().AutoHeight()
                [ SNew(STextBlock).Text(Value).AutoWrapText(true).Font(FAppStyle::GetFontStyle("HeadingSmall"))
                    .ColorAndOpacity(SeverityColor(Severity)) ]
                + SVerticalBox::Slot().AutoHeight().Padding(0, 2, 0, 0)
                [ SNew(STextBlock).Text(Label) ]
            ];
    }

    TSharedRef<SWidget> SummaryCard(const FText& Label, int32 Count, ECrimeFactoryPreflightSeverity Severity)
    {
        return SummaryCard(Label, FText::AsNumber(Count), Severity);
    }

    TSharedRef<SWidget> DialogHeader(const FString& PluginName, const FText& Section,
        const FText& Status, const FText& Help, ECrimeFactoryPreflightSeverity Severity)
    {
        return SNew(SVerticalBox)
            + SVerticalBox::Slot().AutoHeight()
            [ SNew(STextBlock).Text(Section).ColorAndOpacity(FStyleColors::ForegroundHeader)
                .Font(FAppStyle::GetFontStyle("SmallFont")) ]
            + SVerticalBox::Slot().AutoHeight().Padding(0, 8, 0, 4)
            [ SNew(STextBlock).Text(FText::FromString(PluginName)).AutoWrapText(true)
                .Font(FAppStyle::GetFontStyle("HeadingMedium")) ]
            + SVerticalBox::Slot().AutoHeight().Padding(0, 4, 0, 0)
            [ SNew(STextBlock).Text(Status).AutoWrapText(true)
                .Font(FAppStyle::GetFontStyle("BoldFont")).ColorAndOpacity(SeverityColor(Severity)) ]
            + SVerticalBox::Slot().AutoHeight().Padding(0, 6, 0, 18)
            [ SNew(STextBlock).Text(Help).AutoWrapText(true) ];
    }

    TSharedRef<SWidget> CopyReportButton(const FString& Report)
    {
        return SNew(SButton).Text(LOCTEXT("CopyReport", "Copy report"))
            .ToolTipText(LOCTEXT("CopyReportHelp", "Copy the complete report, including technical details and asset paths."))
            .OnClicked_Lambda([Report] { FPlatformApplicationMisc::ClipboardCopy(*Report); return FReply::Handled(); });
    }

    TSharedRef<SWidget> MessagePanel(const FString& Message, ECrimeFactoryPreflightSeverity Severity)
    {
        return SNew(SBorder).BorderImage(FAppStyle::GetBrush("WhiteBrush")).BorderBackgroundColor(FStyleColors::Recessed).Padding(12)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Top).Padding(0, 2, 10, 0)
            [ SNew(SImage).Image(SeverityIcon(Severity)).ColorAndOpacity(SeverityColor(Severity)) ]
            + SHorizontalBox::Slot().FillWidth(1)
            [ SNew(STextBlock).Text(FText::FromString(Message)).AutoWrapText(true) ]
        ];
    }

    TSharedRef<SWidget> CheckRows(const FCrimeFactoryPreflightResult& Result, ECrimeFactoryPreflightSeverity Severity)
    {
        const TSharedRef<SVerticalBox> Rows = SNew(SVerticalBox);
        for (const FCrimeFactoryPreflightItem& Item : Result.Items)
        {
            if (Item.Severity != Severity) continue;
            Rows->AddSlot().AutoHeight().Padding(0, 0, 0, 6)
            [
                MessagePanel(Item.Message, Severity)
            ];
        }
        return Rows;
    }

    class SPreflightWindow : public SWindow
    {
    public:
        virtual FReply OnKeyDown(const FGeometry& Geometry, const FKeyEvent& Event) override
        {
            if (Event.GetKey() == EKeys::Escape)
            {
                RequestDestroyWindow(); // Closing never authorizes packaging.
                return FReply::Handled();
            }
            return SWindow::OnKeyDown(Geometry, Event);
        }
    };
}

TSharedRef<SWidget> CrimeFactoryPackagingUI::MakeHeader(const FString& Name, const FText& Section,
    const FText& Status, const FText& Help, ECrimeFactoryPreflightSeverity Severity)
{
    return DialogHeader(Name, Section, Status, Help, Severity);
}

TSharedRef<SWidget> CrimeFactoryPackagingUI::MakeSummaryCard(const FText& Label, const FText& Value, ECrimeFactoryPreflightSeverity Severity)
{
    return SummaryCard(Label, Value, Severity);
}

TSharedRef<SWidget> CrimeFactoryPackagingUI::MakeMessagePanel(const FString& Message, ECrimeFactoryPreflightSeverity Severity)
{
    return MessagePanel(Message, Severity);
}

TSharedRef<SWidget> CrimeFactoryPackagingUI::MakeCopyReportButton(const FString& Report)
{
    return CopyReportButton(Report);
}

TSharedRef<SWidget> CrimeFactoryPackagingUI::MakePreflightContent(const FString& PluginName,
    const FCrimeFactoryPreflightResult& Result, const TDelegate<void(bool)>& OnDecision)
{
    const bool bBlocked = Result.HasErrors();
    const ECrimeFactoryPreflightSeverity Status = bBlocked ? ECrimeFactoryPreflightSeverity::Error :
        Result.WarningCount ? ECrimeFactoryPreflightSeverity::Warning : ECrimeFactoryPreflightSeverity::Pass;
    const TSharedRef<SVerticalBox> Checks = SNew(SVerticalBox);
    if (Result.ErrorCount)
    {
        Checks->AddSlot().AutoHeight().Padding(0, 0, 0, 6)
            [ SNew(STextBlock).Text(LOCTEXT("Errors", "Fix before packaging")).Font(FAppStyle::GetFontStyle("BoldFont")) ];
        Checks->AddSlot().AutoHeight()[CheckRows(Result, ECrimeFactoryPreflightSeverity::Error)];
    }
    if (Result.WarningCount)
    {
        Checks->AddSlot().AutoHeight().Padding(0, 8, 0, 6)
            [ SNew(STextBlock).Text(LOCTEXT("Warnings", "Review these warnings")).Font(FAppStyle::GetFontStyle("BoldFont")) ];
        Checks->AddSlot().AutoHeight()[CheckRows(Result, ECrimeFactoryPreflightSeverity::Warning)];
    }
    if (Result.PassCount)
    {
        Checks->AddSlot().AutoHeight().Padding(0, 8, 0, 0)
        [
            SNew(SExpandableArea).InitiallyCollapsed(Result.ErrorCount + Result.WarningCount > 0)
            .AreaTitle(LOCTEXT("PassedChecks", "Passed checks")).Padding(FMargin(0, 8))
            .BodyContent()[CheckRows(Result, ECrimeFactoryPreflightSeverity::Pass)]
        ];
    }
    const FString Report = Result.BuildReport(PluginName);
    return SNew(SBorder).BorderImage(FAppStyle::GetBrush("WhiteBrush")).BorderBackgroundColor(FStyleColors::Panel).Padding(24)
    [
        SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight()
        [ DialogHeader(PluginName, LOCTEXT("Eyebrow", "CRIMEFACTORY  /  PACKAGING CHECK"),
            bBlocked ? LOCTEXT("Blocked", "Packaging needs your attention") :
                Result.WarningCount ? LOCTEXT("ReadyWarnings", "Ready to package — review warnings below") : LOCTEXT("Ready", "Ready to package"),
            bBlocked ? LOCTEXT("BlockedHelp", "Fix the errors below, then run Forge Selected! again.") :
                LOCTEXT("ReadyHelp", "The selected mods passed the required checks. Continue to close PAYDAY 3 if it is running and begin forging."), Status) ]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 18)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot().FillWidth(1).Padding(0, 0, 6, 0)
                [SummaryCard(LOCTEXT("Passed", "Passed"), Result.PassCount, ECrimeFactoryPreflightSeverity::Pass)]
            + SHorizontalBox::Slot().FillWidth(1).Padding(0, 0, 6, 0)
                [SummaryCard(LOCTEXT("WarningsCount", "Warnings"), Result.WarningCount, ECrimeFactoryPreflightSeverity::Warning)]
            + SHorizontalBox::Slot().FillWidth(1)
                [SummaryCard(LOCTEXT("ErrorsCount", "Errors"), Result.ErrorCount, ECrimeFactoryPreflightSeverity::Error)]
        ]
        + SVerticalBox::Slot().FillHeight(1)
        [ SNew(SScrollBox) + SScrollBox::Slot()[Checks] ]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 18, 0, 0)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot().AutoWidth()
            [ CopyReportButton(Report) ]
            + SHorizontalBox::Slot().FillWidth(1)[SNullWidget::NullWidget]
            + SHorizontalBox::Slot().AutoWidth().Padding(8, 0)
            [ SNew(SButton).Text(bBlocked ? LOCTEXT("Close", "Close") : LOCTEXT("Cancel", "Cancel"))
                .OnClicked_Lambda([OnDecision] { OnDecision.ExecuteIfBound(false); return FReply::Handled(); }) ]
            + SHorizontalBox::Slot().AutoWidth()
            [ SNew(SButton).ButtonStyle(FAppStyle::Get(), "PrimaryButton")
                .Text(LOCTEXT("Continue", "Continue packaging")).IsEnabled(!bBlocked)
                .ToolTipText(bBlocked ? LOCTEXT("FixFirst", "Resolve the blocking errors before packaging.") : LOCTEXT("Begin", "Start cooking and packaging this mod."))
                .OnClicked_Lambda([OnDecision, bBlocked] { if (!bBlocked) OnDecision.ExecuteIfBound(true); return FReply::Handled(); }) ]
        ]
    ];
}

bool CrimeFactoryPackagingUI::ConfirmPreflight(const FString& PluginName, const FCrimeFactoryPreflightResult& Result)
{
    if (!FSlateApplication::IsInitialized() || IsRunningCommandlet() || FApp::IsUnattended() ||
        !FSlateApplication::Get().CanDisplayWindows()) return false;
    const TSharedRef<bool> Decision = MakeShared<bool>(false);
    const TSharedRef<SPreflightWindow> Window = SNew(SPreflightWindow)
        .Title(LOCTEXT("PreflightTitle", "CrimeFactory · Preflight"))
        .ClientSize(FVector2D(760, 680)).SizingRule(ESizingRule::UserSized)
        .MinWidth(540).MinHeight(420).SupportsMaximize(false).SupportsMinimize(false);
    // Weak capture avoids a window -> content -> window reference cycle on close or plugin shutdown.
    const TWeakPtr<SWindow> WeakWindow = Window;
    Window->SetContent(MakePreflightContent(PluginName, Result, TDelegate<void(bool)>::CreateLambda(
        [Decision, WeakWindow, bBlocked = Result.HasErrors()](bool bAccept)
        {
            *Decision = bAccept && !bBlocked;
            if (const TSharedPtr<SWindow> Pinned = WeakWindow.Pin()) Pinned->RequestDestroyWindow();
        })));
    FSlateApplication::Get().AddModalWindow(Window, FSlateApplication::Get().GetActiveTopLevelWindow());
    return *Decision;
}

FString FCrimeFactoryPackagingFailure::BuildReport() const
{
    FString Report = FString::Printf(
        TEXT("CrimeFactory - Forging failed\n\nMod: %s\nResult: %s\nPhase: %s\nCategory: %s\nMode: %s\nChunk: %s\nRuntime: %.1f seconds\n\nWhat happened:\n%s\n\nWhat to try:\n%s\n"),
        *PluginName, *ResultType, *Phase, *Category, *Mode, *ChunkId, RunTime, *Message, *Suggestion);
    if (RemainingModCount > 0)
        Report += FString::Printf(TEXT("\nBatch stopped: %d remaining selected mod(s) were not packaged.\n"), RemainingModCount);
    Report += TEXT("\nException type:\n") + ExceptionType + TEXT("\n\nTechnical details:\n") + Details;
    Report += TEXT("\n\nRelevant log lines:\n") + RelevantLogLines;
    Report += TEXT("\n\nFull log:\n") + LogFile + TEXT("\n\nLog folder:\n") + LogFolder;
    Report += TEXT("\n\nStructured result:\n") + ResultFile;
    return Report;
}

TSharedRef<SWidget> CrimeFactoryPackagingUI::MakeFailureContent(const FCrimeFactoryPackagingFailure& Failure, const FSimpleDelegate& OnClose)
{
    const FString Message = Failure.Message.IsEmpty() ? TEXT("No exception message was recorded. Open the full log for more information.") : Failure.Message;
    const FString Suggestion = Failure.Suggestion.IsEmpty() ? TEXT("Review the relevant log lines below, fix the reported problem, then run Forge Selected! again.") : Failure.Suggestion;
    const FString TechnicalDetails = FString::Printf(
        TEXT("Result: %s\nPhase: %s\nCategory: %s\nMode: %s\nChunk: %s\nException: %s\n\n%s\n\nFull log: %s\nLog folder: %s\nStructured result: %s"),
        *Failure.ResultType, *Failure.Phase, *Failure.Category, *Failure.Mode, *Failure.ChunkId,
        *Failure.ExceptionType, *Failure.Details, *Failure.LogFile, *Failure.LogFolder, *Failure.ResultFile);
    const bool bHasLog = !Failure.LogFile.IsEmpty() && IFileManager::Get().FileExists(*Failure.LogFile);
    const bool bHasFolder = !Failure.LogFolder.IsEmpty() && IFileManager::Get().DirectoryExists(*Failure.LogFolder);
    return SNew(SBorder).BorderImage(FAppStyle::GetBrush("WhiteBrush")).BorderBackgroundColor(FStyleColors::Panel).Padding(24)
    [
        SNew(SVerticalBox)
        + SVerticalBox::Slot().AutoHeight()
        [ DialogHeader(Failure.PluginName, LOCTEXT("ForgeSection", "CRIMEFACTORY  /  FORGING RESULT"),
            LOCTEXT("ForgeFailed", "Forging failed"), LOCTEXT("FailureHelp", "Review the error and suggested next steps, then run Forge Selected! again."),
            ECrimeFactoryPreflightSeverity::Error) ]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 18)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot().FillWidth(1).Padding(0, 0, 6, 0)
            [ SummaryCard(LOCTEXT("FailedStage", "Failed stage"), FText::FromString(Failure.Phase.IsEmpty() ? TEXT("Unknown") : Failure.Phase), ECrimeFactoryPreflightSeverity::Error) ]
            + SHorizontalBox::Slot().FillWidth(1).Padding(0, 0, 6, 0)
            [ SummaryCard(LOCTEXT("FailureType", "Failure type"), FText::FromString(Failure.Category.IsEmpty() ? TEXT("Unknown") : Failure.Category), ECrimeFactoryPreflightSeverity::Error) ]
            + SHorizontalBox::Slot().FillWidth(1)
            [ SummaryCard(LOCTEXT("Elapsed", "Elapsed"), FText::FromString(FString::Printf(TEXT("%.1f s"), Failure.RunTime)), ECrimeFactoryPreflightSeverity::Error) ]
        ]
        + SVerticalBox::Slot().FillHeight(1)
        [
            SNew(SScrollBox)
            + SScrollBox::Slot()
            [
                SNew(SVerticalBox)
                + SVerticalBox::Slot().AutoHeight().Padding(0, 0, 0, 6)
                [ SNew(STextBlock).Text(LOCTEXT("WhatHappened", "What happened")).Font(FAppStyle::GetFontStyle("BoldFont")) ]
                + SVerticalBox::Slot().AutoHeight()
                [ SNew(SBox).MaxDesiredHeight(160)
                    [ SNew(SScrollBox) + SScrollBox::Slot()[MessagePanel(Message, ECrimeFactoryPreflightSeverity::Error)] ] ]
                + SVerticalBox::Slot().AutoHeight().Padding(0, 12, 0, 6)
                [ SNew(STextBlock).Text(LOCTEXT("WhatToTry", "What to try")).Font(FAppStyle::GetFontStyle("BoldFont")) ]
                + SVerticalBox::Slot().AutoHeight()
                [ MessagePanel(Suggestion, ECrimeFactoryPreflightSeverity::Warning) ]
                + SVerticalBox::Slot().AutoHeight().Padding(0, 12, 0, 0)
                [
                    SNew(SBox).Visibility(Failure.RemainingModCount > 0 ? EVisibility::Visible : EVisibility::Collapsed)
                    [ MessagePanel(FString::Printf(TEXT("Batch stopped: %d remaining selected mod(s) were not packaged."), Failure.RemainingModCount),
                        ECrimeFactoryPreflightSeverity::Warning) ]
                ]
                + SVerticalBox::Slot().AutoHeight().Padding(0, 12, 0, 0)
                [
                    SNew(SExpandableArea).AreaTitle(LOCTEXT("RelevantLog", "Relevant log lines")).InitiallyCollapsed(false).Padding(FMargin(0, 8))
                    .BodyContent()
                    [ SNew(SBox).MinDesiredHeight(90).MaxDesiredHeight(180)
                        [ SNew(SMultiLineEditableTextBox).IsReadOnly(true).AutoWrapText(true)
                            .Font(FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("MonospacedText").Font)
                            .Text(FText::FromString(Failure.RelevantLogLines.IsEmpty() ? TEXT("No relevant log lines were available. Open the full log if one is available.") : Failure.RelevantLogLines)) ] ]
                ]
                + SVerticalBox::Slot().AutoHeight().Padding(0, 12, 0, 0)
                [
                    SNew(SExpandableArea).AreaTitle(LOCTEXT("TechnicalDetails", "Technical details")).InitiallyCollapsed(true).Padding(FMargin(0, 8))
                    .BodyContent()
                    [ SNew(SBox).MinDesiredHeight(100).MaxDesiredHeight(240)
                        [ SNew(SMultiLineEditableTextBox).IsReadOnly(true).AutoWrapText(true)
                            .Font(FAppStyle::Get().GetWidgetStyle<FTextBlockStyle>("MonospacedText").Font).Text(FText::FromString(TechnicalDetails)) ] ]
                ]
            ]
        ]
        + SVerticalBox::Slot().AutoHeight().Padding(0, 18, 0, 0)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot().AutoWidth()[CopyReportButton(Failure.BuildReport())]
            + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
            [ SNew(SButton).Text(LOCTEXT("OpenFullLog", "Open full log")).IsEnabled(bHasLog)
                .ToolTipText(FText::FromString(bHasLog ? Failure.LogFile : TEXT("No full log is available for this run.")))
                .OnClicked_Lambda([Path = Failure.LogFile]
                {
                    if (IFileManager::Get().FileExists(*Path)) FPlatformProcess::LaunchFileInDefaultExternalApplication(*Path);
                    return FReply::Handled();
                }) ]
            + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
            [ SNew(SButton).Text(LOCTEXT("OpenLogFolder", "Open log folder")).IsEnabled(bHasFolder)
                .ToolTipText(FText::FromString(bHasFolder ? Failure.LogFolder : TEXT("No log folder is available for this run.")))
                .OnClicked_Lambda([Path = Failure.LogFolder]
                {
                    if (IFileManager::Get().DirectoryExists(*Path)) FPlatformProcess::ExploreFolder(*Path);
                    return FReply::Handled();
                }) ]
            + SHorizontalBox::Slot().FillWidth(1)[SNullWidget::NullWidget]
            + SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 0, 0)
            [ SNew(SButton).ButtonStyle(FAppStyle::Get(), "PrimaryButton").Text(LOCTEXT("Close", "Close"))
                .OnClicked_Lambda([OnClose] { OnClose.ExecuteIfBound(); return FReply::Handled(); }) ]
        ]
    ];
}

void CrimeFactoryPackagingUI::ShowFailure(const FCrimeFactoryPackagingFailure& Failure)
{
    check(IsInGameThread());
    if (!FSlateApplication::IsInitialized() || IsRunningCommandlet() || FApp::IsUnattended() ||
        !FSlateApplication::Get().CanDisplayWindows())
    {
        UE_LOG(LogCrimeFactory, Error, TEXT("%s"), *Failure.BuildReport());
        return;
    }
    const TSharedRef<SPreflightWindow> Window = SNew(SPreflightWindow)
        .Title(FText::Format(LOCTEXT("FailureTitle", "CrimeFactory · Forging failed — {0}"), FText::FromString(Failure.PluginName)))
        .ClientSize(FVector2D(840, 760)).MinWidth(620).MinHeight(480)
        .SupportsMaximize(true).SupportsMinimize(false);
    const TWeakPtr<SWindow> WeakWindow = Window;
    Window->SetContent(MakeFailureContent(Failure, FSimpleDelegate::CreateLambda([WeakWindow]
    {
        if (const TSharedPtr<SWindow> Pinned = WeakWindow.Pin()) Pinned->RequestDestroyWindow();
    })));
    FSlateApplication::Get().AddWindow(Window);
}

#undef LOCTEXT_NAMESPACE
