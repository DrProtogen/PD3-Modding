using CUE4Parse.UE4.Objects.Meshes;
using CUE4Parse.Utils;
using Newtonsoft.Json;
using Newtonsoft.Json.Serialization;

namespace CrimeForge.AssetReader.Resources.Convertors;

public sealed class FColorVertexBufferCustomConverter : JsonConverter<FColorVertexBuffer>
{
    public override void WriteJson(JsonWriter writer, FColorVertexBuffer? value, JsonSerializer serializer)
    {
        writer.WriteStartObject();
        writer.WritePropertyName("Data");
        writer.WriteStartArray();

        foreach (var c in value!.Data)
            writer.WriteValue(UnsafePrint.BytesToHex(c.A, c.R, c.G, c.B));

        writer.WriteEndArray();
        writer.WritePropertyName("Stride");
        writer.WriteValue(value.Stride);
        writer.WritePropertyName("NumVertices");
        writer.WriteValue(value.NumVertices);
        writer.WriteEndObject();
    }

    public override FColorVertexBuffer ReadJson(JsonReader reader, Type objectType, FColorVertexBuffer? existingValue,
        bool hasExistingValue, JsonSerializer serializer) => throw new NotImplementedException();
}

public sealed class FColorVertexBufferCustomResolver(Dictionary<Type, JsonConverter?> converters) : DefaultContractResolver
{
    private readonly Dictionary<Type, JsonConverter?> _converters = converters;

    protected override JsonObjectContract CreateObjectContract(Type objectType)
    {
        var contract = base.CreateObjectContract(objectType);
        if (_converters.TryGetValue(objectType, out var converter)) contract.Converter = converter;
        return contract;
    }
}
