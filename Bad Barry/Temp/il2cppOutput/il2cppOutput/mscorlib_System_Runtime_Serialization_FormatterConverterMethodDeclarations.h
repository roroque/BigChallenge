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

// System.Runtime.Serialization.FormatterConverter
struct FormatterConverter_t1535;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.FormatterConverter::.ctor()
extern "C" void FormatterConverter__ctor_m9159 (FormatterConverter_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.FormatterConverter::Convert(System.Object,System.Type)
extern "C" Object_t * FormatterConverter_Convert_m9160 (FormatterConverter_t1535 * __this, Object_t * ___value, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.FormatterConverter::ToBoolean(System.Object)
extern "C" bool FormatterConverter_ToBoolean_m9161 (FormatterConverter_t1535 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Runtime.Serialization.FormatterConverter::ToInt16(System.Object)
extern "C" int16_t FormatterConverter_ToInt16_m9162 (FormatterConverter_t1535 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.FormatterConverter::ToInt32(System.Object)
extern "C" int32_t FormatterConverter_ToInt32_m9163 (FormatterConverter_t1535 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.FormatterConverter::ToInt64(System.Object)
extern "C" int64_t FormatterConverter_ToInt64_m9164 (FormatterConverter_t1535 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.FormatterConverter::ToString(System.Object)
extern "C" String_t* FormatterConverter_ToString_m9165 (FormatterConverter_t1535 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;