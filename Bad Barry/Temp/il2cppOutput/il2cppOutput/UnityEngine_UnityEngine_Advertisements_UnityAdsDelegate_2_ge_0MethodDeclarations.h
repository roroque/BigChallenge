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

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>
struct UnityAdsDelegate_2_t2358;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate_2__ctor_m17274_gshared (UnityAdsDelegate_2_t2358 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m17274(__this, ___object, ___method, method) (( void (*) (UnityAdsDelegate_2_t2358 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m17274_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::Invoke(T1,T2)
extern "C" void UnityAdsDelegate_2_Invoke_m17275_gshared (UnityAdsDelegate_2_t2358 * __this, Object_t * ___p1, bool ___p2, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m17275(__this, ___p1, ___p2, method) (( void (*) (UnityAdsDelegate_2_t2358 *, Object_t *, bool, const MethodInfo*))UnityAdsDelegate_2_Invoke_m17275_gshared)(__this, ___p1, ___p2, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m17277_gshared (UnityAdsDelegate_2_t2358 * __this, Object_t * ___p1, bool ___p2, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m17277(__this, ___p1, ___p2, ___callback, ___object, method) (( Object_t * (*) (UnityAdsDelegate_2_t2358 *, Object_t *, bool, AsyncCallback_t298 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m17277_gshared)(__this, ___p1, ___p2, ___callback, ___object, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Boolean>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m17279_gshared (UnityAdsDelegate_2_t2358 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m17279(__this, ___result, method) (( void (*) (UnityAdsDelegate_2_t2358 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m17279_gshared)(__this, ___result, method)
