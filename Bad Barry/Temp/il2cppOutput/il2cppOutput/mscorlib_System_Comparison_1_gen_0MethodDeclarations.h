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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t252;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t317;
// System.AsyncCallback
struct AsyncCallback_t318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m2449_gshared (Comparison_1_t252 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m2449(__this, ___object, ___method, method) (( void (*) (Comparison_1_t252 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m2449_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14080_gshared (Comparison_1_t252 * __this, RaycastHit_t429  ___x, RaycastHit_t429  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14080(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t252 *, RaycastHit_t429 , RaycastHit_t429 , const MethodInfo*))Comparison_1_Invoke_m14080_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14081_gshared (Comparison_1_t252 * __this, RaycastHit_t429  ___x, RaycastHit_t429  ___y, AsyncCallback_t318 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14081(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t252 *, RaycastHit_t429 , RaycastHit_t429 , AsyncCallback_t318 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14081_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14082_gshared (Comparison_1_t252 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14082(__this, ___result, method) (( int32_t (*) (Comparison_1_t252 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14082_gshared)(__this, ___result, method)
