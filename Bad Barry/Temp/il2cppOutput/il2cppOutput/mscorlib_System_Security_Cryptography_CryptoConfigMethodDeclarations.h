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

// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t79;
// System.Byte[]
struct ByteU5BU5D_t644;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.CryptoConfig::.cctor()
extern "C" void CryptoConfig__cctor_m8851 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoConfig::Initialize()
extern "C" void CryptoConfig_Initialize_m8852 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String)
extern "C" Object_t * CryptoConfig_CreateFromName_m4269 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.CryptoConfig::CreateFromName(System.String,System.Object[])
extern "C" Object_t * CryptoConfig_CreateFromName_m5324 (Object_t * __this /* static, unused */, String_t* ___name, ObjectU5BU5D_t79* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.CryptoConfig::MapNameToOID(System.String)
extern "C" String_t* CryptoConfig_MapNameToOID_m4270 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
extern "C" ByteU5BU5D_t644* CryptoConfig_EncodeOID_m4258 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeLongNumber(System.Int64)
extern "C" ByteU5BU5D_t644* CryptoConfig_EncodeLongNumber_m8853 (Object_t * __this /* static, unused */, int64_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
