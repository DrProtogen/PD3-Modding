using CUE4Parse.MappingsProvider;
using CUE4Parse.UE4.Versions;

namespace CrimeForge.AssetReader.Resources.Framework.Base;

public enum EAudioFormatType
{
    Decompressed,
    Raw
}

/* Only the runtime state the legacy Core backend actually consumed. No MVVM/profile editor/UI state. */
public sealed class BaseProfile
{
    public string Name { get; set; } = "PAYDAY 3";
    public EGame Version { get; set; } = EGame.GAME_UE5_5;
    public EAudioFormatType AudioFormat { get; set; } = EAudioFormatType.Decompressed;
    public BaseProvider Provider { get; set; } = null!;
    public bool IsInitialized { get; set; }
    public ITypeMappingsProvider? CookedMappings { get; set; }
    public ITypeMappingsProvider? EditorMappings { get; set; }
    public string? LoadedMappingsFile { get; set; }
}
