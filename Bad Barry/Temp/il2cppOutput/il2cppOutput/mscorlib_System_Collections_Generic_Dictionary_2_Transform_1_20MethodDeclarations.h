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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t2479;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t317;
// System.AsyncCallback
struct AsyncCallback_t318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m18759_gshared (Transform_1_t2479 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m18759(__this, ___object, ___method, method) (( void (*) (Transform_1_t2479 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m18759_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t784  Transform_1_Invoke_m18760_gshared (Transform_1_t2479 * __this, Object_t * ___key, ArrayMetadata_t747  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m18760(__this, ___key, ___value, method) (( DictionaryEntry_t784  (*) (Transform_1_t2479 *, Object_t *, ArrayMetadata_t747 , const MethodInfo*))Transform_1_Invoke_m18760_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m18761_gshared (Transform_1_t2479 * __this, Object_t * ___key, ArrayMetadata_t747  ___value, AsyncCallback_t318 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m18761(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2479 *, Object_t *, ArrayMetadata_t747 , AsyncCallback_t318 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m18761_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,LitJson.ArrayMetadata,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t784  Transform_1_EndInvoke_m18762_gshared (Transform_1_t2479 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m18762(__this, ___result, method) (( DictionaryEntry_t784  (*) (Transform_1_t2479 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m18762_gshared)(__this, ___result, method)
