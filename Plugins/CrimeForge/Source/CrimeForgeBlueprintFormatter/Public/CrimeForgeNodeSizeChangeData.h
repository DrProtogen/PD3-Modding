

#pragma once

#include "CoreMinimal.h"

enum class ENodeEnabledState : uint8;
class UEdGraphPin;
class UEdGraphNode;

struct FCrimeForgePinChangeData
{
	bool bPinLinked;
	bool bPinHidden;
	FString PinValue;
	FText PinTextValue;
	FText PinLabel;
	FString PinObject;

	TSet<FGuid> PinLinkedTo;

	FCrimeForgePinChangeData() = default;

	void UpdatePin(UEdGraphPin* Pin);

	bool HasPinChanged(UEdGraphPin* Pin) const;

	FString GetPinDefaultObjectName(UEdGraphPin* Pin) const;

	FText GetPinLabel(UEdGraphPin* Pin) const;

	static TSet<FGuid> GetPinLinkedTo(UEdGraphPin* Pin);
};

/**
 * @brief Node size can change by:
 *		- Pin being linked
 *		- Pin value changing
 *		- Pin being added or removed
 *		- Expanding the node (see print string)
 *		- Node title changing
 *		- Comment bubble pinned
 *		- Comment bubble visible
 *		- Comment bubble text
 *		- Node width change
 *		- Node enabled state
 *		- Delegate signature pin at the bottom
 */
class FCrimeForgeNodeSizeChangeData
{
protected:
	TMap<FGuid, FCrimeForgePinChangeData> PinChangeData;
	bool bCommentBubblePinned;
	bool bCommentBubbleVisible;
	FString CommentBubbleValue;
	int32 NodeWidth = 0;
	FString NodeTitle;
	bool AdvancedPinDisplay;
	ENodeEnabledState NodeEnabledState;
	FName DelegateFunctionName;
	FString PropertyAccessTextPath;

public:
	virtual ~FCrimeForgeNodeSizeChangeData() = default;
	FCrimeForgeNodeSizeChangeData(UEdGraphNode* Node);
	FCrimeForgeNodeSizeChangeData() = default;

	virtual void UpdateNode(UEdGraphNode* Node);

	virtual bool HasNodeChanged(UEdGraphNode* Node) const;

	FString GetPropertyAccessTextPath(UEdGraphNode* Node) const;

	static TSet<FGuid> GetParentComments(UEdGraphNode* Node);
};

class FCrimeForgeFormattingChangeData : public FCrimeForgeNodeSizeChangeData
{
public:
	explicit FCrimeForgeFormattingChangeData(UEdGraphNode* Node);
	FCrimeForgeFormattingChangeData() = default;

	int32 NodePosX = 0;
	int32 NodePosY = 0;
	TSet<FGuid> ParentComments;

	virtual void UpdateNode(UEdGraphNode* Node) override;
	virtual bool HasNodeChanged(UEdGraphNode* Node) const override;

	// if the links or parent comments have changed
	bool NeedsFullFormatting(UEdGraphNode* Node) const;

	static TSet<FGuid> GetParentComments(UEdGraphNode* Node);
};
