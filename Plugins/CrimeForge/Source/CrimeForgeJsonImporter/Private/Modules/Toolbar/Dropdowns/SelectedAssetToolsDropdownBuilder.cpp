

#include "Modules/Toolbar/Dropdowns/SelectedAssetToolsDropdownBuilder.h"

#include "Algo/Sort.h"

#include "Modules/AssetBackend/AssetBackend.h"
#include "Modules/Tools/ToolRegistry.h"

/* Every tool registers from its own header, so including them is what puts them in the menu */
#include "Modules/AssetBackend/Tools/AnimationData.h"
#include "Modules/AssetBackend/Tools/ConvexCollision.h"
#include "Modules/AssetBackend/Tools/CurveLinearColorData.h"
#include "Modules/AssetBackend/Tools/FontData.h"
#include "Modules/AssetBackend/Tools/SkeletalMeshData.h"
#include "Modules/AssetBackend/Tools/WidgetAnimations.h"

void ISelectedAssetToolsDropdownBuilder::Build(FMenuBuilder& MenuBuilder) const {
	/* Everything in here works off whatever is selected in the content browser. Importing by path
	 * or by folder doesn't, so those live on the import button instead. */
	MenuBuilder.BeginSection("CrimeForgeJsonImporterSelectedAssetsSection", FText::FromString("Selected Assets"));

	TArray<TSelectedAssetsBase*> Tools;

	for (const TPair<FName, FToolInstanceDelegate>& Registration : GetToolRegistry()) {
		TSelectedAssetsBase* Tool = Registration.Value();

		/* A tool with no name isn't meant to be reachable from the menu */
		if (Tool == nullptr || Tool->GetDisplayName().IsEmpty()) continue;

		Tools.Add(Tool);
	}

	/* Registration order is the linker's business, so the menu sorts itself */
	Algo::Sort(Tools, [](const TSelectedAssetsBase* A, const TSelectedAssetsBase* B) {
		return A->GetDisplayName().CompareTo(B->GetDisplayName()) < 0;
	});

	for (TSelectedAssetsBase* Tool : Tools) {
		MenuBuilder.AddMenuEntry(
			Tool->GetDisplayName(),
			Tool->GetTooltip(),
			Tool->GetIcon(),

			FUIAction(
				FExecuteAction::CreateLambda([Tool] {
					Tool->Execute();
				}),

				/* Menu entries are only useful with something on the other end, and a tool that is
				 * still working would refuse a second run anyway */
				FCanExecuteAction::CreateLambda([Tool] {
					return AssetBackend::Status::IsOpened() && !Tool->IsRunning();
				})
			),
			NAME_None
		);
	}

	MenuBuilder.EndSection();
}
