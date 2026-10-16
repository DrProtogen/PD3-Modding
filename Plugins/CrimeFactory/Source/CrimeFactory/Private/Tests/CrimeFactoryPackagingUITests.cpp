#if WITH_DEV_AUTOMATION_TESTS

#include "Packaging/CrimeFactoryPackagingUI.h"
#include "Information/SCrimeFactoryModInspector.h"
#include "Packaging/CrimeFactoryUpdaterUI.h"
#include "Packaging/CrimeFactoryGameProcess.h"
#include "CrimeFactorySettings.h"
#include "Framework/Application/SlateApplication.h"
#include "HAL/FileManager.h"
#include "HAL/PlatformProcess.h"
#include "HAL/PlatformTime.h"
#include "ImageUtils.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/App.h"
#include "Misc/AutomationTest.h"
#include "Misc/CommandLine.h"
#include "Misc/FileHelper.h"
#include "Misc/FeedbackContext.h"
#include "Misc/Paths.h"
#include "Misc/ScopeExit.h"
#include "Misc/SlowTask.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SMultiLineEditableTextBox.h"
#include "Widgets/SWindow.h"
#include "Widgets/Text/STextBlock.h"

namespace
{
    bool ContainsText(const TSharedRef<SWidget>& Widget, const FString& Text)
    {
        if (Widget->GetType() == FName("STextBlock") && StaticCastSharedRef<STextBlock>(Widget)->GetText().ToString() == Text) return true;
        FChildren* Children = Widget->GetChildren();
        for (int32 Index = 0; Index < Children->Num(); ++Index)
            if (ContainsText(Children->GetChildAt(Index), Text)) return true;
        return false;
    }

    TSharedPtr<SButton> FindButton(const TSharedRef<SWidget>& Widget, const FString& Label)
    {
        if (Widget->GetType() == FName("SButton") && ContainsText(Widget, Label)) return StaticCastSharedRef<SButton>(Widget);
        FChildren* Children = Widget->GetChildren();
        for (int32 Index = 0; Index < Children->Num(); ++Index)
            if (const TSharedPtr<SButton> Found = FindButton(Children->GetChildAt(Index), Label)) return Found;
        return nullptr;
    }

