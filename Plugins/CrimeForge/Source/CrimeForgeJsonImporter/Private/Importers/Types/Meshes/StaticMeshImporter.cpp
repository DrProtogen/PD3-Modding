

#include "Importers/Types/Meshes/StaticMeshImporter.h"

#include "Importers/Constructor/Asset.h"
#include "Modules/AssetReader/AssetReader.h"
#include "Modules/AssetBackend/Tools/ConvexCollision.h"
#include "Utilities/AssetPaths.h"

#include "Materials/MaterialInterface.h"
#include "Engine/Log.h"
#include "MeshDescription.h"
#include "StaticMeshAttributes.h"
#include "UObject/Package.h"

namespace {
	constexpr int32 CrimeForgeStaticMeshBinaryVersion = 1;

	struct FCrimeForgeStaticMeshMaterial {
		FString SlotName;
		FString ImportedSlotName;
		FString ObjectPath;
		FString Type;
	};

	struct FCrimeForgeStaticMeshVertex {
		FVector3f Position = FVector3f(0.0f, 0.0f, 0.0f);
		FVector4f Normal = FVector4f(0, 0, 1, 1);
		FVector4f Tangent = FVector4f(1, 0, 0, 1);
		TArray<FVector2f> UVs;
		FColor Color = FColor::White;
	};

	struct FCrimeForgeStaticMeshSection {
		int32 MaterialIndex = 0;
		int32 FirstIndex = 0;
		int32 NumFaces = 0;
		FString MaterialName;
	};

	struct FCrimeForgeStaticMeshLOD {
		int32 NumTexCoords = 1;
		float ScreenSize = 0.0f;
		bool bHasVertexColors = false;
		bool bWasNanite = false;
		TArray<FCrimeForgeStaticMeshVertex> Vertices;
		TArray<uint32> Indices;
		TArray<FCrimeForgeStaticMeshSection> Sections;
	};

	class FCrimeForgeMeshBinaryReader {
	public:
		explicit FCrimeForgeMeshBinaryReader(const TArray<uint8>& InData)
			: Data(InData.GetData()), Size(InData.Num()) { }

		template<typename T>
		bool Read(T& OutValue) {
			if (!CanRead(sizeof(T))) return false;
			FMemory::Memcpy(&OutValue, Data + Offset, sizeof(T));
			Offset += sizeof(T);
			return true;
		}

		bool ReadBool(bool& OutValue) {
			uint8 Value = 0;
			if (!Read(Value)) return false;
			OutValue = Value != 0;
			return true;
		}

		bool ReadString(FString& OutString) {
			int32 ByteCount = 0;
			if (!Read(ByteCount) || ByteCount < 0 || !CanRead(ByteCount)) return false;

			if (ByteCount == 0) {
				OutString.Empty();
				return true;
			}

			const ANSICHAR* Utf8 = reinterpret_cast<const ANSICHAR*>(Data + Offset);
			FUTF8ToTCHAR Converted(Utf8, ByteCount);
			OutString = FString(Converted.Length(), Converted.Get());
			Offset += ByteCount;
			return true;
		}

		bool ReadMagic() {
			if (!CanRead(4)) return false;
			const bool bValid = Data[Offset] == 'C' && Data[Offset + 1] == 'F' && Data[Offset + 2] == 'S' && Data[Offset + 3] == 'M';
			Offset += 4;
			return bValid;
		}

	private:
		bool CanRead(const int64 ByteCount) const {
			return ByteCount >= 0 && Offset >= 0 && Offset + ByteCount <= Size;
		}

		const uint8* Data = nullptr;
		int64 Size = 0;
		int64 Offset = 0;
	};

