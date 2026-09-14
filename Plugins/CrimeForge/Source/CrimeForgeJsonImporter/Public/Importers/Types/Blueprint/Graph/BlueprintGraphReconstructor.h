

#pragma once

#include "CoreMinimal.h"

class UBlueprint;
struct FUObjectExportContainer;

/**
 * Reconstructs editable K2 function graphs from the structured Kismet ScriptBytecode emitted by
 * FModel/UEParse.  This is intentionally a decompiler rather than a bytecode copier: compiler
 * temporaries (CallFunc_*, Temp_*) are folded back into expression wires and the resulting graph is
 * a readable, functionally-equivalent Blueprint graph.
 *
 * Phase 1 handles standalone function graphs.  ExecuteUbergraph_* and the generated event wrappers
 * that merely forward an entry-point offset into the ubergraph are left alone for the event-graph
 * pass; creating them as normal functions would only duplicate compiler output.
 */
struct CRIMEFORGEJSONIMPORTER_API FBlueprintGraphReconstructor {
	/** Global pass 1a: create standalone function graphs/signatures only. No graph bodies are emitted. */
	static int32 DeclareFunctions(UBlueprint* Blueprint, FUObjectExportContainer* Container);

	/** Global pass 1b: create native/custom/component-bound Event Graph entry nodes and their pins only. */
	static int32 DeclareEventGraph(UBlueprint* Blueprint, FUObjectExportContainer* Container);

	/** Global pass 2a: fill bodies for the standalone function graphs declared during pass 1. */
	static int32 BuildFunctionBodies(UBlueprint* Blueprint, FUObjectExportContainer* Container);

	/** Global pass 2b: decompile ExecuteUbergraph entry paths into the event nodes declared during pass 1. */
	static int32 BuildEventGraphBodies(UBlueprint* Blueprint, FUObjectExportContainer* Container);

	/** Compatibility wrappers. New import code should use the global declaration/body passes above. */
	static int32 ReconstructFunctions(UBlueprint* Blueprint, FUObjectExportContainer* Container);
	static int32 ReconstructEventGraph(UBlueprint* Blueprint, FUObjectExportContainer* Container);
};
