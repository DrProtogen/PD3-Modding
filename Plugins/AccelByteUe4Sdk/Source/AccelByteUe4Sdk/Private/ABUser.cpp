#include "ABUser.h"

UABUser::UABUser() {
}

void UABUser::Verify(const FString& VerificationCode, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::ValidateUserInput(const FUserInputValidationRequest& UserInputValidationRequest, FDUserInputValidationResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::Upgradev2(const FString& EmailAddress, const FString& Username, const FString& Password, FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::UpgradeAndVerify(const FString& Username, const FString& Password, const FString& VerificationCode, FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::Upgrade(const FString& Username, const FString& Password, FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::UpdateUser(const FUserUpdateRequest& UpdateRequest, FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::UpdateEmail(const FUpdateEmailRequest& UpdateEmailRequest, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::UnlinkOtherPlatformWithCustomErrorHandler(EAccelBytePlatformType PlatformType, FDHandler OnSuccess, FDCustomErrorHandler OnError) {
}

void UABUser::UnlinkOtherPlatformId(const FString& PlatformId, FDHandler OnSuccess, FDCustomErrorHandler OnError) {
}

void UABUser::UnlinkOtherPlatform(EAccelBytePlatformType PlatformType, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::UnlinkAllOtherPlatformId(const FString& PlatformId, FDHandler OnSuccess, FDCustomErrorHandler OnError) {
}

void UABUser::UnlinkAllOtherPlatform(EAccelBytePlatformType PlatformType, FDHandler OnSuccess, FDCustomErrorHandler OnError) {
}

void UABUser::TryReloginV4(const FString& PlatformUserID, FDLoginQueueInfoResponse OnSuccess, FDOAuthErrorHandler OnError) {
}

void UABUser::TryRelogin(const FString& PlatformUserID, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::SendVerificationCode(FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::SendUpgradeVerificationCode(const FString& EmailAddress, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::SendUpdateEmailVerificationCode(FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::SendResetPasswordCode(const FString& EmailAddress, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::SearchUsersByType(const FString& Query, EAccelByteSearchType By, FDPagedPublicUsersInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::SearchUsersByOtherPlatformType(const FString& Query, EAccelBytePlatformType PlatformType, EAccelByteSearchPlatformType PlatformBy, FDPagedPublicUsersInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::SearchUsersByOtherPlatformId(const FString& Query, const FString& PlatformId, EAccelByteSearchPlatformType PlatformBy, FDPagedPublicUsersInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::SearchUsers(const FString& Query, FDPagedPublicUsersInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::ResetPassword(const FString& VerificationCode, const FString& EmailAddress, const FString& NewPassword, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::Registerv3(const FRegisterRequestv3& RegisterRequest, FDRegisterResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::Registerv2(const FString& EmailAddress, const FString& Username, const FString& Password, const FString& DisplayName, const FString& Country, const FString& DateOfBirth, FDRegisterResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::Register(const FString& Username, const FString& Password, const FString& DisplayName, const FString& Country, const FString& DateOfBirth, FDRegisterResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::Logout(FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::LoginWithUsernameV4(const FString& Username, const FString& Password, FDLoginQueueInfoResponse OnSuccess, FDOAuthErrorHandler OnError) {
}

void UABUser::LoginWithUsername(const FString& Username, const FString& Password, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::LoginWithRefreshTokenV4(FDLoginQueueInfoResponse OnSuccess, FDOAuthErrorHandler OnError) {
}

void UABUser::LoginWithRefreshToken(FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::LoginWithOtherPlatformV4(EAccelBytePlatformType PlatformType, const FString& PlatformToken, FDLoginQueueInfoResponse OnSuccess, FDOAuthErrorHandler OnError, bool bCreateHeadless) {
}

void UABUser::LoginWithOtherPlatformIdV4(const FString& PlatformId, const FString& PlatformToken, FDLoginQueueInfoResponse OnSuccess, FDOAuthErrorHandler OnError, bool bCreateHeadless) {
}

void UABUser::LoginWithOtherPlatformId(const FString& PlatformId, const FString& PlatformToken, FDHandler OnSuccess, FDErrorHandler OnError, bool bCreateHeadless) {
}

void UABUser::LoginWithOtherPlatform(EAccelBytePlatformType PlatformType, const FString& PlatformToken, FDHandler OnSuccess, FDErrorHandler OnError, bool bCreateHeadless) {
}

void UABUser::LoginWithLauncherV4(FDLoginQueueInfoResponse OnSuccess, FDOAuthErrorHandler OnError) {
}

void UABUser::LoginWithLauncher(FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::LoginWithDeviceIdV4(FDLoginQueueInfoResponse OnSuccess, FDOAuthErrorHandler OnError) {
}

void UABUser::LoginWithDeviceId(FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::LoginByExchangeCodeForTokenV4(const FString& Code, FDLoginQueueInfoResponse OnSuccess, FDOAuthErrorHandler OnError) {
}

void UABUser::LoginByExchangeCodeForToken(const FString& Code, FDHandler OnSuccess, FDErrorHandler OnError) {
}

void UABUser::LinkOtherPlatform(EAccelBytePlatformType PlatformType, const FString& Ticket, FDHandler OnSuccess, FDAccountLinkConflictErrorJsonResponse OnError) {
}

void UABUser::GetUserOtherPlatformBasicPublicInfo(const FPlatformAccountInfoRequest& Request, FDAccountUserPlatformInfosResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::GetUserEligibleToPlay(FDBooleanResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::GetUserByUserId(const FString& UserId, FDSimpleUserDataResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::GetPlatformLinks(FDPagedPlatformLinksResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::GetDataWithLinkedPlatform(FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::GetData(FDAccountUserDataResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::GetCountryFromIP(FDCountryInfoResponse OnSuccess, FDErrorHandler OnError) {
}

void UABUser::ForgetAllCredentials() {
}

void UABUser::ForcedLinkOtherPlatform(EAccelBytePlatformType PlatformType, const FString& PlatformUserId, FDHandler OnSuccess, FDAccountLinkConflictErrorJsonResponse OnError) {
}

void UABUser::BulkGetUserByOtherPlatformUserIds(EAccelBytePlatformType PlatformType, const TArray<FString>& OtherPlatformUserId, FDBulkPlatformUserIdResponse OnSuccess, FDErrorHandler OnError) {
}