	bool ParseStaticMeshPayload(
		const TArray<uint8>& Payload,
		TArray<FCrimeForgeStaticMeshMaterial>& OutMaterials,
		TArray<FCrimeForgeStaticMeshLOD>& OutLODs)
	{
		FCrimeForgeMeshBinaryReader Reader(Payload);
		if (!Reader.ReadMagic()) return false;

		int32 Version = 0;
		if (!Reader.Read(Version) || Version != CrimeForgeStaticMeshBinaryVersion) return false;

		int32 MaterialCount = 0;
		if (!Reader.Read(MaterialCount) || MaterialCount < 0 || MaterialCount > 4096) return false;
		OutMaterials.SetNum(MaterialCount);

		for (FCrimeForgeStaticMeshMaterial& Material : OutMaterials) {
			if (!Reader.ReadString(Material.SlotName) ||
				!Reader.ReadString(Material.ImportedSlotName) ||
				!Reader.ReadString(Material.ObjectPath) ||
				!Reader.ReadString(Material.Type)) {
				return false;
			}
		}

		int32 LODCount = 0;
		if (!Reader.Read(LODCount) || LODCount <= 0 || LODCount > 64) return false;
		OutLODs.SetNum(LODCount);

		for (FCrimeForgeStaticMeshLOD& LOD : OutLODs) {
			int32 VertexCount = 0;
			int32 IndexCount = 0;
			int32 SectionCount = 0;

			if (!Reader.Read(LOD.NumTexCoords) ||
				!Reader.Read(LOD.ScreenSize) ||
				!Reader.Read(VertexCount) ||
				!Reader.Read(IndexCount) ||
				!Reader.Read(SectionCount) ||
				!Reader.ReadBool(LOD.bHasVertexColors) ||
				!Reader.ReadBool(LOD.bWasNanite)) {
				return false;
			}

			if (LOD.NumTexCoords <= 0 || LOD.NumTexCoords > 8 ||
				VertexCount <= 0 || IndexCount <= 0 || IndexCount % 3 != 0 || SectionCount < 0) {
				return false;
			}

			LOD.Vertices.SetNum(VertexCount);
			for (FCrimeForgeStaticMeshVertex& Vertex : LOD.Vertices) {
				if (!Reader.Read(Vertex.Position.X) || !Reader.Read(Vertex.Position.Y) || !Reader.Read(Vertex.Position.Z) ||
					!Reader.Read(Vertex.Normal.X) || !Reader.Read(Vertex.Normal.Y) || !Reader.Read(Vertex.Normal.Z) || !Reader.Read(Vertex.Normal.W) ||
					!Reader.Read(Vertex.Tangent.X) || !Reader.Read(Vertex.Tangent.Y) || !Reader.Read(Vertex.Tangent.Z) || !Reader.Read(Vertex.Tangent.W)) {
					return false;
				}

				Vertex.UVs.SetNum(LOD.NumTexCoords);
				for (FVector2f& UV : Vertex.UVs) {
					if (!Reader.Read(UV.X) || !Reader.Read(UV.Y)) return false;
				}

				if (LOD.bHasVertexColors) {
					if (!Reader.Read(Vertex.Color.R) || !Reader.Read(Vertex.Color.G) || !Reader.Read(Vertex.Color.B) || !Reader.Read(Vertex.Color.A)) return false;
				}
			}

			LOD.Indices.SetNum(IndexCount);
			for (uint32& Index : LOD.Indices) {
				if (!Reader.Read(Index) || Index >= static_cast<uint32>(VertexCount)) return false;
			}

			LOD.Sections.SetNum(SectionCount);
			for (FCrimeForgeStaticMeshSection& Section : LOD.Sections) {
				if (!Reader.Read(Section.MaterialIndex) || !Reader.Read(Section.FirstIndex) || !Reader.Read(Section.NumFaces) || !Reader.ReadString(Section.MaterialName)) return false;
				if (Section.FirstIndex < 0 || Section.NumFaces < 0 || Section.FirstIndex + Section.NumFaces * 3 > IndexCount) return false;
			}
		}

		return true;
	}

	FName ResolveSectionSlotName(
		const FCrimeForgeStaticMeshSection& Section,
		const TArray<FCrimeForgeStaticMeshMaterial>& Materials)
	{
		if (Materials.IsValidIndex(Section.MaterialIndex) && !Materials[Section.MaterialIndex].SlotName.IsEmpty()) {
			return FName(*Materials[Section.MaterialIndex].SlotName);
		}
		if (!Section.MaterialName.IsEmpty()) return FName(*Section.MaterialName);
		return FName(*FString::Printf(TEXT("Material_%d"), FMath::Max(0, Section.MaterialIndex)));
	}

