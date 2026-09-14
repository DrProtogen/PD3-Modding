using System.Buffers.Binary;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Newtonsoft.Json;

namespace CrimeForge.AssetReader;

/* Native ABI used by CrimeForgeJsonImporter.
 * Returned buffer:
 *   int32 statusCode
 *   int32 contentTypeUtf8Length
 *   int32 payloadLength
 *   contentType UTF-8 bytes (no terminator)
 *   payload bytes
 */
public static unsafe class Bridge
{
    [UnmanagedCallersOnly(EntryPoint = "CrimeForgeAssetReader_Request", CallConvs = [typeof(CallConvCdecl)])]
    public static nint Request(byte* requestUtf8, int requestLength, int* responseLength)
    {
        try
        {
            if (requestUtf8 is null || requestLength <= 0)
                return Pack(BackendResponse.Error(400, "crimeforge.bridge.empty_request", "Empty request"), responseLength);

            var json = Encoding.UTF8.GetString(requestUtf8, requestLength);
            var request = JsonConvert.DeserializeObject<BackendRequest>(json);
            if (request is null)
                return Pack(BackendResponse.Error(400, "crimeforge.bridge.invalid_request", "Invalid request JSON"), responseLength);

            return Pack(Backend.Dispatch(request), responseLength);
        }
        catch (Exception ex)
        {
            return Pack(BackendResponse.Error(500, "crimeforge.bridge.exception", ex.ToString()), responseLength);
        }
    }

    [UnmanagedCallersOnly(EntryPoint = "CrimeForgeAssetReader_Free", CallConvs = [typeof(CallConvCdecl)])]
    public static void Free(nint allocation)
    {
        if (allocation != 0) NativeMemory.Free((void*)allocation);
    }

    private static nint Pack(BackendResponse response, int* responseLength)
    {
        var contentType = Encoding.UTF8.GetBytes(response.ContentType ?? string.Empty);
        var total = checked(12 + contentType.Length + response.Payload.Length);
        var memory = (byte*)NativeMemory.Alloc((nuint)total);
        var span = new Span<byte>(memory, total);

        BinaryPrimitives.WriteInt32LittleEndian(span[0..4], response.StatusCode);
        BinaryPrimitives.WriteInt32LittleEndian(span[4..8], contentType.Length);
        BinaryPrimitives.WriteInt32LittleEndian(span[8..12], response.Payload.Length);
        contentType.CopyTo(span[12..]);
        response.Payload.CopyTo(span[(12 + contentType.Length)..]);

        if (responseLength is not null) *responseLength = total;
        return (nint)memory;
    }
}
