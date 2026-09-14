using System.Text;
using CrimeForge.AssetReader.Controllers;
using CrimeForge.AssetReader.Objects;
using CrimeForge.AssetReader.Resources;
using CrimeForge.AssetReader.Resources.Framework.Base;
using CUE4Parse.Encryption.Aes;
using CUE4Parse.Compression;
using CUE4Parse_Conversion.Textures;
using CUE4Parse_Conversion.Textures.BC;
using CUE4Parse.MappingsProvider;
using CUE4Parse.UE4.Assets.Exports.Texture;
using CUE4Parse.UE4.Objects.Core.Misc;
using CUE4Parse.UE4.Versions;
using CUE4Parse.Utils;
using Microsoft.AspNetCore.Http;
using Microsoft.AspNetCore.Mvc;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json.Serialization;
using Serilog;

namespace CrimeForge.AssetReader;

internal sealed class BackendConfig
{
    public string GameDirectory { get; set; } = string.Empty;
    public string EngineDirectory { get; set; } = string.Empty;
    public string ArchiveDirectory { get; set; } = string.Empty;
    public string MappingsFile { get; set; } = string.Empty;
    public string AesKey { get; set; } = string.Empty;
    public string AudioDirectory { get; set; } = string.Empty;
    public string RuntimeDirectory { get; set; } = string.Empty;
}

internal sealed class BackendRequest
{
    public string Op { get; set; } = string.Empty;
    public string? Path { get; set; }
    public bool Raw { get; set; }
    public string? ContentType { get; set; }
    public Dictionary<string, string>? Parameters { get; set; }
    public JObject? Body { get; set; }
    public BackendConfig? Config { get; set; }
}

internal readonly record struct BackendResponse(int StatusCode, string ContentType, byte[] Payload)
{
    public static BackendResponse Json(int statusCode, object value)
    {
        var settings = new JsonSerializerSettings
        {
            ContractResolver = new CamelCasePropertyNamesContractResolver(),
            NullValueHandling = NullValueHandling.Ignore
        };
        return new BackendResponse(statusCode, "application/json", Encoding.UTF8.GetBytes(JsonConvert.SerializeObject(value, settings)));
    }

    public static BackendResponse Error(int statusCode, string code, string message) => Json(statusCode, new
    {
        errorCode = code,
        errorMessage = message
    });
}

internal static class Backend
{
    private static readonly object Sync = new();
    private static BaseProfile? _profile;
    private static string? _lastError;

    public static BackendResponse Dispatch(BackendRequest request)
    {
        try
        {
            return request.Op.ToLowerInvariant() switch
            {
                "initialize" => Initialize(request.Config),
                "shutdown" => Shutdown(),
                "status" => Status(),
                "metadata" => Metadata(),
                "export" => Export(request),
                "static_mesh" => StaticMesh(request),
                "folder_paths" => FolderPaths(request),
                "validate" => Validate(request),
                _ => BackendResponse.Error(400, "crimeforge.backend.unknown_operation", $"Unknown operation '{request.Op}'")
            };
        }
        catch (Exception ex)
        {
            _lastError = ex.ToString();
            Log.Error(ex, "CrimeForge embedded backend request failed");
            return BackendResponse.Error(500, "crimeforge.backend.exception", ex.Message);
        }
    }

