using CUE4Parse.Utils;

using Microsoft.AspNetCore.Mvc;

using CrimeForge.AssetReader.Resources.Framework.Base;

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/* CrimeForge Embedded Backend: Folder                                                                                                    */
/*                                                                                                                                  */
/* Lists every asset path under a folder of the mounted game files. Used by CrimeForge to import a whole folder without anything   */
/* in the project pointing at it first.                                                                                             */
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

namespace CrimeForge.AssetReader.Controllers;

public partial class AssetReaderController
{
    /* Every asset path under a folder, in the same form the export endpoint takes back */
    [HttpGet("folder/paths")]
    public ActionResult GetFolderPaths(string? path)
    {
        if (!IsBaseProfileReady || MainProfile is null) return NotInitializedResponse;

        if (string.IsNullOrWhiteSpace(path)) return BadRequest(new
        {
            errorCode = "asset_reader.folder.no_path",
            errorMessage = "No folder supplied",
            numericErrorCode = 1003
        });

        var folder = ToGameFolderPath(path, MainProfile.Provider);
        if (folder is null) return NotFoundResponse;

        /* Keep the lightweight package type beside each path. CrimeForge's queue needs this before an import starts,
         * otherwise every newly listed asset is forced into the Unresolved/Unknown bucket until its full JSON export
         * has already been imported. The value is only the root asset class name, not any asset payload. */
        var assetsByPath = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase);

        CollectFolderAssets(MainProfile.Provider, folder, assetsByPath);

        /* A folder can be split across profiles, the same way a single path can be */
        foreach (var profile in SecondaryBaseProfiles)
        {
            if (!profile.IsInitialized) continue;

            CollectFolderAssets(profile.Provider, ToGameFolderPath(path, profile.Provider) ?? folder, assetsByPath);
        }

        if (assetsByPath.Count == 0) return NotFoundResponse;

        var ordered = assetsByPath
            .OrderBy(pair => pair.Key, StringComparer.OrdinalIgnoreCase)
            .ToArray();

        return new JsonResult(new
        {
            path = folder,
            /* Retain the old paths array for callers that only need package names. */
            paths = ordered.Select(pair => pair.Key).ToArray(),
            assets = ordered.Select(pair => new { path = pair.Key, type = pair.Value }).ToArray()
        });
    }

    /* Everything mounted below Folder, subfolders included. The type is resolved from the package's root export.
     * Blueprint packages are special-cased toward their generated class because that is the export CrimeForge imports. */
    private static void CollectFolderAssets(BaseProvider provider, string folder, Dictionary<string, string> assetsByPath)
    {
        var prefix = folder + "/";

        foreach (var file in provider.Files.Values)
        {
            if (file is null || !file.IsUePackage) continue;

            var packagePath = file.PathWithoutExtension;

            /* Editor-only side files ("Foo.o.uasset") are not assets of their own */
            if (packagePath.EndsWith(".o", StringComparison.OrdinalIgnoreCase)) continue;
            if (!packagePath.StartsWith(prefix, StringComparison.OrdinalIgnoreCase)) continue;

            /* One package is several mounted files. A secondary profile may supply a type if the first copy did not. */
            if (assetsByPath.TryGetValue(packagePath, out var existingType) && !string.IsNullOrWhiteSpace(existingType))
                continue;

            var assetType = string.Empty;
            try
            {
                if (provider.TryLoadPackage(file, out var package))
                {
                    var exports = package.GetExports().ToArray();
                    var slash = packagePath.LastIndexOf('/');
                    var leafName = slash >= 0 ? packagePath[(slash + 1)..] : packagePath;

                    var primary = exports.FirstOrDefault(export =>
                                      export.Name.Equals(leafName + "_C", StringComparison.OrdinalIgnoreCase) &&
                                      export.ExportType.Contains("GeneratedClass", StringComparison.OrdinalIgnoreCase))
                                  ?? exports.FirstOrDefault(export => export.Name.Equals(leafName, StringComparison.OrdinalIgnoreCase))
                                  ?? exports.FirstOrDefault(export => export.ExportType.Contains("GeneratedClass", StringComparison.OrdinalIgnoreCase))
                                  ?? exports.FirstOrDefault();

                    assetType = primary?.ExportType ?? string.Empty;
                }
            }
            catch
            {
                /* Folder listing must remain useful even when one unusual package cannot be deserialized. The queue will
                 * keep that one entry unresolved and the normal importer can report the detailed error if it is selected. */
            }

            assetsByPath[packagePath] = assetType;
        }
    }

    /* Takes the folder however it was typed, editor form or the way the mounted files spell it,
     * and hands back the latter. Null when it names a root nothing is mounted under. */
    private static string? ToGameFolderPath(string rawFolder, BaseProvider provider)
    {
        var folder = rawFolder.Trim().Replace('\\', '/').Trim('/');
        if (folder.Length == 0) return null;

        var root = folder.SubstringBefore('/');
        var remainder = folder.Length > root.Length ? folder[(root.Length + 1)..] : string.Empty;

        /* Already a path into the mounted files, plugin folders and all */
        if (root.Equals(provider.ProjectName, StringComparison.OrdinalIgnoreCase)) return folder;

        if (root.Equals("Engine", StringComparison.OrdinalIgnoreCase))
        {
            return remainder.StartsWith("Content", StringComparison.OrdinalIgnoreCase)
                ? folder
                : CombineFolder("Engine/Content", remainder);
        }

        /* The editor's own root for the project's content */
        if (root.Equals("Game", StringComparison.OrdinalIgnoreCase))
        {
            return CombineFolder(provider.ProjectName + "/Content", remainder);
        }

        /* Anything else is a mount named after the plugin it came from */
        if (provider.VirtualPaths.TryGetValue(root, out var virtualPath))
        {
            return CombineFolder(virtualPath.Replace('\\', '/').Trim('/') + "/Content", remainder);
        }

        return null;
    }

    private static string CombineFolder(string root, string remainder)
    {
        return remainder.Length == 0 ? root : root + "/" + remainder;
    }
}
