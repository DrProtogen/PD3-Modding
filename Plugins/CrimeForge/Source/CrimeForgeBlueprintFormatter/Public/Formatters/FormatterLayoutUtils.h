#pragma once

#include "Formatters/GraphFormatterTypes.h"

struct FFormatterInterface;

struct FCrimeForgeFormatterLayoutUtils
{
	static bool IsSameRow(const TMap<FPinLink, bool>& SameRowMapping, UEdGraphNode* NodeA, UEdGraphNode* NodeB);
	static void StraightenRow(TSharedPtr<FCrimeForgeGraphHandler> GraphHandler, const TMap<FPinLink, bool>& SameRowMapping, UEdGraphNode* Node);
	static void StraightenRowWithFilter(TSharedPtr<FCrimeForgeGraphHandler> GraphHandler, const TMap<FPinLink, bool>& SameRowMapping, UEdGraphNode* Node, TFunctionRef<bool(const FPinLink&)> Pred);
	static FSlateRect GetFormatterArrayBounds(TArray<TSharedPtr<FFormatterInterface>> FormatterArray, TSharedPtr<FCrimeForgeGraphHandler> GraphHandler, bool bUseCommentPadding);
	static bool FilterDelegateLink(const FPinLink& PinLink);
};
