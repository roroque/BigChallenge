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

// System.Net.IPv6Address
struct IPv6Address_t979;
// System.UInt16[]
struct UInt16U5BU5D_t978;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.IPv6Address::.ctor(System.UInt16[])
extern "C" void IPv6Address__ctor_m4925 (IPv6Address_t979 * __this, UInt16U5BU5D_t978* ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32)
extern "C" void IPv6Address__ctor_m4926 (IPv6Address_t979 * __this, UInt16U5BU5D_t978* ___addr, int32_t ___prefixLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32,System.Int32)
extern "C" void IPv6Address__ctor_m4927 (IPv6Address_t979 * __this, UInt16U5BU5D_t978* ___addr, int32_t ___prefixLength, int32_t ___scopeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.cctor()
extern "C" void IPv6Address__cctor_m4928 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPv6Address System.Net.IPv6Address::Parse(System.String)
extern "C" IPv6Address_t979 * IPv6Address_Parse_m4929 (Object_t * __this /* static, unused */, String_t* ___ipString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Fill(System.UInt16[],System.String)
extern "C" int32_t IPv6Address_Fill_m4930 (Object_t * __this /* static, unused */, UInt16U5BU5D_t978* ___addr, String_t* ___ipString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Int32&)
extern "C" bool IPv6Address_TryParse_m4931 (Object_t * __this /* static, unused */, String_t* ___prefix, int32_t* ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Net.IPv6Address&)
extern "C" bool IPv6Address_TryParse_m4932 (Object_t * __this /* static, unused */, String_t* ___ipString, IPv6Address_t979 ** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16[] System.Net.IPv6Address::get_Address()
extern "C" UInt16U5BU5D_t978* IPv6Address_get_Address_m4933 (IPv6Address_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPv6Address::get_ScopeId()
extern "C" int64_t IPv6Address_get_ScopeId_m4934 (IPv6Address_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::set_ScopeId(System.Int64)
extern "C" void IPv6Address_set_ScopeId_m4935 (IPv6Address_t979 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsLoopback(System.Net.IPv6Address)
extern "C" bool IPv6Address_IsLoopback_m4936 (Object_t * __this /* static, unused */, IPv6Address_t979 * ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Net.IPv6Address::SwapUShort(System.UInt16)
extern "C" uint16_t IPv6Address_SwapUShort_m4937 (Object_t * __this /* static, unused */, uint16_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::AsIPv4Int()
extern "C" int32_t IPv6Address_AsIPv4Int_m4938 (IPv6Address_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Compatible()
extern "C" bool IPv6Address_IsIPv4Compatible_m4939 (IPv6Address_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Mapped()
extern "C" bool IPv6Address_IsIPv4Mapped_m4940 (IPv6Address_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString()
extern "C" String_t* IPv6Address_ToString_m4941 (IPv6Address_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString(System.Boolean)
extern "C" String_t* IPv6Address_ToString_m4942 (IPv6Address_t979 * __this, bool ___fullLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::Equals(System.Object)
extern "C" bool IPv6Address_Equals_m4943 (IPv6Address_t979 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::GetHashCode()
extern "C" int32_t IPv6Address_GetHashCode_m4944 (IPv6Address_t979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t IPv6Address_Hash_m4945 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;