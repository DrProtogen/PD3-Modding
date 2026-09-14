

#pragma once

#include "Importers/Constructor/Importer.h"
#include "Engine/StaticMesh.h"

class IStaticMeshImporter : public IImporter {
public:
	virtual UObject* CreateAsset(UObject* CreatedAsset = nullptr) override;
	virtual bool Import() override;
};

REGISTER_IMPORTER(IStaticMeshImporter, {
	"StaticMesh"
}, "Mesh Assets");
