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

// UnityEngine.Events.InvokableCall`1<System.Single>
struct InvokableCall_1_t1989;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Single>
struct UnityAction_1_t346;
// System.Object[]
struct ObjectU5BU5D_t102;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m12961_gshared (InvokableCall_1_t1989 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m12961(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t1989 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m12961_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m12962_gshared (InvokableCall_1_t1989 * __this, UnityAction_1_t346 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m12962(__this, ___action, method) (( void (*) (InvokableCall_1_t1989 *, UnityAction_1_t346 *, const MethodInfo*))InvokableCall_1__ctor_m12962_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m12963_gshared (InvokableCall_1_t1989 * __this, ObjectU5BU5D_t102* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m12963(__this, ___args, method) (( void (*) (InvokableCall_1_t1989 *, ObjectU5BU5D_t102*, const MethodInfo*))InvokableCall_1_Invoke_m12963_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Single>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m12964_gshared (InvokableCall_1_t1989 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m12964(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t1989 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m12964_gshared)(__this, ___targetObj, ___method, method)
