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

// System.Action`1<System.Object>
struct Action_1_t2045;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t228;
// System.AsyncCallback
struct AsyncCallback_t229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m13704_gshared (Action_1_t2045 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m13704(__this, ___object, ___method, method) (( void (*) (Action_1_t2045 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m13704_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Object>::Invoke(T)
extern "C" void Action_1_Invoke_m13705_gshared (Action_1_t2045 * __this, Object_t * ___obj, const MethodInfo* method);
#define Action_1_Invoke_m13705(__this, ___obj, method) (( void (*) (Action_1_t2045 *, Object_t *, const MethodInfo*))Action_1_Invoke_m13705_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m13707_gshared (Action_1_t2045 * __this, Object_t * ___obj, AsyncCallback_t229 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m13707(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t2045 *, Object_t *, AsyncCallback_t229 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m13707_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m13709_gshared (Action_1_t2045 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m13709(__this, ___result, method) (( void (*) (Action_1_t2045 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m13709_gshared)(__this, ___result, method)
