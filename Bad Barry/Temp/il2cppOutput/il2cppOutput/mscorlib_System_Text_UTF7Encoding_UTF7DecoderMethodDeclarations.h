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

// System.Text.UTF7Encoding/UTF7Decoder
struct UTF7Decoder_t1638;
// System.Byte[]
struct ByteU5BU5D_t740;
// System.Char[]
struct CharU5BU5D_t239;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF7Encoding/UTF7Decoder::.ctor()
extern "C" void UTF7Decoder__ctor_m9859 (UTF7Decoder_t1638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF7Decoder_GetChars_m9860 (UTF7Decoder_t1638 * __this, ByteU5BU5D_t740* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t239* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;