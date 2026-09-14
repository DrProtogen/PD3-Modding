using CUE4Parse.FileProvider.Vfs;
using CUE4Parse.UE4.Readers;
using CUE4Parse.UE4.Versions;

namespace CrimeForge.AssetReader.Resources.Framework.Base;

/* Stripped from Core: filesystem-backed CUE4Parse provider only. */
public sealed class BaseProvider : AbstractVfsFileProvider
{
    private readonly DirectoryInfo _workingDirectory;
    private static readonly EnumerationOptions EnumerationOptions = new()
    {
        RecurseSubdirectories = true,
        IgnoreInaccessible = true
    };

    public BaseProvider(string directory, VersionContainer? version = null)
        : base(version, StringComparer.OrdinalIgnoreCase)
    {
        _workingDirectory = new DirectoryInfo(directory);
        SkipReferencedTextures = true;
    }

    public string WorkingDirectoryForCrimeForge => _workingDirectory.FullName;

    public override void Initialize()
    {
        if (!_workingDirectory.Exists)
            throw new DirectoryNotFoundException($"PAYDAY 3 archive folder does not exist: {_workingDirectory.FullName}");

        foreach (var file in _workingDirectory.EnumerateFiles("*.*", EnumerationOptions))
        {
            RegisterVfs(file.FullName, [file.OpenRead()], it => new FStreamArchive(it, File.OpenRead(it), Versions));
        }
    }
}
