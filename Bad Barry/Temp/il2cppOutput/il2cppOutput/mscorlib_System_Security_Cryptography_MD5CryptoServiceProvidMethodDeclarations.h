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

// System.Security.Cryptography.MD5CryptoServiceProvider
struct MD5CryptoServiceProvider_t1569;
// System.Byte[]
struct ByteU5BU5D_t740;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.ctor()
extern "C" void MD5CryptoServiceProvider__ctor_m9374 (MD5CryptoServiceProvider_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::.cctor()
extern "C" void MD5CryptoServiceProvider__cctor_m9375 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Finalize()
extern "C" void MD5CryptoServiceProvider_Finalize_m9376 (MD5CryptoServiceProvider_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Dispose(System.Boolean)
extern "C" void MD5CryptoServiceProvider_Dispose_m9377 (MD5CryptoServiceProvider_t1569 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MD5CryptoServiceProvider_HashCore_m9378 (MD5CryptoServiceProvider_t1569 * __this, ByteU5BU5D_t740* ___rgb, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::HashFinal()
extern "C" ByteU5BU5D_t740* MD5CryptoServiceProvider_HashFinal_m9379 (MD5CryptoServiceProvider_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::Initialize()
extern "C" void MD5CryptoServiceProvider_Initialize_m9380 (MD5CryptoServiceProvider_t1569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessBlock(System.Byte[],System.Int32)
extern "C" void MD5CryptoServiceProvider_ProcessBlock_m9381 (MD5CryptoServiceProvider_t1569 * __this, ByteU5BU5D_t740* ___inputBuffer, int32_t ___inputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::ProcessFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" void MD5CryptoServiceProvider_ProcessFinalBlock_m9382 (MD5CryptoServiceProvider_t1569 * __this, ByteU5BU5D_t740* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MD5CryptoServiceProvider::AddLength(System.UInt64,System.Byte[],System.Int32)
extern "C" void MD5CryptoServiceProvider_AddLength_m9383 (MD5CryptoServiceProvider_t1569 * __this, uint64_t ___length, ByteU5BU5D_t740* ___buffer, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
