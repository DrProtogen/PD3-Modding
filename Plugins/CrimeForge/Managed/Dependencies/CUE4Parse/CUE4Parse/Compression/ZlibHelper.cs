using System;
using System.IO;
using System.IO.Compression;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading.Tasks;

using CUE4Parse.UE4.Exceptions;
using CUE4Parse.UE4.Readers;

using Serilog;

using ZlibngDotNet;

namespace CUE4Parse.Compression;

public class ZlibException : ParserException
{
    public ZlibException(string? message = null, Exception? innerException = null) : base(message, innerException) { }
    public ZlibException(FArchive reader, string? message = null, Exception? innerException = null) : base(reader, message, innerException) { }
}

public static class ZlibHelper
{
    public const string DOWNLOAD_URL = "https://github.com/NotOfficer/Zlib-ng.NET/releases/download/1.0.0/zlib-ng2.dll";
    public const string DLL_NAME = "zlib-ng2.dll";

    public static Zlibng? Instance { get; private set; }

    public static void Initialize(string path)
    {
        Instance?.Dispose();
        if (File.Exists(path))
            Instance = new Zlibng(path);
    }

    public static void Initialize(Zlibng instance)
    {
        Instance?.Dispose();
        Instance = instance;
    }

    public static bool DownloadDll(string? path = null, string? url = null)
    {
        if (File.Exists(path ?? DLL_NAME)) return true;
        return DownloadDllAsync(path, url).GetAwaiter().GetResult();
    }

    public static void Decompress(byte[] compressed, int compressedOffset, int compressedSize,
        byte[] uncompressed, int uncompressedOffset, int uncompressedSize, FArchive? reader = null)
    {
        if (Instance is not null)
        {
            var result = Instance.Uncompress(uncompressed.AsSpan(uncompressedOffset, uncompressedSize),
                compressed.AsSpan(compressedOffset, compressedSize), out int decodedSize);

            if (result != ZlibngCompressionResult.Ok)
            {
                var message = $"Zlib decompression failed with result {result}";
                if (reader is not null) throw new ZlibException(reader, message);
                throw new ZlibException(message);
            }

            if (decodedSize < uncompressedSize)
            {
                Log.Warning("Zlib decompression only decompressed {0} bytes of the expected {1} bytes", decodedSize, uncompressedSize);
            }
            return;
        }

        // CrimeForge ships CUE4Parse as a framework-dependent .NET 8 backend and intentionally does
        // not require the optional CUE4Parse-Natives/Zlib-ng DLL. .NET's built-in ZLibStream is a
        // compatible fallback for Unreal's Zlib-compressed container blocks.
        try
        {
            using var input = new MemoryStream(compressed, compressedOffset, compressedSize, writable: false);
            using var zlib = new ZLibStream(input, CompressionMode.Decompress, leaveOpen: false);

            var totalRead = 0;
            while (totalRead < uncompressedSize)
            {
                var read = zlib.Read(uncompressed, uncompressedOffset + totalRead, uncompressedSize - totalRead);
                if (read == 0) break;
                totalRead += read;
            }

            if (totalRead != uncompressedSize)
            {
                var message = $"Zlib decompression produced {totalRead} bytes, expected {uncompressedSize}";
                if (reader is not null) throw new ZlibException(reader, message);
                throw new ZlibException(message);
            }
        }
        catch (ZlibException)
        {
            throw;
        }
        catch (Exception ex)
        {
            var message = $"Zlib decompression failed using the managed .NET fallback: {ex.Message}";
            if (reader is not null) throw new ZlibException(reader, message, ex);
            throw new ZlibException(message, ex);
        }
    }

    public static async Task<bool> DownloadDllAsync(string? path, string? url = null)
    {
        using var client = new HttpClient(new SocketsHttpHandler
        {
            UseProxy = false,
            UseCookies = false,
            AutomaticDecompression = DecompressionMethods.All
        });
        client.DefaultRequestHeaders.UserAgent.Add(new ProductInfoHeaderValue(
            nameof(CUE4Parse),
            typeof(ZlibHelper).Assembly.GetName().Version?.ToString() ?? "1.0.0"));
        client.Timeout = TimeSpan.FromSeconds(30);
        try
        {
            var dllPath = path ?? DLL_NAME;
            {
                using var dllResponse = await client.GetAsync(url ?? DOWNLOAD_URL).ConfigureAwait(false);
                dllResponse.EnsureSuccessStatusCode();
                await using var dllFs = File.Create(dllPath);
                await dllResponse.Content.CopyToAsync(dllFs).ConfigureAwait(false);
            }
            Log.Information("Successfully downloaded Zlib-ng dll at {0}", dllPath);
            return true;
        }
        catch (Exception ex)
        {
            Log.Warning(ex, "Uncaught exception while downloading Zlib-ng dll");
        }
        return false;
    }
}
