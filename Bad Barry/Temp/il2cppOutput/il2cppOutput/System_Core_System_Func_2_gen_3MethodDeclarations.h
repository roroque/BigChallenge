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

// System.Func`2<System.Object,System.Object>
struct Func_2_t2531;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t297;
// System.AsyncCallback
struct AsyncCallback_t298;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m19528_gshared (Func_2_t2531 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m19528(__this, ___object, ___method, method) (( void (*) (Func_2_t2531 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m19528_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
extern "C" Object_t * Func_2_Invoke_m19529_gshared (Func_2_t2531 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m19529(__this, ___arg1, method) (( Object_t * (*) (Func_2_t2531 *, Object_t *, const MethodInfo*))Func_2_Invoke_m19529_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m19530_gshared (Func_2_t2531 * __this, Object_t * ___arg1, AsyncCallback_t298 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m19530(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t2531 *, Object_t *, AsyncCallback_t298 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m19530_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Func_2_EndInvoke_m19531_gshared (Func_2_t2531 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m19531(__this, ___result, method) (( Object_t * (*) (Func_2_t2531 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m19531_gshared)(__this, ___result, method)
