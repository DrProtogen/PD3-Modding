param(
    [ValidateSet('Debug','Release')]
    [string]$Configuration = 'Release'
)

$ErrorActionPreference = 'Stop'
$Project = Join-Path $PSScriptRoot 'CrimeForge.AssetReader.csproj'
$PluginRoot = [System.IO.Path]::GetFullPath((Join-Path $PSScriptRoot '..\..'))
$Output = Join-Path $PluginRoot 'Binaries\Win64\CrimeForgeAssetReader'

try {
    $DotNet = (Get-Command dotnet -ErrorAction Stop).Source
    $Sdks = & $DotNet --list-sdks 2>&1
    if ($LASTEXITCODE -ne 0 -or -not ($Sdks | Where-Object { $_ -match '^8\.' })) {
        throw "CrimeForge AssetReader requires a .NET 8 SDK. Installed SDKs:`n$($Sdks -join [Environment]::NewLine)"
    }

    if (Test-Path -LiteralPath $Output) {
        Remove-Item -LiteralPath $Output -Recurse -Force
    }
    New-Item -ItemType Directory -Force -Path $Output | Out-Null

    & $DotNet publish $Project `
        -c $Configuration `
        -r win-x64 `
        --self-contained false -p:CUE4PARSE_SKIP_NATIVE=true `
        -p:UseAppHost=false `
        -p:GenerateRuntimeConfigurationFiles=true `
        -o $Output

    if ($LASTEXITCODE -ne 0) {
        throw "dotnet publish failed with exit code $LASTEXITCODE"
    }

    $Assembly = Join-Path $Output 'CrimeForge.AssetReader.dll'
    $RuntimeConfig = Join-Path $Output 'CrimeForge.AssetReader.runtimeconfig.json'
    if (-not (Test-Path -LiteralPath $Assembly)) { throw "Published assembly is missing: $Assembly" }
    if (-not (Test-Path -LiteralPath $RuntimeConfig)) { throw "Published runtime config is missing: $RuntimeConfig" }

    $DotNetRoot = Split-Path -Parent $DotNet
    [System.IO.File]::WriteAllText((Join-Path $Output 'dotnet-root.txt'), $DotNetRoot)
    [System.IO.File]::WriteAllText((Join-Path $Output 'framework-dependent.marker'), 'CrimeForge AssetReader framework-dependent publish')

    Write-Host "CrimeForge AssetReader published successfully to $Output"
    exit 0
}
catch {
    Write-Error $_.Exception.Message
    exit 1
}
