﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t425;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1834;
// System.Type[]
struct TypeU5BU5D_t619;
// System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>[]
struct IDictionary_2U5BU5D_t2347;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t2332;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t621;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>,System.Collections.DictionaryEntry>
struct Transform_1_t2348;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct  Dictionary_2_t715  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::table
	Int32U5BU5D_t425* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::linkSlots
	LinkU5BU5D_t1834* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::keySlots
	TypeU5BU5D_t619* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::valueSlots
	IDictionary_2U5BU5D_t2347* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::serialization_info
	SerializationInfo_t621 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t715_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::<>f__am$cacheB
	Transform_1_t2348 * ___U3CU3Ef__amU24cacheB_15;
};