    void CapturePreview(FAutomationTestBase& Test, const TSharedRef<SWidget>& Widget, const FString& Filename)
    {
        FString Directory;
        if (!FParse::Value(FCommandLine::Get(), TEXT("CrimeFactoryPackagingUIPreview="), Directory)) return;
        IFileManager::Get().MakeDirectory(*Directory, true);
        const TSharedRef<SWindow> Window = SNew(SWindow).Title(FText::FromString(TEXT("CrimeFactory Packaging Preview")))
            .ClientSize(FVector2D(840, 760)).SupportsMaximize(false).SupportsMinimize(false)[Widget];
        FSlateApplication::Get().AddWindow(Window);
        ON_SCOPE_EXIT { Window->RequestDestroyWindow(); };
        FSlateApplication::Get().Tick();
        TArray<FColor> Pixels;
        FIntVector Size;
        if (!Test.TestTrue(TEXT("Packaging window rendered"), FSlateApplication::Get().TakeScreenshot(Window, Pixels, Size))) return;
        TArray64<uint8> Png;
        FImageUtils::PNGCompressImageArray(Size.X, Size.Y, Pixels, Png);
        Test.TestTrue(TEXT("Packaging preview saved"), FFileHelper::SaveArrayToFile(Png, *FPaths::Combine(Directory, Filename)));
    }
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCrimeFactoryPreflightUITest, "CrimeFactory.Packaging.PreflightDialog",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FCrimeFactoryPreflightUITest::RunTest(const FString& Parameters)
{
    // FApp treats automation as unattended even without -unattended. The opt-in UI pass
    // temporarily clears that flag so it can exercise the same dialogs as a user click.
    const bool bInteractive = FParse::Param(FCommandLine::Get(), TEXT("CrimeFactoryPackagingModalTest"));
    TGuardValue<bool> AutomationGuard(GIsAutomationTesting, bInteractive ? false : GIsAutomationTesting);
    FCrimeFactoryPreflightResult Result;
    Result.Pass(TEXT("Plugin descriptor exists."));
    Result.Pass(TEXT("All PAL explicit references resolve to packages on disk."));
    Result.Pass(TEXT("PAL has valid Chunk ID 1234."));
    Result.Warning(TEXT("PAL is not marked as a runtime label."));
    Result.Error(TEXT("Required Primary Asset Label is missing: /ExampleMod/PAL_ExampleMod"));
    TestEqual(TEXT("Pass count"), Result.PassCount, 3);
    TestEqual(TEXT("Warning count"), Result.WarningCount, 1);
    TestEqual(TEXT("Error count"), Result.ErrorCount, 1);
    TestTrue(TEXT("Report retains actionable paths"), Result.BuildReport(TEXT("Example Mod")).Contains(TEXT("/ExampleMod/PAL_ExampleMod")));

    bool bContinue = false;
    const TDelegate<void(bool)> Decision = TDelegate<void(bool)>::CreateLambda([&bContinue](bool bAccept) { bContinue = bAccept; });
    TSharedRef<SWidget> Content = CrimeFactoryPackagingUI::MakePreflightContent(TEXT("Example Mod"), Result, Decision);
    TSharedPtr<SButton> Continue = FindButton(Content, TEXT("Continue packaging"));
    if (!TestTrue(TEXT("Continue button exists"), Continue.IsValid())) return false;
    TestFalse(TEXT("Blocking checks disable packaging"), Continue->IsEnabled());
    Continue->SimulateClick();
    TestFalse(TEXT("A blocked check cannot authorize packaging even with a simulated click"), bContinue);
    TestTrue(TEXT("Error path is visible in the checklist"), ContainsText(Content, Result.Items.Last().Message));

    auto Capture = [this](const TSharedRef<SWidget>& Widget, const FString& Filename) { CapturePreview(*this, Widget, Filename); };
    Capture(Content, TEXT("PreflightErrors.png"));

    // Warnings remain advisory, and cancel always stops packaging.
    Result.Items.Pop();
    Result.ErrorCount = 0;
    Content = CrimeFactoryPackagingUI::MakePreflightContent(TEXT("Example Mod"), Result, Decision);
    Continue = FindButton(Content, TEXT("Continue packaging"));
    if (!TestTrue(TEXT("Warning dialog has Continue"), Continue.IsValid())) return false;
    TestTrue(TEXT("Warnings permit explicit confirmation"), Continue->IsEnabled());
    Continue->SimulateClick();
    TestTrue(TEXT("Continue authorizes packaging"), bContinue);
    const TSharedPtr<SButton> Cancel = FindButton(Content, TEXT("Cancel"));
    if (!TestTrue(TEXT("Cancel button exists"), Cancel.IsValid())) return false;
    Cancel->SimulateClick();
    TestFalse(TEXT("Cancel stops packaging"), bContinue);
    Capture(Content, TEXT("PreflightWarnings.png"));

    Result.Items.Pop();
    Result.WarningCount = 0;
    Content = CrimeFactoryPackagingUI::MakePreflightContent(TEXT("Example Mod"), Result, Decision);
    Capture(Content, TEXT("PreflightReady.png"));
    if (FParse::Param(FCommandLine::Get(), TEXT("CrimeFactoryPackagingModalTest")) && !FApp::IsUnattended())
    {
        // Exercise the real nested modal loop and confirm that close never means continue.
        for (const FString& Action : {FString(TEXT("Continue packaging")), FString(TEXT("Cancel")), FString(TEXT("WindowClose"))})
        {
            const FDelegateHandle Handle = FSlateApplication::Get().GetOnModalLoopTickEvent().AddLambda([Action](float)
            {
                const TSharedPtr<SWindow> Window = FSlateApplication::Get().GetActiveModalWindow();
                if (!Window || !Window->GetTitle().ToString().Contains(TEXT("Preflight"))) return;
                if (Action == TEXT("WindowClose")) Window->RequestDestroyWindow();
                else if (const TSharedPtr<SButton> Button = FindButton(Window.ToSharedRef(), Action)) Button->SimulateClick();
            });
            const bool bAccepted = CrimeFactoryPackagingUI::ConfirmPreflight(TEXT("Modal Test Mod"), Result);
            FSlateApplication::Get().GetOnModalLoopTickEvent().Remove(Handle);
            TestEqual(TEXT("Modal decision is preserved"), bAccepted, Action == TEXT("Continue packaging"));
        }
    }
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCrimeFactoryFailureUITest, "CrimeFactory.Packaging.FailureDialog",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FCrimeFactoryFailureUITest::RunTest(const FString& Parameters)
{
    FCrimeFactoryPackagingFailure Failure;
    Failure.PluginName = TEXT("Example Mod");
    Failure.ResultType = TEXT("Failed");
    Failure.Phase = TEXT("Project cook");
    Failure.Category = TEXT("Missing package / asset");
    Failure.Mode = TEXT("Two-stage replacement");
    Failure.ChunkId = TEXT("1234");
    Failure.RunTime = 42.5;
    Failure.Message = TEXT("A referenced package could not be found: /Game/Example/MissingAsset");
    Failure.Suggestion = TEXT("Restore the missing asset or remove its stale reference from the Primary Asset Label, then forge again.");
    Failure.ExceptionType = TEXT("AutomationException");
    Failure.Details = TEXT("Failure details sentinel: PackagePlugin.ExecuteBuild()");
    Failure.RelevantLogLines = TEXT("LogCook: Error: Package /Game/Example/MissingAsset does not exist.\nAutomationTool exited with ExitCode=25.");
    Failure.RemainingModCount = 2;
    const FString Report = Failure.BuildReport();
    for (const FString& Field : {Failure.Message, Failure.Details, Failure.ExceptionType, Failure.RelevantLogLines, Failure.Mode, Failure.ChunkId})
        TestTrue(TEXT("Copy report preserves diagnostics"), Report.Contains(Field));
    TestTrue(TEXT("Copy report preserves stopped batch count"), Report.Contains(TEXT("2 remaining")));
    bool bClosed = false;
    TSharedRef<SWidget> Content = CrimeFactoryPackagingUI::MakeFailureContent(Failure,
        FSimpleDelegate::CreateLambda([&bClosed] { bClosed = true; }));
    TestTrue(TEXT("Primary error appears in the checklist"), ContainsText(Content, Failure.Message));
    TestTrue(TEXT("Next steps appear in the checklist"), ContainsText(Content, Failure.Suggestion));
    const TSharedPtr<SButton> Log = FindButton(Content, TEXT("Open full log"));
    const TSharedPtr<SButton> Folder = FindButton(Content, TEXT("Open log folder"));
    if (!TestTrue(TEXT("Log actions exist"), Log.IsValid() && Folder.IsValid())) return false;
    TestFalse(TEXT("Missing log cannot be opened"), Log->IsEnabled());
    TestFalse(TEXT("Missing log folder cannot be opened"), Folder->IsEnabled());
    CapturePreview(*this, Content, TEXT("ForgingFailed.png"));
    const TSharedPtr<SButton> Close = FindButton(Content, TEXT("Close"));
    if (!TestTrue(TEXT("Close action exists"), Close.IsValid())) return false;
    Close->SimulateClick();
    TestTrue(TEXT("Close action invokes its owner"), bClosed);

    // Available files enable actions, but the test never launches external applications.
    Failure.LogFolder = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectSavedDir(), TEXT("CrimeFactory/Setup")));
    IFileManager::Get().MakeDirectory(*Failure.LogFolder, true);
    Failure.LogFile = FPaths::Combine(Failure.LogFolder, TEXT("FailureUITest_") + FGuid::NewGuid().ToString(EGuidFormats::Digits) + TEXT(".log"));
    if (!TestTrue(TEXT("Log fixture saved"), FFileHelper::SaveStringToFile(Failure.RelevantLogLines, *Failure.LogFile))) return false;
    ON_SCOPE_EXIT { IFileManager::Get().Delete(*Failure.LogFile); };
    Content = CrimeFactoryPackagingUI::MakeFailureContent(Failure, FSimpleDelegate());
    TestTrue(TEXT("Existing log enables Open"), FindButton(Content, TEXT("Open full log"))->IsEnabled());
    TestTrue(TEXT("Existing directory enables Browse"), FindButton(Content, TEXT("Open log folder"))->IsEnabled());
    TestTrue(TEXT("Report preserves log path"), Failure.BuildReport().Contains(Failure.LogFile));

