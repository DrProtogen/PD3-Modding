namespace CrimeForge.AssetReader.Resources.Utilities;

/* File naming/MIME logic used by the old Core backend endpoint. CrimeForge does not carry Core's
 * UI/application decoder service; formats CUE4Parse can decode are returned directly. */
public static class AudioUtilities
{
    public static string ExtensionFor(string? audioFormat) => audioFormat?.ToUpperInvariant() switch
    {
        "RADA" => "rada",
        "BINKA" => "binka",
        "WEM" => "wem",
        "AT9" => "at9",
        "OPUS" => "opus",
        "ADPCM" => "adpcm",
        "PCM" or "WAV" => "wav",
        "OGG" => "ogg",
        null or "" => "ogg",
        _ => audioFormat.ToLowerInvariant()
    };

    public static bool IsReadable(string? audioFormat)
    {
        var extension = ExtensionFor(audioFormat);
        return extension is "wav" or "ogg";
    }

    /* External codec executables belonged to Core's desktop application. They are deliberately not
     * launched from the editor. CUE4Parse's own decoded output is still used whenever available. */
    public static bool TryConvertToWav(string sourcePath, out string wavPath)
    {
        wavPath = string.Empty;
        return false;
    }

    public static string MimeTypeFor(string? audioFormat) => ExtensionFor(audioFormat) switch
    {
        "wav" => "audio/wav",
        "adpcm" => "audio/adpcm",
        "opus" => "audio/opus",
        "wem" => "application/vnd.wwise.wem",
        "rada" => "audio/vnd.rad.rada",
        "binka" => "audio/vnd.rad.binka",
        "at9" => "audio/vnd.sony.at9",
        _ => "audio/ogg"
    };
}