    private static BackendResponse Initialize(BackendConfig? config)
    {
        if (config is null) return BackendResponse.Error(400, "crimeforge.backend.no_config", "No backend configuration was supplied");

        lock (Sync)
        {


            _profile = null;
            _lastError = null;

            if (string.IsNullOrWhiteSpace(config.ArchiveDirectory) || !Directory.Exists(config.ArchiveDirectory))
                return BackendResponse.Error(400, "crimeforge.backend.archive_missing", "PAYDAY 3 archive directory is missing or invalid");

            if (string.IsNullOrWhiteSpace(config.MappingsFile) || !File.Exists(config.MappingsFile))
                return BackendResponse.Error(400, "crimeforge.backend.mappings_missing", "A PAYDAY 3 .usmap mappings file is required");

            Globals.SetAudioFilesFolder(string.IsNullOrWhiteSpace(config.AudioDirectory)
                ? Path.Combine(Path.GetTempPath(), "CrimeForge", "Audio")
                : config.AudioDirectory);

            InitializeNativeLibraries(config);

            var profile = new BaseProfile
            {
                Name = "PAYDAY 3",
                Version = EGame.GAME_UE5_5,
                AudioFormat = EAudioFormatType.Decompressed
            };

            var provider = new BaseProvider(config.ArchiveDirectory,
                new VersionContainer(profile.Version, ETexturePlatform.DesktopMobile));

            provider.ReadScriptData = true;
            provider.ReadShaderMaps = true;
            provider.ReadNaniteData = true;
            provider.Initialize();

            provider.MappingsContainer = new FileUsmapTypeMappingsProvider(config.MappingsFile);
            profile.CookedMappings = provider.MappingsContainer;

            var editorMappings = new FileUsmapTypeMappingsProvider(config.MappingsFile);
            EngineSchema.Apply(editorMappings.MappingsForGame, config.MappingsFile, profile.Version);
            profile.EditorMappings = editorMappings;
            profile.LoadedMappingsFile = config.MappingsFile;

            /* An all-zero key is valid for unencrypted containers and mirrors Core's fallback. */
            var aes = string.IsNullOrWhiteSpace(config.AesKey)
                ? "0x0000000000000000000000000000000000000000000000000000000000000000"
                : config.AesKey.Trim();

            provider.SubmitKeyAsync(new FGuid(), new FAesKey(aes)).GetAwaiter().GetResult();
            provider.PostMount();

            if (provider.Files.Count == 0)
                return BackendResponse.Error(400, "crimeforge.backend.no_files", "No PAYDAY 3 assets could be mounted. Check the game path and AES key.");

            provider.LoadVirtualPaths();

            profile.Provider = provider;
            profile.IsInitialized = true;
            _profile = profile;
            AssetReaderController.SetProfile(profile);

            return Status();
        }
    }

    private static void InitializeNativeLibraries(BackendConfig config)
    {
        var runtimeDirectory = string.IsNullOrWhiteSpace(config.RuntimeDirectory)
            ? AppContext.BaseDirectory
            : config.RuntimeDirectory;
        Directory.CreateDirectory(runtimeDirectory);

        // Prefer zlib-ng when NuGet/publish supplied its native DLL. If it is not present, the
        // patched CUE4Parse ZlibHelper transparently falls back to .NET 8 ZLibStream.
        var zlibPath = Path.Combine(runtimeDirectory, ZlibHelper.DLL_NAME);
        if (File.Exists(zlibPath))
            ZlibHelper.Initialize(zlibPath);

        /* CUE4Parse-Natives is optional in the embedded build. If a compatible native DLL is present we
         * can use it, otherwise CrimeForge uses PAYDAY 3's own Oodle DLL directly. */
        if (CUE4ParseNatives.IsFeatureAvailable("Oodle"))
        {
            OodleHelper.Initialize();
        }
        else
        {
            /* A source build can still be useful if its optional Oodle native submodule was not
             * present. In that case use PAYDAY 3's own Oodle DLL rather than downloading one. */
            var oodle = FindGameOodle(config.GameDirectory, config.EngineDirectory, config.ArchiveDirectory, out var searchedLocations);
            if (oodle is null)
                throw new FileNotFoundException(
                    "CrimeForge could not initialize Oodle decompression. CUE4Parse-Natives has no Oodle feature and no PAYDAY 3 Oodle DLL was found.\n\n" +
                    "Looked for oo2core_*_win64.dll and oodle-data-shared.dll under:\n" +
                    string.Join("\n", searchedLocations.Select(x => "  " + x)));

            OodleHelper.Initialize(oodle);
            if (OodleHelper.Instance is null)
                throw new InvalidOperationException($"CrimeForge found PAYDAY 3's Oodle DLL at '{oodle}', but CUE4Parse could not initialize it.");
        }

        /* Detex is already embedded in CUE4Parse-Conversion. Materialize it beside the managed
         * assembly, never fetch it from a service. AssetRipper handles the formats it supports. */
        TextureDecoder.UseAssetRipperTextureDecoder = true;
        var detexPath = Path.Combine(runtimeDirectory, DetexHelper.DLL_NAME);
        if (DetexHelper.LoadDll(detexPath)) DetexHelper.Initialize(detexPath);
    }