    // Long diagnostics must remain intact in the report and in a bounded, scrollable window.
    for (int32 Index = 0; Index < 300; ++Index)
        Failure.Message += FString::Printf(TEXT("\nMissing package /Game/Example/Asset_%d"), Index);
    Failure.Details += TEXT("\nLast detail sentinel");
    TestTrue(TEXT("Long report retains final diagnostic"), Failure.BuildReport().Contains(TEXT("Asset_299")));
    Content = CrimeFactoryPackagingUI::MakeFailureContent(Failure, FSimpleDelegate());
    CapturePreview(*this, Content, TEXT("ForgingFailedLongReport.png"));

    FCrimeFactoryPackagingFailure Unavailable;
    Unavailable.PluginName = TEXT("No result file");
    Content = CrimeFactoryPackagingUI::MakeFailureContent(Unavailable, FSimpleDelegate());
    TestTrue(TEXT("Absent message explains how to investigate"), ContainsText(Content,
        TEXT("No exception message was recorded. Open the full log for more information.")));
    CapturePreview(*this, Content, TEXT("ForgingFailedNoLog.png"));
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCrimeFactoryForgeWorkflowTest, "CrimeFactory.Packaging.ForgeWorkflowAndUpdater",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FCrimeFactoryForgeWorkflowTest::RunTest(const FString& Parameters)
{
    const FString SettingsFile = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectSavedDir(),
        TEXT("CrimeFactory/ExportSettings_") + FGuid::NewGuid().ToString(EGuidFormats::Digits) + TEXT(".ini")));
    const FString ExportPath = TEXT("Folder with spaces/Mod exports");
    auto* SavedSettings = NewObject<UCrimeFactorySettings>();
    SavedSettings->ZipExportDirectory.Path = ExportPath;
    SavedSettings->SaveConfig(CPF_Config, *SettingsFile);
    auto* LoadedSettings = NewObject<UCrimeFactorySettings>();
    LoadedSettings->LoadConfig(UCrimeFactorySettings::StaticClass(), *SettingsFile);
    TestEqual(TEXT("ZIP export folder persists through config serialization"), LoadedSettings->ZipExportDirectory.Path, ExportPath);
    ON_SCOPE_EXIT { IFileManager::Get().Delete(*SettingsFile); };
    for (const FString& Name : {FString(TEXT("PAYDAY3.exe")), FString(TEXT("PAYDAY3Client-Win64-Shipping.exe")),
        FString(TEXT("payday3client-wingdk-shipping.exe"))})
        TestTrue(TEXT("Recognizes retail game executables"), CrimeFactoryGameProcess::IsGameExecutable(Name));
    for (const FString& Name : {FString(TEXT("UnrealEditor.exe")), FString(TEXT("PAYDAY3Editor.exe")),
        FString(TEXT("Steam.exe")), FString(TEXT("GameLaunchHelper.exe")), FString(TEXT("PAYDAY3.exe.bak"))})
        TestFalse(TEXT("Never targets editors, launchers or unrelated programs"), CrimeFactoryGameProcess::IsGameExecutable(Name));

