// Copyright Epic Games, Inc. All Rights Reserved.
// duplicate of DefinePrivateMemberPtr.h in UE5.5 for backwards compatibility

#pragma once

#if CRIMEFORGE_FORMATTER_UE_VERSION_OR_LATER(5, 0) // Requires C++ 17 or later
#include "HAL/PreprocessorHelpers.h"
#include "Templates/Identity.h"

namespace CrimeForgeFormatter::Private
{
	template <auto Storage, auto PtrToMember>
	struct TCrimeForgeFormatterPrivateAccess
	{
		TCrimeForgeFormatterPrivateAccess()
		{
			*Storage = PtrToMember;
		}

		static TCrimeForgeFormatterPrivateAccess Instance;
	};

	template <auto Storage, auto PtrToMember>
	TCrimeForgeFormatterPrivateAccess<Storage, PtrToMember> TCrimeForgeFormatterPrivateAccess<Storage, PtrToMember>::Instance;
}

// A way to get a pointer-to-member of private members of a class without explicit friendship.
// It can be used for both data members and member functions.
//
// Use of this macro for any purpose is at the user's own risk and is not supported.
//
// Example:
//
// struct FPrivateStuff
// {
//     explicit FPrivateStuff(int32 InVal)
//     {
//         Val = InVal;
//     }
//
// private:
//     int32 Val;
//
//     void LogVal() const
//     {
//         UE_LOG(LogTemp, Log, TEXT("Val: %d"), Val);
//     }
// };
//
// // These should be defined at global scope
// UE_DEFINE_PRIVATE_MEMBER_PTR(int32, GPrivateStuffValPtr, FPrivateStuff, Val);
// UE_DEFINE_PRIVATE_MEMBER_PTR(void() const, GPrivateStuffLogVal, FPrivateStuff, LogVal);
//
// FPrivateStuff Stuff(5);
//
// (Stuff.*GPrivateStuffLogVal)(); // Logs: "Val: 5"
// Stuff.*GPrivateStuffValPtr = 7;
// (Stuff.*GPrivateStuffLogVal)(); // Logs: "Val: 7"
//
#define CRIMEFORGE_FORMATTER_DEFINE_PRIVATE_MEMBER_PTR(Type, Name, Class, Member) \
TIdentity_T<PREPROCESSOR_REMOVE_OPTIONAL_PARENS(Type)> PREPROCESSOR_REMOVE_OPTIONAL_PARENS(Class)::* Name; \
template struct CrimeForgeFormatter::Private::TCrimeForgeFormatterPrivateAccess<&Name, &PREPROCESSOR_REMOVE_OPTIONAL_PARENS(Class)::Member>
#endif