	void ApplyVertexInstance(
		const FCrimeForgeStaticMeshVertex& SourceVertex,
		const FVertexInstanceID VertexInstanceID,
		TVertexInstanceAttributesRef<FVector3f>& Normals,
		TVertexInstanceAttributesRef<FVector3f>& Tangents,
		TVertexInstanceAttributesRef<float>& BinormalSigns,
		TVertexInstanceAttributesRef<FVector4f>& Colors,
		TVertexInstanceAttributesRef<FVector2f>& UVs)
	{
		Normals[VertexInstanceID] = FVector3f(SourceVertex.Normal.X, SourceVertex.Normal.Y, SourceVertex.Normal.Z).GetSafeNormal();
		Tangents[VertexInstanceID] = FVector3f(SourceVertex.Tangent.X, SourceVertex.Tangent.Y, SourceVertex.Tangent.Z).GetSafeNormal();
		BinormalSigns[VertexInstanceID] = SourceVertex.Normal.W < 0.0f ? -1.0f : 1.0f;
		Colors[VertexInstanceID] = FVector4f(
			SourceVertex.Color.R / 255.0f,
			SourceVertex.Color.G / 255.0f,
			SourceVertex.Color.B / 255.0f,
			SourceVertex.Color.A / 255.0f);

		for (int32 UVIndex = 0; UVIndex < SourceVertex.UVs.Num(); ++UVIndex) {
			UVs.Set(VertexInstanceID, UVIndex, SourceVertex.UVs[UVIndex]);
		}
	}

	bool BuildMeshDescription(
		UStaticMesh* StaticMesh,
		const int32 LODIndex,
		const FCrimeForgeStaticMeshLOD& SourceLOD,
		const TArray<FCrimeForgeStaticMeshMaterial>& Materials)
	{
		FMeshDescription* MeshDescription = StaticMesh->CreateMeshDescription(LODIndex);
		if (!MeshDescription) return false;

		FStaticMeshAttributes Attributes(*MeshDescription);
		Attributes.Register();

		TVertexAttributesRef<FVector3f> Positions = Attributes.GetVertexPositions();
		TVertexInstanceAttributesRef<FVector3f> Normals = Attributes.GetVertexInstanceNormals();
		TVertexInstanceAttributesRef<FVector3f> Tangents = Attributes.GetVertexInstanceTangents();
		TVertexInstanceAttributesRef<float> BinormalSigns = Attributes.GetVertexInstanceBinormalSigns();
		TVertexInstanceAttributesRef<FVector4f> Colors = Attributes.GetVertexInstanceColors();
		TVertexInstanceAttributesRef<FVector2f> UVs = Attributes.GetVertexInstanceUVs();
		TPolygonGroupAttributesRef<FName> MaterialSlotNames = Attributes.GetPolygonGroupMaterialSlotNames();
		UVs.SetNumChannels(SourceLOD.NumTexCoords);

		TArray<FVertexID> VertexIDs;
		VertexIDs.Reserve(SourceLOD.Vertices.Num());
		for (const FCrimeForgeStaticMeshVertex& Vertex : SourceLOD.Vertices) {
			const FVertexID VertexID = MeshDescription->CreateVertex();
			Positions[VertexID] = Vertex.Position;
			VertexIDs.Add(VertexID);
		}

		auto AddTriangleRange = [&](const FPolygonGroupID PolygonGroupID, const int32 FirstIndex, const int32 NumFaces) {
			for (int32 FaceIndex = 0; FaceIndex < NumFaces; ++FaceIndex) {
				const int32 TriangleStart = FirstIndex + FaceIndex * 3;
				if (!SourceLOD.Indices.IsValidIndex(TriangleStart + 2)) continue;

				TArray<FVertexInstanceID, TInlineAllocator<3>> Instances;
				Instances.Reserve(3);
				bool bValidTriangle = true;

				for (int32 Corner = 0; Corner < 3; ++Corner) {
					const uint32 SourceIndex = SourceLOD.Indices[TriangleStart + Corner];
					if (!VertexIDs.IsValidIndex(static_cast<int32>(SourceIndex))) {
						bValidTriangle = false;
						break;
					}

					const FVertexInstanceID InstanceID = MeshDescription->CreateVertexInstance(VertexIDs[SourceIndex]);
					ApplyVertexInstance(SourceLOD.Vertices[SourceIndex], InstanceID, Normals, Tangents, BinormalSigns, Colors, UVs);
					Instances.Add(InstanceID);
				}

				if (bValidTriangle && Instances.Num() == 3) {
					MeshDescription->CreatePolygon(PolygonGroupID, MakeArrayView(Instances.GetData(), Instances.Num()), nullptr);
				}
			}
		};

		if (SourceLOD.Sections.Num() == 0) {
			const FPolygonGroupID GroupID = MeshDescription->CreatePolygonGroup();
			MaterialSlotNames[GroupID] = Materials.Num() > 0 ? FName(*Materials[0].SlotName) : FName(TEXT("Material_0"));
			AddTriangleRange(GroupID, 0, SourceLOD.Indices.Num() / 3);
		} else {
			for (const FCrimeForgeStaticMeshSection& Section : SourceLOD.Sections) {
				const FPolygonGroupID GroupID = MeshDescription->CreatePolygonGroup();
				MaterialSlotNames[GroupID] = ResolveSectionSlotName(Section, Materials);
				AddTriangleRange(GroupID, Section.FirstIndex, Section.NumFaces);
			}
		}

		UStaticMesh::FCommitMeshDescriptionParams CommitParams;
		CommitParams.bMarkPackageDirty = false;
		StaticMesh->CommitMeshDescription(LODIndex, CommitParams);
		return true;
	}
}

