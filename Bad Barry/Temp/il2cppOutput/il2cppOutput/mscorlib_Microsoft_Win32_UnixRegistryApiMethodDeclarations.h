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

// Microsoft.Win32.UnixRegistryApi
struct UnixRegistryApi_t1214;
// System.String
struct String_t;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t1208;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Microsoft.Win32.UnixRegistryApi::.ctor()
extern "C" void UnixRegistryApi__ctor_m7017 (UnixRegistryApi_t1214 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.UnixRegistryApi::ToUnix(System.String)
extern "C" String_t* UnixRegistryApi_ToUnix_m7018 (Object_t * __this /* static, unused */, String_t* ___keyname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.UnixRegistryApi::IsWellKnownKey(System.String,System.String)
extern "C" bool UnixRegistryApi_IsWellKnownKey_m7019 (Object_t * __this /* static, unused */, String_t* ___parentKeyName, String_t* ___keyname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.UnixRegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1208 * UnixRegistryApi_OpenSubKey_m7020 (UnixRegistryApi_t1214 * __this, RegistryKey_t1208 * ___rkey, String_t* ___keyname, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::Flush(Microsoft.Win32.RegistryKey)
extern "C" void UnixRegistryApi_Flush_m7021 (UnixRegistryApi_t1214 * __this, RegistryKey_t1208 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::Close(Microsoft.Win32.RegistryKey)
extern "C" void UnixRegistryApi_Close_m7022 (UnixRegistryApi_t1214 * __this, RegistryKey_t1208 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::SetValue(Microsoft.Win32.RegistryKey,System.String,System.Object)
extern "C" void UnixRegistryApi_SetValue_m7023 (UnixRegistryApi_t1214 * __this, RegistryKey_t1208 * ___rkey, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::DeleteValue(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" void UnixRegistryApi_DeleteValue_m7024 (UnixRegistryApi_t1214 * __this, RegistryKey_t1208 * ___rkey, String_t* ___name, bool ___throw_if_missing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.UnixRegistryApi::ToString(Microsoft.Win32.RegistryKey)
extern "C" String_t* UnixRegistryApi_ToString_m7025 (UnixRegistryApi_t1214 * __this, RegistryKey_t1208 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.UnixRegistryApi::CreateSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1208 * UnixRegistryApi_CreateSubKey_m7026 (UnixRegistryApi_t1214 * __this, RegistryKey_t1208 * ___rkey, String_t* ___keyname, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