#if PLATFORM_WINDOWS
    FString FixtureExecutable;
    if (FParse::Value(FCommandLine::Get(), TEXT("CrimeFactoryGameProcessFixture="), FixtureExecutable))
    {
        for (const FString Mode : {FString(TEXT("graceful")), FString(TEXT("force"))})
        {
            const FString Ready = FixtureExecutable + TEXT(".") + Mode + TEXT(".ready");
            const FString Closed = FixtureExecutable + TEXT(".") + Mode + TEXT(".closed");
            IFileManager::Get().Delete(*Ready);
            IFileManager::Get().Delete(*Closed);
            const FString Args = FString::Printf(TEXT("%s \"%s\" \"%s\""), *Mode, *Ready, *Closed);
            uint32 FixturePid = 0;
            FProcHandle Fixture = FPlatformProcess::CreateProc(*FixtureExecutable, *Args, false, true, true, &FixturePid, 0, nullptr, nullptr);
            if (!TestTrue(TEXT("Synthetic game process starts"), Fixture.IsValid())) return false;
            ON_SCOPE_EXIT
            {
                if (FPlatformProcess::IsProcRunning(Fixture)) FPlatformProcess::TerminateProc(Fixture, false);
                FPlatformProcess::CloseProc(Fixture);
            };
            const double Deadline = FPlatformTime::Seconds() + 10;
            while (!IFileManager::Get().FileExists(*Ready) && FPlatformTime::Seconds() < Deadline) FPlatformProcess::Sleep(0.05f);
            if (!TestTrue(TEXT("Synthetic game process is ready"), IFileManager::Get().FileExists(*Ready))) return false;
            for (FPlatformProcess::FProcEnumerator Processes; Processes.MoveNext();)
                if (CrimeFactoryGameProcess::IsGameExecutable(Processes.GetCurrent().GetName()) && Processes.GetCurrent().GetPID() != FixturePid)
                {
                    AddError(TEXT("A real PAYDAY 3 session is running. Refusing to close it during the synthetic process test."));
                    return false;
                }
            FString CloseError;
            TestTrue(TEXT("Game shutdown completes before forging"), CrimeFactoryGameProcess::CloseBeforeForge(CloseError));
            TestFalse(TEXT("Synthetic game is no longer running"), FPlatformProcess::IsProcRunning(Fixture));
            TestEqual(TEXT("Graceful window close is preferred; no-window case uses fallback"),
                IFileManager::Get().FileExists(*Closed), Mode == TEXT("graceful"));
        }
    }
