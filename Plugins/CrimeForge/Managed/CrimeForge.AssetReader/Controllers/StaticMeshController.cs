using System.Text;
using CUE4Parse_Conversion.Meshes;
using CUE4Parse_Conversion.Meshes.PSK;
using CUE4Parse.UE4.Assets.Exports.Material;
using CUE4Parse.UE4.Assets.Exports.Nanite;
using CUE4Parse.UE4.Assets.Exports.StaticMesh;
using Microsoft.AspNetCore.Mvc;

namespace CrimeForge.AssetReader.Controllers;

public partial class AssetReaderController
{
    private const int CrimeForgeStaticMeshBinaryVersion = 1;

    /* Compact mesh payload consumed directly by CrimeForge's UStaticMesh importer. Keeping the
     * render buffers binary avoids turning large vertex/index arrays into enormous JSON strings. */
    [NonAction]
    public ActionResult GetStaticMeshData(string? rawPath)
    {
        if (!IsBaseProfileReady || MainProfile is null) return NotInitializedResponse;
        if (string.IsNullOrWhiteSpace(rawPath)) return BadRequest(new
        {
            errorCode = "crimeforge.static_mesh.no_path",
            errorMessage = "No static mesh path supplied"
        });

        var path = StripPackageSuffix(rawPath);
        var profile = FindBaseProfileForPath(path, out var found);
        if (!found) return NotFoundResponse;

        var mesh = LoadExportOfType<UStaticMesh>(profile.Provider, path);
        if (mesh is null) return NotFoundResponse;

        CStaticMesh converted;
        var convertedOk = mesh.TryConvert(out converted, ENaniteMeshFormat.OnlyNormalLODs);

        /* Some UE5 assets have no conventional render LOD left after cooking because Nanite is
         * the only geometry source. Fall back to CUE4Parse's Nanite decoder for those assets. */
        if (!convertedOk || converted.LODs.Count == 0)
        {
            converted.Dispose();
            convertedOk = mesh.TryConvert(out converted, ENaniteMeshFormat.OnlyNaniteLOD);
        }

        if (!convertedOk || converted.LODs.Count == 0)
        {
            converted.Dispose();
            return BadRequest(new
            {
                errorCode = "crimeforge.static_mesh.no_render_data",
                errorMessage = $"'{rawPath}' has no decodable static mesh render data"
            });
        }

        using (converted)
        using (var stream = new MemoryStream())
        using (var writer = new BinaryWriter(stream, Encoding.UTF8, leaveOpen: true))
        {
            writer.Write((byte)'C');
            writer.Write((byte)'F');
            writer.Write((byte)'S');
            writer.Write((byte)'M');
            writer.Write(CrimeForgeStaticMeshBinaryVersion);

            var staticMaterials = mesh.StaticMaterials;
            var materialCount = Math.Max(staticMaterials?.Length ?? 0, mesh.Materials?.Length ?? 0);
            writer.Write(materialCount);

            for (var materialIndex = 0; materialIndex < materialCount; materialIndex++)
            {
                var staticMaterial = staticMaterials is not null && materialIndex < staticMaterials.Length
                    ? staticMaterials[materialIndex]
                    : null;
                var material = mesh.Materials is not null && materialIndex < mesh.Materials.Length
                    ? mesh.Materials[materialIndex]
                    : staticMaterial?.MaterialInterface;
                var loadedMaterial = material?.Load<UMaterialInterface>();

                var slotName = staticMaterial?.MaterialSlotName.Text;
                if (string.IsNullOrWhiteSpace(slotName) || slotName.Equals("None", StringComparison.OrdinalIgnoreCase))
                    slotName = material?.Name.Text ?? $"Material_{materialIndex}";

                var importedSlotName = staticMaterial?.ImportedMaterialSlotName.Text;
                if (string.IsNullOrWhiteSpace(importedSlotName) || importedSlotName.Equals("None", StringComparison.OrdinalIgnoreCase))
                    importedSlotName = slotName;

                WriteString(writer, slotName);
                WriteString(writer, importedSlotName);
                WriteString(writer, material?.GetPathName() ?? string.Empty);
                WriteString(writer, loadedMaterial?.ExportType ?? string.Empty);
            }

            writer.Write(converted.LODs.Count);

            foreach (var lod in converted.LODs)
            {
                var vertices = lod.Verts ?? [];
                var indices = lod.Indices?.Value ?? [];
                var sections = lod.Sections?.Value ?? [];
                var uvChannels = Math.Max(1, lod.NumTexCoords);
                var hasVertexColors = lod.VertexColors is { Length: > 0 };

                writer.Write(uvChannels);
                writer.Write(lod.ScreenSize);
                writer.Write(vertices.Length);
                writer.Write(indices.Length);
                writer.Write(sections.Length);
                writer.Write(hasVertexColors);
                writer.Write(lod.IsNanite);

                for (var vertexIndex = 0; vertexIndex < vertices.Length; vertexIndex++)
                {
                    var vertex = vertices[vertexIndex];
                    writer.Write(vertex.Position.X);
                    writer.Write(vertex.Position.Y);
                    writer.Write(vertex.Position.Z);

                    writer.Write(vertex.Normal.X);
                    writer.Write(vertex.Normal.Y);
                    writer.Write(vertex.Normal.Z);
                    writer.Write(vertex.Normal.W);

                    writer.Write(vertex.Tangent.X);
                    writer.Write(vertex.Tangent.Y);
                    writer.Write(vertex.Tangent.Z);
                    writer.Write(vertex.Tangent.W);

                    writer.Write(vertex.UV.U);
                    writer.Write(vertex.UV.V);

                    var extraUvs = lod.ExtraUV?.Value;
                    for (var uvIndex = 1; uvIndex < uvChannels; uvIndex++)
                    {
                        if (extraUvs is not null && uvIndex - 1 < extraUvs.Length && vertexIndex < extraUvs[uvIndex - 1].Length)
                        {
                            writer.Write(extraUvs[uvIndex - 1][vertexIndex].U);
                            writer.Write(extraUvs[uvIndex - 1][vertexIndex].V);
                        }
                        else
                        {
                            writer.Write(0.0f);
                            writer.Write(0.0f);
                        }
                    }

                    if (hasVertexColors)
                    {
                        var color = lod.VertexColors![vertexIndex];
                        writer.Write(color.R);
                        writer.Write(color.G);
                        writer.Write(color.B);
                        writer.Write(color.A);
                    }
                }

                foreach (var index in indices) writer.Write(index);

                foreach (var section in sections)
                {
                    writer.Write(section.MaterialIndex);
                    writer.Write(section.FirstIndex);
                    writer.Write(section.NumFaces);
                    WriteString(writer, section.MaterialName ?? string.Empty);
                }
            }

            writer.Flush();
            return File(stream.ToArray(), "application/x-crimeforge-staticmesh");
        }
    }

    private static void WriteString(BinaryWriter writer, string value)
    {
        var bytes = Encoding.UTF8.GetBytes(value ?? string.Empty);
        writer.Write(bytes.Length);
        writer.Write(bytes);
    }
}
