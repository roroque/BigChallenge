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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
struct Transform_1_t1849;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t228;
// System.AsyncCallback
struct AsyncCallback_t229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11075_gshared (Transform_1_t1849 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11075(__this, ___object, ___method, method) (( void (*) (Transform_1_t1849 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11075_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m11076_gshared (Transform_1_t1849 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11076(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t1849 *, Object_t *, Object_t *, const MethodInfo*))Transform_1_Invoke_m11076_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11077_gshared (Transform_1_t1849 * __this, Object_t * ___key, Object_t * ___value, AsyncCallback_t229 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11077(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1849 *, Object_t *, Object_t *, AsyncCallback_t229 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11077_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m11078_gshared (Transform_1_t1849 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11078(__this, ___result, method) (( Object_t * (*) (Transform_1_t1849 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11078_gshared)(__this, ___result, method)