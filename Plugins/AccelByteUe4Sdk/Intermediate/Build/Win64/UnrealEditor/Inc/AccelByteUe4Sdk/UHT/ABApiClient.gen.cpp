// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AccelByteUe4Sdk/Public/ABApiClient.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeABApiClient() {}

// Begin Cross Module References
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABAchievement_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABAgreement_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABApiClient();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABApiClient_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABBlock_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCatalog_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCloudSave_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCredentials_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABCurrency_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABEntitlement_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABFriends_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABFulfillment_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABGroup_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABInventory_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABLeaderboard_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABLobby_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMatchmaking_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABMessage_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABOrder_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABParty_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABPresence_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABReward_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSeasonPass_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSessionAttribute_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSessionBrowser_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABSignaling_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABStatistic_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABUGC_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABUser_NoRegister();
ACCELBYTEUE4SDK_API UClass* Z_Construct_UClass_UABWallet_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AccelByteUe4Sdk();
// End Cross Module References

// Begin Class UABApiClient
void UABApiClient::StaticRegisterNativesUABApiClient()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UABApiClient);
UClass* Z_Construct_UClass_UABApiClient_NoRegister()
{
	return UABApiClient::StaticClass();
}
struct Z_Construct_UClass_UABApiClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ABApiClient.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Credentials_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_User_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Lobby_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Friends_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Catalog_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Order_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entitlement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Currency_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wallet_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fulfillment_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudSave_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Agreement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reward_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeasonPass_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Statistic_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Leaderboard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Achievement_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Matchmaking_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionBrowser_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Party_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UGC_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Presence_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Block_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SessionAttribute_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Signaling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ABApiClient" },
		{ "ModuleRelativePath", "Public/ABApiClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Credentials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_User;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Lobby;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Friends;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Catalog;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Order;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Entitlement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Currency;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Wallet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Fulfillment;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CloudSave;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Agreement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Reward;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeasonPass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Statistic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Leaderboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Achievement;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Matchmaking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionBrowser;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Party;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UGC;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Presence;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Block;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SessionAttribute;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Signaling;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Group;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UABApiClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Credentials = { "Credentials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Credentials), Z_Construct_UClass_UABCredentials_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Credentials_MetaData), NewProp_Credentials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_User = { "User", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, User), Z_Construct_UClass_UABUser_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_User_MetaData), NewProp_User_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Lobby = { "Lobby", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Lobby), Z_Construct_UClass_UABLobby_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Lobby_MetaData), NewProp_Lobby_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Friends = { "Friends", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Friends), Z_Construct_UClass_UABFriends_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Friends_MetaData), NewProp_Friends_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Catalog = { "Catalog", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Catalog), Z_Construct_UClass_UABCatalog_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Catalog_MetaData), NewProp_Catalog_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Order), Z_Construct_UClass_UABOrder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Order_MetaData), NewProp_Order_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Entitlement = { "Entitlement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Entitlement), Z_Construct_UClass_UABEntitlement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entitlement_MetaData), NewProp_Entitlement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Currency = { "Currency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Currency), Z_Construct_UClass_UABCurrency_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Currency_MetaData), NewProp_Currency_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Wallet = { "Wallet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Wallet), Z_Construct_UClass_UABWallet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wallet_MetaData), NewProp_Wallet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Fulfillment = { "Fulfillment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Fulfillment), Z_Construct_UClass_UABFulfillment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fulfillment_MetaData), NewProp_Fulfillment_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_CloudSave = { "CloudSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, CloudSave), Z_Construct_UClass_UABCloudSave_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudSave_MetaData), NewProp_CloudSave_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Agreement), Z_Construct_UClass_UABAgreement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Agreement_MetaData), NewProp_Agreement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Reward), Z_Construct_UClass_UABReward_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reward_MetaData), NewProp_Reward_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_SeasonPass = { "SeasonPass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, SeasonPass), Z_Construct_UClass_UABSeasonPass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeasonPass_MetaData), NewProp_SeasonPass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Statistic = { "Statistic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Statistic), Z_Construct_UClass_UABStatistic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Statistic_MetaData), NewProp_Statistic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Leaderboard = { "Leaderboard", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Leaderboard), Z_Construct_UClass_UABLeaderboard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Leaderboard_MetaData), NewProp_Leaderboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Achievement = { "Achievement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Achievement), Z_Construct_UClass_UABAchievement_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Achievement_MetaData), NewProp_Achievement_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Matchmaking = { "Matchmaking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Matchmaking), Z_Construct_UClass_UABMatchmaking_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Matchmaking_MetaData), NewProp_Matchmaking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_SessionBrowser = { "SessionBrowser", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, SessionBrowser), Z_Construct_UClass_UABSessionBrowser_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionBrowser_MetaData), NewProp_SessionBrowser_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Party = { "Party", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Party), Z_Construct_UClass_UABParty_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Party_MetaData), NewProp_Party_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_UGC = { "UGC", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, UGC), Z_Construct_UClass_UABUGC_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UGC_MetaData), NewProp_UGC_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Inventory), Z_Construct_UClass_UABInventory_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inventory_MetaData), NewProp_Inventory_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Presence = { "Presence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Presence), Z_Construct_UClass_UABPresence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Presence_MetaData), NewProp_Presence_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Block = { "Block", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Block), Z_Construct_UClass_UABBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Block_MetaData), NewProp_Block_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Message), Z_Construct_UClass_UABMessage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_SessionAttribute = { "SessionAttribute", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, SessionAttribute), Z_Construct_UClass_UABSessionAttribute_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SessionAttribute_MetaData), NewProp_SessionAttribute_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Signaling = { "Signaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Signaling), Z_Construct_UClass_UABSignaling_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Signaling_MetaData), NewProp_Signaling_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UABApiClient_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UABApiClient, Group), Z_Construct_UClass_UABGroup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UABApiClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Credentials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_User,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Lobby,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Friends,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Catalog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Order,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Entitlement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Currency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Wallet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Fulfillment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_CloudSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Agreement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Reward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_SeasonPass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Statistic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Leaderboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Achievement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Matchmaking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_SessionBrowser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Party,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_UGC,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Inventory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Presence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Block,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_SessionAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Signaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UABApiClient_Statics::NewProp_Group,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABApiClient_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UABApiClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AccelByteUe4Sdk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UABApiClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UABApiClient_Statics::ClassParams = {
	&UABApiClient::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UABApiClient_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UABApiClient_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UABApiClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UABApiClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UABApiClient()
{
	if (!Z_Registration_Info_UClass_UABApiClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UABApiClient.OuterSingleton, Z_Construct_UClass_UABApiClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UABApiClient.OuterSingleton;
}
template<> ACCELBYTEUE4SDK_API UClass* StaticClass<UABApiClient>()
{
	return UABApiClient::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UABApiClient);
UABApiClient::~UABApiClient() {}
// End Class UABApiClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABApiClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UABApiClient, UABApiClient::StaticClass, TEXT("UABApiClient"), &Z_Registration_Info_UClass_UABApiClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UABApiClient), 1868215543U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABApiClient_h_1485664175(TEXT("/Script/AccelByteUe4Sdk"),
	Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABApiClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABApiClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
