using System;
using System.IO;

namespace CrimeFactory.Automation
{
    /** Shared by the two cooking paths. Uses the completed standard archive as its only source. */
    public static class CrimeFactoryZipExport
    {
        public static string Copy(string projectRoot, string exportRoot, string platform, string pluginName)
        {
            if (string.IsNullOrWhiteSpace(exportRoot)) return null;
            exportRoot = Path.IsPathRooted(exportRoot) ? Path.GetFullPath(exportRoot)
                : Path.GetFullPath(Path.Combine(projectRoot, exportRoot));
            var source = Path.GetFullPath(Path.Combine(projectRoot, "Saved", "ArchivedPlugins", platform, pluginName + ".zip"));
            var destinationDirectory = Path.Combine(exportRoot, platform);
            var destination = Path.GetFullPath(Path.Combine(destinationDirectory, pluginName + ".zip"));
            if (!File.Exists(source)) throw new FileNotFoundException("The archive to export does not exist.", source);
            if (string.Equals(source, destination, StringComparison.OrdinalIgnoreCase)) return source;
            Directory.CreateDirectory(destinationDirectory);
            var temporary = destination + "." + Guid.NewGuid().ToString("N") + ".tmp";
            try
            {
                File.Copy(source, temporary, false);
                File.Move(temporary, destination, true);
                return destination;
            }
            finally
            {
                if (File.Exists(temporary)) File.Delete(temporary);
            }
        }
    }
}
