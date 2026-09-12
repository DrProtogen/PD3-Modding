// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ABUGC.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAccelByteStagingContentUtilitiesSortBy : uint8;
enum class EAccelByteUGCContentSortByV2 : uint8;
enum class EAccelByteUGCContentUtilitiesSortByV2 : uint8;
enum class EAccelByteUgcOrderBy : uint8;
enum class EAccelByteUgcSortBy : uint8;
enum class EStagingContentRequestStatus : uint8;
struct FAccelByteModelsCreateUGCRequestV2;
struct FAccelByteModelsModifyUGCRequestV2;
struct FAccelByteModelsUGCFilterRequestV2;
struct FAccelByteModelsUGCModifyContentShareCodeRequest;
struct FAccelByteModelsUGCRequest;
struct FAccelByteModelsUGCSearchContentsRequest;
struct FAccelByteModelsUGCUpdateContentFileLocationRequestV2;
struct FAccelByteModelsUGCUpdateRequest;
struct FAccelByteModelsUGCUpdateScreenshotsV2;
struct FAccelByteModelsUGCUploadScreenshotsRequestV2;
struct FAccelByteModelsUploadContentURLRequestV2;
#ifdef ACCELBYTEUE4SDK_ABUGC_generated_h
#error "ABUGC.generated.h already included, missing '#pragma once' in ABUGC.h"
#endif
#define ACCELBYTEUE4SDK_ABUGC_generated_h

#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddDownloadContentCountV2); \
	DECLARE_FUNCTION(execBulkGetContentByShareCode); \
	DECLARE_FUNCTION(execBulkGetContentByShareCodeV2); \
	DECLARE_FUNCTION(execCreateChannel); \
	DECLARE_FUNCTION(execCreateContent); \
	DECLARE_FUNCTION(execCreateContentByStruct); \
	DECLARE_FUNCTION(execCreateContentV2); \
	DECLARE_FUNCTION(execDeleteChannel); \
	DECLARE_FUNCTION(execDeleteContent); \
	DECLARE_FUNCTION(execDeleteContentByShareCode); \
	DECLARE_FUNCTION(execDeleteContentScreenshotV2); \
	DECLARE_FUNCTION(execDeleteContentV2); \
	DECLARE_FUNCTION(execDeleteStagingContent); \
	DECLARE_FUNCTION(execGenerateUploadContentURLV2); \
	DECLARE_FUNCTION(execGetChannels); \
	DECLARE_FUNCTION(execGetChannelsByUserId); \
	DECLARE_FUNCTION(execGetContentBulk); \
	DECLARE_FUNCTION(execGetContentBulkByIdsV2); \
	DECLARE_FUNCTION(execGetContentByContentId); \
	DECLARE_FUNCTION(execGetContentByContentIdV2); \
	DECLARE_FUNCTION(execGetContentByShareCode); \
	DECLARE_FUNCTION(execGetContentByShareCodeV2); \
	DECLARE_FUNCTION(execGetContentPreviewAsIntArray); \
	DECLARE_FUNCTION(execGetContentPreviewAsStruct); \
	DECLARE_FUNCTION(execGetListContentDownloaderV2); \
	DECLARE_FUNCTION(execGetListContentLikerV2); \
	DECLARE_FUNCTION(execGetListFollowers); \
	DECLARE_FUNCTION(execGetStagingContentById); \
	DECLARE_FUNCTION(execGetStagingContents); \
	DECLARE_FUNCTION(execGetTags); \
	DECLARE_FUNCTION(execGetTypes); \
	DECLARE_FUNCTION(execGetUserContent); \
	DECLARE_FUNCTION(execGetUserContentsV2); \
	DECLARE_FUNCTION(execModifyContent); \
	DECLARE_FUNCTION(execModifyContentByShareCode); \
	DECLARE_FUNCTION(execModifyContentByStruct); \
	DECLARE_FUNCTION(execModifyContentByUpdateStruct); \
	DECLARE_FUNCTION(execModifyContentShareCode); \
	DECLARE_FUNCTION(execModifyContentShareCodeV2); \
	DECLARE_FUNCTION(execModifyContentV2); \
	DECLARE_FUNCTION(execPublicGetContentBulk); \
	DECLARE_FUNCTION(execPublicGetContentBulkByIdsV2); \
	DECLARE_FUNCTION(execPublicGetContentByContentId); \
	DECLARE_FUNCTION(execPublicGetContentByContentIdV2); \
	DECLARE_FUNCTION(execPublicGetContentByShareCode); \
	DECLARE_FUNCTION(execPublicGetContentByShareCodeV2); \
	DECLARE_FUNCTION(execPublicGetUserContent); \
	DECLARE_FUNCTION(execPublicGetUserContentsV2); \
	DECLARE_FUNCTION(execPublicSearchAllContents); \
	DECLARE_FUNCTION(execPublicSearchContents); \
	DECLARE_FUNCTION(execPublicSearchContentsSpecificToChannelV2); \
	DECLARE_FUNCTION(execPublicSearchContentsV2); \
	DECLARE_FUNCTION(execSearchAllContents); \
	DECLARE_FUNCTION(execSearchContents); \
	DECLARE_FUNCTION(execSearchContentsByChannelId); \
	DECLARE_FUNCTION(execSearchContentsSpecificToChannel); \
	DECLARE_FUNCTION(execSearchContentsSpecificToChannelV2); \
	DECLARE_FUNCTION(execSearchContentsV2); \
	DECLARE_FUNCTION(execUpdateContentFileLocationV2); \
	DECLARE_FUNCTION(execUpdateContentScreenshotV2); \
	DECLARE_FUNCTION(execUpdateFollowStatusToUser); \
	DECLARE_FUNCTION(execUpdateLikeStatusToContent); \
	DECLARE_FUNCTION(execUpdateLikeStatusToContentV2); \
	DECLARE_FUNCTION(execUpdateStagingContent); \
	DECLARE_FUNCTION(execUploadContentScreenshotV2);


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_56_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUABUGC(); \
	friend struct Z_Construct_UClass_UABUGC_Statics; \
public: \
	DECLARE_CLASS(UABUGC, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AccelByteUe4Sdk"), NO_API) \
	DECLARE_SERIALIZER(UABUGC)


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_56_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UABUGC(UABUGC&&); \
	UABUGC(const UABUGC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UABUGC); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UABUGC); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UABUGC) \
	NO_API virtual ~UABUGC();


#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_54_PROLOG
#define FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_56_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_56_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_56_INCLASS_NO_PURE_DECLS \
	FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h_56_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACCELBYTEUE4SDK_API UClass* StaticClass<class UABUGC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PAYDAY3_Plugins_AccelByteUe4Sdk_Source_AccelByteUe4Sdk_Public_ABUGC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
