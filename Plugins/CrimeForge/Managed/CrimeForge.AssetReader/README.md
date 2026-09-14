# CrimeForge AssetReader

AssetReader is CrimeForge's in-process PAYDAY 3 cooked-asset reader. It replaces the external
external Core application previously required by the JSON importer. There is no separate Core
window, localhost server, or backend instance to run.

AssetReader uses CUE4Parse to mount PAYDAY 3 archives and exposes only the operations
CrimeForge needs: metadata/status, asset export, binary asset data, folder enumeration, and
validation. Fortnite, Valorant, Epic launcher, Discord, gallery, update-service, and desktop-UI
logic from the original Core application are not part of AssetReader.

On first use, CrimeForge locates a .NET 8 SDK and invokes `dotnet publish` directly. CrimeForge
prefers Unreal Engine's bundled .NET 8 SDK, so a separate system-wide .NET SDK is normally not
required. The
framework-dependent component is emitted straight into `Binaries/Win64/CrimeForgeAssetReader`,
then CrimeForge records that .NET installation beside the runtime and loads its `hostfxr.dll` before
hosting the component inside the Unreal Editor process. `build.ps1` remains as a manual fallback.

AssetReader contains code derived from Core under the Apache License 2.0. See
`LICENSE-Core-Apache-2.0.txt` and `NOTICE-Core.txt` in the CrimeForge plugin root.


The bundled CUE4Parse source is pinned to upstream revision
`75983dc51608e0285e5d9ea5f28133e6a4951ccf`, the last upstream revision before CUE4Parse moved
from .NET 8 to .NET 10. This keeps the embedded reader compatible with the SDK shipped by UE5.5.

## Runtime freshness

CrimeForge records a managed-source revision beside the published AssetReader runtime. When the
plugin's embedded AssetReader source changes, the native host treats an older published DLL as
stale and republishes it automatically. This prevents plugin updates from continuing to load an
old `Binaries/Win64/CrimeForgeAssetReader/CrimeForge.AssetReader.dll`.
