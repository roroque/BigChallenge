﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t56;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t1946;
// System.Type[]
struct TypeU5BU5D_t682;
// LitJson.ImporterFunc[]
struct ImporterFuncU5BU5D_t2509;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t2456;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t684;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ImporterFunc,System.Collections.DictionaryEntry>
struct Transform_1_t2510;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct  Dictionary_2_t787  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::table
	Int32U5BU5D_t56* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::linkSlots
	LinkU5BU5D_t1946* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::keySlots
	TypeU5BU5D_t682* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::valueSlots
	ImporterFuncU5BU5D_t2509* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::serialization_info
	SerializationInfo_t684 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t787_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::<>f__am$cacheB
	Transform_1_t2510 * ___U3CU3Ef__amU24cacheB_15;
};