    private static string? FindGameOodle(string gameDirectory, string engineDirectory, string archiveDirectory, out IReadOnlyList<string> searchedLocations)
    {
        var searched = new List<string>();
        searchedLocations = searched;

        if (string.IsNullOrWhiteSpace(archiveDirectory) || !Directory.Exists(archiveDirectory))
            return null;

        var archive = new DirectoryInfo(archiveDirectory);
        DirectoryInfo? paydayRoot = null;
        var ancestors = new List<DirectoryInfo>();

        for (var walking = archive; walking is not null && ancestors.Count < 6; walking = walking.Parent)
        {
            ancestors.Add(walking);
            if (walking.Name.Equals("PAYDAY3", StringComparison.OrdinalIgnoreCase))
            {
                paydayRoot = walking;
                break;
            }
        }

        // A normal packaged PAYDAY 3 install is <Install>/PAYDAY3/Content/Paks.
        // If the directory name was changed, infer the project root from Content/Paks.
        paydayRoot ??= archive.Name.Equals("Paks", StringComparison.OrdinalIgnoreCase)
                      && archive.Parent?.Name.Equals("Content", StringComparison.OrdinalIgnoreCase) == true
            ? archive.Parent.Parent
            : ancestors.FirstOrDefault(x => Directory.Exists(Path.Combine(x.FullName, "Binaries", "Win64")));

        var exactCandidates = new List<string>();
        foreach (var root in ancestors)
        {
            exactCandidates.Add(Path.Combine(root.FullName, "Binaries", "Win64", OodleHelper.OODLE_DLL_NAME_OLD));
            exactCandidates.Add(Path.Combine(root.FullName, "Binaries", "Win64", OodleHelper.OODLE_DLL_NAME));
            exactCandidates.Add(Path.Combine(root.FullName, OodleHelper.OODLE_DLL_NAME_OLD));
            exactCandidates.Add(Path.Combine(root.FullName, OodleHelper.OODLE_DLL_NAME));
        }

        foreach (var candidate in exactCandidates.Distinct(StringComparer.OrdinalIgnoreCase))
        {
            if (File.Exists(candidate)) return candidate;
        }

        // Do not assume PAYDAY 3 uses the same Oodle major DLL name as this CUE4Parse snapshot.
        // Oodle's exported decompression API is versioned independently of the filename, so use the
        // copy shipped with the game whenever possible.
        var searchRoots = new List<string>();
        if (!string.IsNullOrWhiteSpace(gameDirectory) && Directory.Exists(gameDirectory))
        {
            var configuredRoot = Path.GetFullPath(gameDirectory);
            searchRoots.Add(Path.Combine(configuredRoot, "PAYDAY3", "Binaries"));
            searchRoots.Add(Path.Combine(configuredRoot, "Binaries"));
            searchRoots.Add(Path.Combine(configuredRoot, "Engine", "Binaries"));
            searchRoots.Add(Path.Combine(configuredRoot, "Engine", "Plugins", "Compression", "OodleDataCompression"));
        }

        if (!string.IsNullOrWhiteSpace(engineDirectory) && Directory.Exists(engineDirectory))
        {
            var engineRoot = Path.GetFullPath(engineDirectory);
            searchRoots.Add(Path.Combine(engineRoot, "Binaries"));
            searchRoots.Add(Path.Combine(engineRoot, "Plugins", "Compression", "OodleDataCompression"));
        }

        if (paydayRoot is not null)
        {
            searchRoots.Add(Path.Combine(paydayRoot.FullName, "Binaries"));

            var installRoot = paydayRoot.Parent;
            if (installRoot is not null)
            {
                searchRoots.Add(Path.Combine(installRoot.FullName, "Engine", "Binaries"));
                searchRoots.Add(Path.Combine(installRoot.FullName, "Engine", "Plugins", "Compression", "OodleDataCompression"));
            }
        }

        foreach (var ancestor in ancestors)
            searchRoots.Add(Path.Combine(ancestor.FullName, "Binaries"));

        var options = new EnumerationOptions
        {
            RecurseSubdirectories = true,
            IgnoreInaccessible = true,
            MatchCasing = MatchCasing.CaseInsensitive,
            ReturnSpecialDirectories = false
        };

        foreach (var root in searchRoots
                     .Where(Directory.Exists)
                     .Distinct(StringComparer.OrdinalIgnoreCase))
        {
            searched.Add(root);
            try
            {
                var versioned = Directory.EnumerateFiles(root, "oo2core_*_win64.dll", options)
                    .OrderByDescending(Path.GetFileName, StringComparer.OrdinalIgnoreCase)
                    .FirstOrDefault();
                if (versioned is not null) return versioned;

                var shared = Directory.EnumerateFiles(root, "oodle-data-shared.dll", options).FirstOrDefault();
                if (shared is not null) return shared;
            }
            catch (Exception)
            {
                // Ignore an inaccessible optional search location and continue with the next one.
            }
        }

        return null;
    }

