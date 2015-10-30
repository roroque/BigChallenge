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

// Mono.Security.StrongName
struct StrongName_t1121;
// System.Byte[]
struct ByteU5BU5D_t644;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.StrongName::.cctor()
extern "C" void StrongName__cctor_m6688 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
extern "C" ByteU5BU5D_t644* StrongName_get_PublicKey_m6689 (StrongName_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
extern "C" ByteU5BU5D_t644* StrongName_get_PublicKeyToken_m6690 (StrongName_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
extern "C" String_t* StrongName_get_TokenAlgorithm_m6691 (StrongName_t1121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