#endif

    const auto Updates = MakeShared<int32>(0);
    const auto Closes = MakeShared<int32>(0);
    FCrimeFactoryUpdatePresentation View;
    View.Status = TEXT("A modkit update is available");
    View.Detail = TEXT("Save and close the editor, back up Content, restore local changes and reopen the project.");
    View.Branch = TEXT("main");
    View.CommitsBehind = 3;
    View.LocalChanges = 2;
    View.bCanUpdate = true;
    View.Severity = ECrimeFactoryPreflightSeverity::Warning;
    auto Content = CrimeFactoryUpdaterUI::MakeContent(View,
        FSimpleDelegate::CreateLambda([Updates] { ++*Updates; }), FSimpleDelegate::CreateLambda([Closes] { ++*Closes; }));
    const auto UpdateButton = FindButton(Content, TEXT("Update now"));
    if (!TestTrue(TEXT("Update action exists"), UpdateButton.IsValid())) return false;
    UpdateButton->SimulateClick();
    TestEqual(TEXT("Only explicit Update dispatches updating"), *Updates, 1);
    FindButton(Content, TEXT("Later"))->SimulateClick();
    TestEqual(TEXT("Later only closes the review window"), *Closes, 1);
    CapturePreview(*this, Content, TEXT("ModkitUpdateAvailable.png"));
    View.bCanUpdate = false;
    View.Status = TEXT("This update needs a manual merge");
    View.Detail = TEXT("Merge or rebase the local branch manually. CrimeFactory never rewrites commits.");
    Content = CrimeFactoryUpdaterUI::MakeContent(View,
        FSimpleDelegate::CreateLambda([Updates] { ++*Updates; }), FSimpleDelegate());
    FindButton(Content, TEXT("Update now"))->SimulateClick();
    TestEqual(TEXT("A manual merge state cannot dispatch an update"), *Updates, 1);
    CapturePreview(*this, Content, TEXT("ModkitUpdateManualMerge.png"));
    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCrimeFactoryInformationUITest, "CrimeFactory.Packaging.ModInformation",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FCrimeFactoryInformationUITest::RunTest(const FString& Parameters)
{
    auto Data = MakeShared<FCrimeFactoryModInspection>();
    Data->PluginName = TEXT("Example Mod");
    Data->PackagingMode = TEXT("Two-stage packaging");
    Data->Chunk = TEXT("1234");
    Data->PluginAssetCount = 2000;
    Data->ManagedAssetCount = 2000;
    Data->ExternalAssetCount = 1;
    Data->Fields.Emplace(FText::FromString(TEXT("Primary Asset Label")), TEXT("/ExampleMod/PAL_ExampleMod"));
    Data->Fields.Emplace(FText::FromString(TEXT("Runtime label")), TEXT("Yes"));
    Data->Fields.Emplace(FText::FromString(TEXT("Asset Manager directory")), TEXT("Registered"));
    Data->Fields.Emplace(FText::FromString(TEXT("Specific PAL registration")), TEXT("Registered"));
    Data->InformationReport = TEXT("Complete information report with /ExampleMod/PAL_ExampleMod");
    Data->AssetsReport = TEXT("Complete asset report with /Game/Example/Missing.Missing");
    auto Managed = MakeShared<FCrimeFactoryInspectionAssetGroup>();
    Managed->Id = TEXT("Managed");
    Managed->Name = FText::FromString(TEXT("PAL-managed chunk candidates"));
    Managed->Description = FText::FromString(TEXT("Directory and explicit references considered by the PAL. Final cooked output may differ."));
    for (int32 Index = 0; Index < 2000; ++Index)
        Managed->Paths.Add(FString::Printf(TEXT("/ExampleMod/Props/Asset_%d.Asset_%d"), Index, Index));
    auto Missing = MakeShared<FCrimeFactoryInspectionAssetGroup>();
    Missing->Id = TEXT("Missing");
    Missing->Name = FText::FromString(TEXT("Missing explicit references"));
    Missing->Description = FText::FromString(TEXT("References whose packages could not be found. These require manual repair."));
    Missing->Paths.Add(TEXT("/Game/Example/Missing.Missing"));
    Data->Groups = {Managed, Missing};
    Data->MissingPaths.Add(Missing->Paths[0]);
    Data->Issues.Add(TEXT("1 explicit PAL reference points to a missing package. Restore it or repair the reference manually."));

    const auto Actions = MakeShared<TMap<FName, int32>>();
    const auto Refresh = FSimpleDelegate::CreateLambda([Actions] { ++Actions->FindOrAdd(TEXT("Refresh")); });
    const auto Fix = FSimpleDelegate::CreateLambda([Actions] { ++Actions->FindOrAdd(TEXT("Fix")); });
    const auto Close = FSimpleDelegate::CreateLambda([Actions] { ++Actions->FindOrAdd(TEXT("Close")); });
    const auto Information = SNew(SCrimeFactoryModInspector).Data(Data).OnRefresh(Refresh).OnFix(Fix).OnClose(Close)
        .OnViewAssets(FSimpleDelegate::CreateLambda([Actions] { ++Actions->FindOrAdd(TEXT("ViewAssets")); }));
    const auto Assets = SNew(SCrimeFactoryModInspector).Data(Data).ShowAssets(true).OnRefresh(Refresh).OnFix(Fix).OnClose(Close);
    TestTrue(TEXT("Settings remain visible"), ContainsText(Information, TEXT("/ExampleMod/PAL_ExampleMod")));
    const auto FixButton = FindButton(Information, TEXT("Fix Issues"));
    if (!TestTrue(TEXT("Fix action exists"), FixButton.IsValid())) return false;
    TestFalse(TEXT("Missing references alone cannot trigger an automatic repair"), FixButton->IsEnabled());
    FixButton->SimulateClick();
    TestEqual(TEXT("Disabled repair cannot dispatch the repair action"), Actions->FindRef(TEXT("Fix")), 0);
    FindButton(Information, TEXT("Refresh"))->SimulateClick();
    TestEqual(TEXT("Refresh uses the inspector workflow"), Actions->FindRef(TEXT("Refresh")), 1);
    FindButton(Information, TEXT("View Assets"))->SimulateClick();
    TestEqual(TEXT("View Assets delegates to the owner"), Actions->FindRef(TEXT("ViewAssets")), 1);
    CapturePreview(*this, Information, TEXT("ModInformation.png"));
    TestEqual(TEXT("Large group retains all entries"), Assets->GetVisibleAssetCount(), 2000);
    Assets->SetSearchText(FText::FromString(TEXT("asset_1999")));
    TestEqual(TEXT("Search ignores case and matches full asset paths"), Assets->GetVisibleAssetCount(), 1);
    CapturePreview(*this, Assets, TEXT("ModAssetsSearch.png"));
    Assets->SetSearchText(FText::GetEmpty());
    Assets->SelectGroup(TEXT("Missing"));
    TestEqual(TEXT("Missing group keeps its entries"), Assets->GetVisibleAssetCount(), 1);
    CapturePreview(*this, Assets, TEXT("ModAssetsMissing.png"));

    auto Updated = MakeShared<FCrimeFactoryModInspection>(*Data);
    Updated->bCanFix = true;
    Updated->Issues.Add(TEXT("Asset Manager Specific Asset registration is missing."));
    // Both open views receive the same fresh snapshot; preserve group and search state.
    Assets->SetSearchText(FText::FromString(TEXT("missing")));
    Information->SetData(Updated);
    Assets->SetData(Updated);
    TestEqual(TEXT("Refresh retains the active group"), Assets->GetSelectedGroup(), FName(TEXT("Missing")));
    TestEqual(TEXT("Refresh retains search"), Assets->GetVisibleAssetCount(), 1);
    const auto UpdatedFix = FindButton(Information, TEXT("Fix Issues"));
    TestTrue(TEXT("Safe configuration issues enable Fix Issues"), UpdatedFix->IsEnabled());
    UpdatedFix->SimulateClick();
    TestEqual(TEXT("Fix delegates to existing repair code"), Actions->FindRef(TEXT("Fix")), 1);
    FindButton(Assets, TEXT("Close"))->SimulateClick();
    TestEqual(TEXT("Close delegates to the window"), Actions->FindRef(TEXT("Close")), 1);
    Assets->SetSearchText(FText::FromString(TEXT("no-match")));
    TestEqual(TEXT("Empty search state is safe"), Assets->GetVisibleAssetCount(), 0);
    CapturePreview(*this, Assets, TEXT("ModAssetsEmpty.png"));
    return true;
}