UObject* IStaticMeshImporter::CreateAsset(UObject* CreatedAsset) {
	if (UStaticMesh* Existing = FindObject<UStaticMesh>(GetPackage(), *GetAssetName())) {
		return IImporter::CreateAsset(Existing);
	}

	return IImporter::CreateAsset(NewObject<UStaticMesh>(GetPackage(), UStaticMesh::StaticClass(), *GetAssetName(), RF_Public | RF_Standalone));
}

bool IStaticMeshImporter::Import() {
	FString BackendPath = GetPackage()->GetName();
	if (GetAssetExport()->TryGetStringField(TEXT("ObjectPath"), BackendPath)) {
		BackendPath.Split(TEXT("."), &BackendPath, nullptr);
	}

	const TSharedRef<FJsonObject> Request = MakeShared<FJsonObject>();
	Request->SetStringField(TEXT("op"), TEXT("static_mesh"));
	Request->SetStringField(TEXT("path"), BackendPath);

	const FCrimeForgeAssetReaderResponse Response = FCrimeForgeAssetReader::Get().RequestBlocking(Request);
	if (!Response.IsSuccess() || Response.IsJson() || Response.Content.Num() == 0) {
		UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("AssetReader did not return render data for static mesh '%s'."), *GetAssetName());
		return false;
	}

	TArray<FCrimeForgeStaticMeshMaterial> Materials;
	TArray<FCrimeForgeStaticMeshLOD> LODs;
	if (!ParseStaticMeshPayload(Response.Content, Materials, LODs)) {
		UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("AssetReader returned invalid static mesh data for '%s'."), *GetAssetName());
		return false;
	}

	UStaticMesh* StaticMesh = Create<UStaticMesh>();
	if (!StaticMesh) return false;

	StaticMesh->PreEditChange(nullptr);
	StaticMesh->Modify();
	StaticMesh->GetStaticMaterials().Empty();
	StaticMesh->Sockets.Empty();
	StaticMesh->ClearMeshDescriptions();
	StaticMesh->SetNumSourceModels(LODs.Num());
	StaticMesh->bAutoComputeLODScreenSize = true;

	for (const FCrimeForgeStaticMeshMaterial& MaterialInfo : Materials) {
		TObjectPtr<UMaterialInterface> Material = nullptr;
		const FString MaterialPath = MaterialInfo.ObjectPath.IsEmpty()
			? FString()
			: ToEditorPackagePath(MaterialInfo.ObjectPath);

		if (!MaterialPath.IsEmpty()) {
			Material = LoadObjectByPath<UMaterialInterface>(MaterialPath);

			if (!Material && !MaterialInfo.Type.IsEmpty()) {
				bool bImported = false;
				FAssetUtilities::ConstructAsset<UMaterialInterface>(MaterialPath, MaterialPath, MaterialInfo.Type, Material, bImported);
			}
		}

		const FName SlotName = MaterialInfo.SlotName.IsEmpty() ? NAME_None : FName(*MaterialInfo.SlotName);
		const FName ImportedSlotName = MaterialInfo.ImportedSlotName.IsEmpty() ? SlotName : FName(*MaterialInfo.ImportedSlotName);
		FStaticMaterial StaticMaterial;
		StaticMaterial.MaterialInterface = Material;
		StaticMaterial.MaterialSlotName = SlotName;
		StaticMaterial.ImportedMaterialSlotName = ImportedSlotName;
		StaticMesh->GetStaticMaterials().Add(MoveTemp(StaticMaterial));
	}

	/* A few cooked meshes expose section material indices without a complete StaticMaterials array.
	 * Keep those sections addressable rather than letting the mesh builder collapse them into slot 0. */
	int32 HighestMaterialIndex = INDEX_NONE;
	for (const FCrimeForgeStaticMeshLOD& LOD : LODs) {
		for (const FCrimeForgeStaticMeshSection& Section : LOD.Sections) {
			HighestMaterialIndex = FMath::Max(HighestMaterialIndex, Section.MaterialIndex);
		}
	}

	while (StaticMesh->GetStaticMaterials().Num() <= HighestMaterialIndex) {
		const int32 SlotIndex = StaticMesh->GetStaticMaterials().Num();
		FName SlotName(*FString::Printf(TEXT("Material_%d"), SlotIndex));

		for (const FCrimeForgeStaticMeshLOD& LOD : LODs) {
			for (const FCrimeForgeStaticMeshSection& Section : LOD.Sections) {
				if (Section.MaterialIndex == SlotIndex && !Section.MaterialName.IsEmpty()) {
					SlotName = FName(*Section.MaterialName);
					break;
				}
			}
		}

		FStaticMaterial StaticMaterial;
		StaticMaterial.MaterialInterface = nullptr;
		StaticMaterial.MaterialSlotName = SlotName;
		StaticMaterial.ImportedMaterialSlotName = SlotName;
		StaticMesh->GetStaticMaterials().Add(MoveTemp(StaticMaterial));
	}

	for (int32 LODIndex = 0; LODIndex < LODs.Num(); ++LODIndex) {
		if (!BuildMeshDescription(StaticMesh, LODIndex, LODs[LODIndex], Materials)) {
			UE_LOG(LogCrimeForgeJsonImporter, Error, TEXT("Failed to construct LOD %d for static mesh '%s'."), LODIndex, *GetAssetName());
			return false;
		}

		FStaticMeshSourceModel& SourceModel = StaticMesh->GetSourceModel(LODIndex);
		SourceModel.BuildSettings.bRecomputeNormals = false;
		SourceModel.BuildSettings.bRecomputeTangents = false;
		SourceModel.BuildSettings.bUseMikkTSpace = false;
		SourceModel.BuildSettings.bRemoveDegenerates = true;
		SourceModel.BuildSettings.bGenerateLightmapUVs = false;
		SourceModel.BuildSettings.bUseFullPrecisionUVs = true;
	}

	/* Supplying OutErrors forces UE5.5's UStaticMesh::Build overload to build
	 * synchronously instead of queuing an async static-mesh compile. That is important
	 * here because the importer immediately applies collision/properties and finalizes
	 * the same asset. */
	TArray<FText> BuildErrors;
	StaticMesh->Build(true, &BuildErrors);
	for (const FText& BuildError : BuildErrors) {
		UE_LOG(LogCrimeForgeJsonImporter, Warning, TEXT("Static mesh '%s' build: %s"), *GetAssetName(), *BuildError.ToString());
	}

	StaticMesh->CreateBodySetup();

	/* Reuse the existing static-mesh metadata path for sockets, BodySetup/convex collision,
	 * material slot metadata and normal UObject properties after the render geometry exists. */
	TToolConvexCollision StaticMeshMetadata;
	StaticMeshMetadata.Initialize(AssetExport, AssetContainer);
	StaticMeshMetadata.Process(StaticMesh, GetContainer()->JsonObjects);

	/* OnAssetCreation performs the single editor change notification and waits for any
	 * compilation that notification may start before saving the package. */
	StaticMesh->MarkPackageDirty();
	return OnAssetCreation(StaticMesh);
}
