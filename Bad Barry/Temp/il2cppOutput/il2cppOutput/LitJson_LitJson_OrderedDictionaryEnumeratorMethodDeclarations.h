﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t742;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t743;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
extern "C" Object_t * OrderedDictionaryEnumerator_get_Current_m3948 (OrderedDictionaryEnumerator_t742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
extern "C" DictionaryEntry_t784  OrderedDictionaryEnumerator_get_Entry_m3949 (OrderedDictionaryEnumerator_t742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
extern "C" Object_t * OrderedDictionaryEnumerator_get_Key_m3950 (OrderedDictionaryEnumerator_t742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
extern "C" Object_t * OrderedDictionaryEnumerator_get_Value_m3951 (OrderedDictionaryEnumerator_t742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
extern "C" void OrderedDictionaryEnumerator__ctor_m3952 (OrderedDictionaryEnumerator_t742 * __this, Object_t* ___enumerator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
extern "C" bool OrderedDictionaryEnumerator_MoveNext_m3953 (OrderedDictionaryEnumerator_t742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
extern "C" void OrderedDictionaryEnumerator_Reset_m3954 (OrderedDictionaryEnumerator_t742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
