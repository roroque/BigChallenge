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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>
struct DefaultComparer_t2295;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::.ctor()
extern "C" void DefaultComparer__ctor_m17281_gshared (DefaultComparer_t2295 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17281(__this, method) (( void (*) (DefaultComparer_t2295 *, const MethodInfo*))DefaultComparer__ctor_m17281_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17282_gshared (DefaultComparer_t2295 * __this, CustomAttributeNamedArgument_t1274  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17282(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2295 *, CustomAttributeNamedArgument_t1274 , const MethodInfo*))DefaultComparer_GetHashCode_m17282_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Reflection.CustomAttributeNamedArgument>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17283_gshared (DefaultComparer_t2295 * __this, CustomAttributeNamedArgument_t1274  ___x, CustomAttributeNamedArgument_t1274  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17283(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2295 *, CustomAttributeNamedArgument_t1274 , CustomAttributeNamedArgument_t1274 , const MethodInfo*))DefaultComparer_Equals_m17283_gshared)(__this, ___x, ___y, method)
