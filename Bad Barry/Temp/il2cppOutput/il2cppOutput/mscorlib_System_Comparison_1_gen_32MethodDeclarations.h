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

// System.Comparison`1<UnityEngine.Vector2>
struct Comparison_1_t2304;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void System.Comparison`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16786_gshared (Comparison_1_t2304 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16786(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2304 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16786_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16787_gshared (Comparison_1_t2304 * __this, Vector2_t33  ___x, Vector2_t33  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16787(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2304 *, Vector2_t33 , Vector2_t33 , const MethodInfo*))Comparison_1_Invoke_m16787_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector2>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16788_gshared (Comparison_1_t2304 * __this, Vector2_t33  ___x, Vector2_t33  ___y, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16788(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2304 *, Vector2_t33 , Vector2_t33 , AsyncCallback_t298 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16788_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16789_gshared (Comparison_1_t2304 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16789(__this, ___result, method) (( int32_t (*) (Comparison_1_t2304 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16789_gshared)(__this, ___result, method)
