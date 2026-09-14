namespace CrimeForge.AssetReader.Resources;

/* Core's application-wide Globals reduced to the one directory the importer export path needs. */
public static class Globals
{
    public static DirectoryInfo AudioFilesFolder { get; private set; } =
        new(Path.Combine(Path.GetTempPath(), "CrimeForge", "Audio"));

    public static void SetAudioFilesFolder(string path)
    {
        AudioFilesFolder = new DirectoryInfo(path);
        AudioFilesFolder.Create();
    }
}