#if PLATFORM_WINDOWS
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FCrimeFactoryHiddenSetupTest, "CrimeFactory.Packaging.HiddenSetupProcess",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FCrimeFactoryHiddenSetupTest::RunTest(const FString& Parameters)
{
    const bool bInteractive = FParse::Param(FCommandLine::Get(), TEXT("CrimeFactoryPackagingModalTest"));
    TGuardValue<bool> AutomationGuard(GIsAutomationTesting, bInteractive ? false : GIsAutomationTesting);
    const FString Fixture = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectSavedDir(),
        TEXT("CrimeFactory/Setup"), TEXT("Setup Test ") + FGuid::NewGuid().ToString(EGuidFormats::Digits)));
    const FString Batch = Fixture + TEXT(".bat");
    const FString Script = Fixture + TEXT(".ps1");
    IFileManager::Get().MakeDirectory(*FPaths::GetPath(Fixture), true);
    ON_SCOPE_EXIT
    {
        IFileManager::Get().Delete(*Batch);
        IFileManager::Get().Delete(*Script);
    };
    // Query the actual console window inside the child: a visible/minimized terminal fails this test.
    const FString PowerShell = TEXT(
        "param([int]$Result, [string]$Token)\r\n"
        "Add-Type -Namespace CFSetup -Name Native -MemberDefinition '\n"
        "[System.Runtime.InteropServices.DllImport(\"kernel32.dll\")] public static extern System.IntPtr GetConsoleWindow();\n"
        "[System.Runtime.InteropServices.DllImport(\"user32.dll\")] public static extern bool IsWindowVisible(System.IntPtr handle);'\r\n"
        "$visible = [CFSetup.Native]::IsWindowVisible([CFSetup.Native]::GetConsoleWindow())\r\n"
        "Write-Output (\"ConsoleVisible=\" + $visible)\r\n"
        "Write-Output (\"Argument=\" + $Token)\r\n"
        "[Console]::Error.WriteLine('stderr captured')\r\n"
        "1..2000 | ForEach-Object { Write-Output ('build output ' + $_) }\r\n"
        "Start-Sleep -Milliseconds 250\r\n"
        "if ($visible) { exit 61 }\r\n"
        "exit $Result\r\n");
    const FString BatchText = FString::Printf(TEXT("@echo off\r\npowershell.exe -NoLogo -NoProfile -ExecutionPolicy Bypass -File \"%s\" %%*\r\nexit /b %%errorlevel%%\r\n"), *Script);
    if (!TestTrue(TEXT("Create batch fixture"), FFileHelper::SaveStringToFile(BatchText, *Batch)) ||
        !TestTrue(TEXT("Create console fixture"), FFileHelper::SaveStringToFile(PowerShell, *Script))) return false;
    bool bSawNativeProgress = false;
    const FDelegateHandle ProgressObserver = FSlateApplication::Get().OnPostTick().AddLambda([&bSawNativeProgress](float)
    {
        if (!GWarn->GetScopeStack().IsEmpty())
        {
            const FSlowTask* Task = GWarn->GetScopeStack().Last();
            if (Task->FrameMessage.ToString().StartsWith(TEXT("Step 2 of 3:")) &&
                FSlateApplication::Get().GetActiveModalWindow().IsValid()) bSawNativeProgress = true;
        }
    });
    ON_SCOPE_EXIT { FSlateApplication::Get().OnPostTick().Remove(ProgressObserver); };
    for (const int32 ExpectedCode : {0, 23})
    {
        int32 ExitCode = INDEX_NONE;
        FString Output;
        const FString Arguments = FString::Printf(TEXT("-Result %d -Token \"value with spaces\""), ExpectedCode);
        TestTrue(TEXT("Hidden setup process starts"), CrimeFactoryPackagingUI::RunSetup(Batch, Arguments, ExitCode, Output,
            TEXT("Testing CrimeFactory setup progress..."), TEXT("Running a small isolated test command.")));
        TestEqual(TEXT("Child exit code preserved"), ExitCode, ExpectedCode);
        TestTrue(TEXT("No terminal is visible"), Output.Contains(TEXT("ConsoleVisible=False")));
        TestTrue(TEXT("Quoted arguments survive"), Output.Contains(TEXT("Argument=value with spaces")));
        TestTrue(TEXT("stderr is captured"), Output.Contains(TEXT("stderr captured")));
        TestTrue(TEXT("Verbose output is complete without pipe deadlock"), Output.Contains(TEXT("build output 2000")));
    }
    if (!FApp::IsUnattended()) TestTrue(TEXT("Native progress updates while the build tool is running"), bSawNativeProgress);
    if (FParse::Param(FCommandLine::Get(), TEXT("CrimeFactorySetupIntegration")))
    {
        const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("CrimeFactory"));
        if (!TestTrue(TEXT("CrimeFactory plugin found for real UAT test"), Plugin.IsValid())) return false;
        const FString RunUAT = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::EngineDir(), TEXT("Build/BatchFiles/RunUAT.bat")));
        const FString Arguments = FString::Printf(TEXT("-ScriptsForProject=\"%s\" -ScriptDir=\"%s\" -List"),
            *FPaths::ConvertRelativePathToFull(FPaths::GetProjectFilePath()),
            *FPaths::ConvertRelativePathToFull(FPaths::Combine(Plugin->GetBaseDir(), TEXT("Source/CrimeFactory.Automation"))));
        int32 ExitCode = INDEX_NONE;
        FString Output;
        TestTrue(TEXT("Actual AutomationTool setup starts"), CrimeFactoryPackagingUI::RunSetup(RunUAT, Arguments, ExitCode, Output,
            TEXT("Preparing AutomationTool integration..."), TEXT("Compiling and registering CrimeFactory PackagePlugin for this engine.")));
        TestEqual(TEXT("AutomationTool setup succeeds"), ExitCode, 0);
        const int32 Section = Output.Find(TEXT("CrimeFactory.Automation:"), ESearchCase::CaseSensitive);
        TestTrue(TEXT("Actual PackagePlugin command is registered"), Section != INDEX_NONE &&
            Output.Mid(Section, 512).Contains(TEXT("PackagePlugin"), ESearchCase::CaseSensitive));
    }
    return true;
}
#endif
#endif
