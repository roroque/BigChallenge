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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_1MethodDeclarations.h"

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
#define ObjectPool_1__ctor_m13509(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t2027 *, UnityAction_1_t2028 *, UnityAction_1_t2028 *, const MethodInfo*))ObjectPool_1__ctor_m11967_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m13510(__this, method) (( int32_t (*) (ObjectPool_1_t2027 *, const MethodInfo*))ObjectPool_1_get_countAll_m11969_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m13511(__this, ___value, method) (( void (*) (ObjectPool_1_t2027 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m11971_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m13512(__this, method) (( int32_t (*) (ObjectPool_1_t2027 *, const MethodInfo*))ObjectPool_1_get_countActive_m11973_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m13513(__this, method) (( int32_t (*) (ObjectPool_1_t2027 *, const MethodInfo*))ObjectPool_1_get_countInactive_m11975_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m13514(__this, method) (( List_1_t373 * (*) (ObjectPool_1_t2027 *, const MethodInfo*))ObjectPool_1_Get_m11977_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m13515(__this, ___element, method) (( void (*) (ObjectPool_1_t2027 *, List_1_t373 *, const MethodInfo*))ObjectPool_1_Release_m11979_gshared)(__this, ___element, method)