    private static BackendResponse Shutdown()
    {
        lock (Sync)
        {
            _profile = null;
            return BackendResponse.Json(200, new { status = "Stopped" });
        }
    }

    private static bool Ready => _profile is { IsInitialized: true } p && p.Provider.Files.Count > 0;

    private static BackendResponse Status() => Ready
        ? BackendResponse.Json(200, new { status = "Initialized" })
        : BackendResponse.Json(503, new { status = "NotInitialized", error = _lastError });

    private static BackendResponse Metadata()
    {
        if (!Ready || _profile is null)
            return BackendResponse.Error(503, "crimeforge.backend.not_initialized", "PAYDAY 3 data provider is not initialized");

        return BackendResponse.Json(200, new
        {
            name = _profile.Provider.ProjectName,
            major_version = 5,
            minor_version = 5,
            profile = new { name = _profile.Name }
        });
    }

    private static BackendResponse Export(BackendRequest request)
    {
        if (!Ready) return BackendResponse.Error(503, "crimeforge.backend.not_initialized", "PAYDAY 3 data provider is not initialized");
        if (string.IsNullOrWhiteSpace(request.Path)) return BackendResponse.Error(400, "crimeforge.backend.no_path", "No asset path supplied");

        var parameters = request.Parameters ?? new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);
        string? Parameter(string key) => parameters.TryGetValue(key, out var value) ? value : null;
        bool? BoolParameter(string key)
        {
            var value = Parameter(key);
            return bool.TryParse(value, out var parsed) ? parsed : null;
        }

        var controller = NewController(request.ContentType);
        return Convert(controller.GetExport(
            request.Raw,
            request.Path,
            Parameter("export_name"),
            Parameter("export_type"),
            BoolParameter("metadata"),
            BoolParameter("save")));
    }

    private static BackendResponse StaticMesh(BackendRequest request)
    {
        if (!Ready) return BackendResponse.Error(503, "crimeforge.backend.not_initialized", "PAYDAY 3 data provider is not initialized");
        if (string.IsNullOrWhiteSpace(request.Path)) return BackendResponse.Error(400, "crimeforge.backend.no_path", "No static mesh path supplied");

        return Convert(NewController("application/x-crimeforge-staticmesh").GetStaticMeshData(request.Path));
    }

    private static BackendResponse FolderPaths(BackendRequest request)
    {
        if (!Ready) return BackendResponse.Error(503, "crimeforge.backend.not_initialized", "PAYDAY 3 data provider is not initialized");
        return Convert(NewController("application/json").GetFolderPaths(request.Path));
    }

    private static BackendResponse Validate(BackendRequest request)
    {
        if (!Ready) return BackendResponse.Error(503, "crimeforge.backend.not_initialized", "PAYDAY 3 data provider is not initialized");

        var body = request.Body?.ToObject<ValidationRequest>();
        return Convert(NewController("application/json").PostValidate(body));
    }

    private static AssetReaderController NewController(string? contentType)
    {
        var controller = new AssetReaderController();
        var context = new DefaultHttpContext();
        if (!string.IsNullOrWhiteSpace(contentType)) context.Request.Headers.ContentType = contentType;
        controller.ControllerContext = new ControllerContext { HttpContext = context };
        return controller;
    }

    private static BackendResponse Convert(ActionResult action)
    {
        switch (action)
        {
            case ContentResult content:
                return new BackendResponse(content.StatusCode ?? 200, content.ContentType ?? "text/plain",
                    Encoding.UTF8.GetBytes(content.Content ?? string.Empty));
            case FileContentResult file:
                return new BackendResponse(200, file.ContentType ?? "application/octet-stream", file.FileContents);
            case JsonResult json:
                return BackendResponse.Json(json.StatusCode ?? 200, json.Value ?? new { });
            case ObjectResult obj:
                return BackendResponse.Json(obj.StatusCode ?? 200, obj.Value ?? new { });
            case StatusCodeResult status:
                return new BackendResponse(status.StatusCode, "application/json", []);
            default:
                return BackendResponse.Error(500, "crimeforge.backend.unhandled_response", $"Unsupported backend response {action.GetType().Name}");
        }
    }
}
