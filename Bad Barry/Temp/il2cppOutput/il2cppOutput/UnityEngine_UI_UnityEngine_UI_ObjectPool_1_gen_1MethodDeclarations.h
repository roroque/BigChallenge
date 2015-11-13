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

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1914;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1916;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m11967_gshared (ObjectPool_1_t1914 * __this, UnityAction_1_t1916 * ___actionOnGet, UnityAction_1_t1916 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m11967(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1914 *, UnityAction_1_t1916 *, UnityAction_1_t1916 *, const MethodInfo*))ObjectPool_1__ctor_m11967_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m11969_gshared (ObjectPool_1_t1914 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m11969(__this, method) (( int32_t (*) (ObjectPool_1_t1914 *, const MethodInfo*))ObjectPool_1_get_countAll_m11969_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m11971_gshared (ObjectPool_1_t1914 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m11971(__this, ___value, method) (( void (*) (ObjectPool_1_t1914 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11971_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m11973_gshared (ObjectPool_1_t1914 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m11973(__this, method) (( int32_t (*) (ObjectPool_1_t1914 *, const MethodInfo*))ObjectPool_1_get_countActive_m11973_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m11975_gshared (ObjectPool_1_t1914 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m11975(__this, method) (( int32_t (*) (ObjectPool_1_t1914 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11975_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m11977_gshared (ObjectPool_1_t1914 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m11977(__this, method) (( Object_t * (*) (ObjectPool_1_t1914 *, const MethodInfo*))ObjectPool_1_Get_m11977_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m11979_gshared (ObjectPool_1_t1914 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m11979(__this, ___element, method) (( void (*) (ObjectPool_1_t1914 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m11979_gshared)(__this, ___element, method)