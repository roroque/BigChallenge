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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>
struct Transform_1_t1999;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t228;
// System.AsyncCallback
struct AsyncCallback_t229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m13087_gshared (Transform_1_t1999 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m13087(__this, ___object, ___method, method) (( void (*) (Transform_1_t1999 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m13087_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m13088_gshared (Transform_1_t1999 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m13088(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t1999 *, Object_t *, int32_t, const MethodInfo*))Transform_1_Invoke_m13088_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m13089_gshared (Transform_1_t1999 * __this, Object_t * ___key, int32_t ___value, AsyncCallback_t229 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m13089(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1999 *, Object_t *, int32_t, AsyncCallback_t229 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m13089_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m13090_gshared (Transform_1_t1999 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m13090(__this, ___result, method) (( int32_t (*) (Transform_1_t1999 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m13090_gshared)(__this, ___result, method)
