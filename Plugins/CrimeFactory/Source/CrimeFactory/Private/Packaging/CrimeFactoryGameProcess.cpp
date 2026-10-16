#include "Packaging/CrimeFactoryGameProcess.h"

#include "CrimeFactory.h"
#include "HAL/PlatformProcess.h"
#include "HAL/PlatformTime.h"
#include "Misc/App.h"
#include "Misc/Paths.h"
#include "Misc/ScopeExit.h"
#include "Misc/ScopedSlowTask.h"

#if PLATFORM_WINDOWS
#include "Windows/WindowsHWrapper.h"
#endif

bool CrimeFactoryGameProcess::IsGameExecutable(const FString& Name)
{
    const FString Filename = FPaths::GetCleanFilename(Name);
    for (const TCHAR* Candidate : {TEXT("PAYDAY3.exe"), TEXT("PAYDAY3-Win64-Shipping.exe"),
        TEXT("PAYDAY3Client-Win64-Shipping.exe"), TEXT("PAYDAY3-WinGDK-Shipping.exe"), TEXT("PAYDAY3Client-WinGDK-Shipping.exe")})
        if (Filename.Equals(Candidate, ESearchCase::IgnoreCase)) return true;
    return false;
}

bool CrimeFactoryGameProcess::CloseBeforeForge(FString& OutError)
{
    check(IsInGameThread());
    OutError.Reset();
#if PLATFORM_WINDOWS
    // A bootstrap executable can start the shipping executable while it is closing.
    for (int32 Attempt = 0; Attempt < 3; ++Attempt)
    {
        bool bFoundGame = false;
        for (FPlatformProcess::FProcEnumerator Processes; Processes.MoveNext();)
        {
            const auto Info = Processes.GetCurrent();
            if (!IsGameExecutable(Info.GetName()) || Info.GetPID() == FPlatformProcess::GetCurrentProcessId()) continue;
            bFoundGame = true;
            FProcHandle Handle = FPlatformProcess::OpenProcess(Info.GetPID());
            if (!Handle.IsValid())
            {
                if (!FPlatformProcess::IsApplicationRunning(Info.GetPID())) continue;
                OutError = FString::Printf(TEXT("CrimeFactory could not access PAYDAY 3 (PID %u). Close the game manually, then forge again."), Info.GetPID());
                return false;
            }
            ON_SCOPE_EXIT { FPlatformProcess::CloseProc(Handle); };
            if (!FPlatformProcess::IsProcRunning(Handle)) continue;
            // Recheck identity after opening the handle, rather than acting on a stale enumeration.
            const FString LivePath = FPlatformProcess::GetApplicationName(Info.GetPID());
            if (!IsGameExecutable(LivePath))
            {
                OutError = TEXT("CrimeFactory could not verify a running PAYDAY 3 process. Close the game manually before forging.");
                return false;
            }
            FScopedSlowTask Progress(0, NSLOCTEXT("CrimeFactory", "CloseGame", "Closing PAYDAY 3 before forging..."), !FApp::IsUnattended());
            Progress.MakeDialog();
            const uint32 Pid = Info.GetPID();
            ::EnumWindows([](HWND Window, LPARAM Parameter) -> BOOL
            {
                DWORD WindowPid = 0;
                ::GetWindowThreadProcessId(Window, &WindowPid);
                if (WindowPid == static_cast<DWORD>(Parameter)) ::PostMessageW(Window, WM_CLOSE, 0, 0);
                return 1;
            }, static_cast<LPARAM>(Pid));
            const double GraceDeadline = FPlatformTime::Seconds() + 5.0;
            while (FPlatformProcess::IsProcRunning(Handle) && FPlatformTime::Seconds() < GraceDeadline)
            {
                Progress.TickProgress();
                FPlatformProcess::Sleep(0.05f);
            }
            if (FPlatformProcess::IsProcRunning(Handle)) FPlatformProcess::TerminateProc(Handle, false);
            const double ExitDeadline = FPlatformTime::Seconds() + 5.0;
            while (FPlatformProcess::IsProcRunning(Handle) && FPlatformTime::Seconds() < ExitDeadline)
            {
                Progress.TickProgress();
                FPlatformProcess::Sleep(0.05f);
            }
            if (FPlatformProcess::IsProcRunning(Handle))
            {
                OutError = FString::Printf(TEXT("PAYDAY 3 (PID %u) is still running. Close it manually to release mod files, then forge again."), Pid);
                return false;
            }
            UE_LOG(LogCrimeFactory, Display, TEXT("Closed PAYDAY 3 (PID %u) before forging."), Pid);
        }
        if (!bFoundGame) return true;
    }
    for (FPlatformProcess::FProcEnumerator Remaining; Remaining.MoveNext();)
        if (IsGameExecutable(Remaining.GetCurrent().GetName()))
        {
            OutError = TEXT("PAYDAY 3 restarted while CrimeFactory was closing it. Close the game and disable automatic relaunch, then forge again.");
            return false;
        }
#endif
    return true;
}
