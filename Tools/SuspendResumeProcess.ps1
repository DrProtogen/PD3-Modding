param(
    [Parameter(Mandatory = $true)]
    [int]$ProcessId,

    [Parameter(Mandatory = $true)]
    [ValidateSet("Suspend", "Resume")]
    [string]$Action
)

$nativeCode = @'
using System;
using System.Runtime.InteropServices;

public static class PD3ProcessControl
{
    [DllImport("kernel32.dll", SetLastError = true)]
    public static extern IntPtr OpenProcess(
        UInt32 dwDesiredAccess,
        bool bInheritHandle,
        UInt32 dwProcessId
    );

    [DllImport("kernel32.dll", SetLastError = true)]
    [return: MarshalAs(UnmanagedType.Bool)]
    public static extern bool CloseHandle(IntPtr hObject);

    [DllImport("ntdll.dll")]
    public static extern int NtSuspendProcess(IntPtr processHandle);

    [DllImport("ntdll.dll")]
    public static extern int NtResumeProcess(IntPtr processHandle);
}
'@

if (-not ("PD3ProcessControl" -as [type])) {
    Add-Type -TypeDefinition $nativeCode -ErrorAction Stop
}

$PROCESS_SUSPEND_RESUME = 0x0800

$handle = [PD3ProcessControl]::OpenProcess(
    $PROCESS_SUSPEND_RESUME,
    $false,
    [uint32]$ProcessId
)

if ($handle -eq [IntPtr]::Zero) {
    $win32Error = [Runtime.InteropServices.Marshal]::GetLastWin32Error()
    Write-Error "OpenProcess failed for PID $ProcessId. Win32 error: $win32Error"
    exit 1
}

try {
    if ($Action -eq "Suspend") {
        $status = [PD3ProcessControl]::NtSuspendProcess($handle)
    }
    else {
        $status = [PD3ProcessControl]::NtResumeProcess($handle)
    }

    if ($status -ne 0) {
        Write-Error "$Action failed for PID $ProcessId. NTSTATUS: 0x$('{0:X8}' -f ([uint32]$status))"
        exit 2
    }
}
finally {
    [void][PD3ProcessControl]::CloseHandle($handle)
}

exit 0
