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

// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t2014;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t207;
// System.AsyncCallback
struct AsyncCallback_t208;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m14007_gshared (UnityAction_1_t2014 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m14007(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t2014 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m14007_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m14008_gshared (UnityAction_1_t2014 * __this, Vector2_t25  ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m14008(__this, ___arg0, method) (( void (*) (UnityAction_1_t2014 *, Vector2_t25 , const MethodInfo*))UnityAction_1_Invoke_m14008_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m14009_gshared (UnityAction_1_t2014 * __this, Vector2_t25  ___arg0, AsyncCallback_t208 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m14009(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t2014 *, Vector2_t25 , AsyncCallback_t208 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m14009_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m14010_gshared (UnityAction_1_t2014 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m14010(__this, ___result, method) (( void (*) (UnityAction_1_t2014 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m14010_gshared)(__this, ___result, method)
