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

// System.IO.BinaryReader
struct BinaryReader_t1349;
// System.IO.Stream
struct Stream_t933;
// System.Text.Encoding
struct Encoding_t988;
// System.Byte[]
struct ByteU5BU5D_t822;
// System.Char[]
struct CharU5BU5D_t326;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal.h"

// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C" void BinaryReader__ctor_m8212 (BinaryReader_t1349 * __this, Stream_t933 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void BinaryReader__ctor_m8213 (BinaryReader_t1349 * __this, Stream_t933 * ___input, Encoding_t988 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::System.IDisposable.Dispose()
extern "C" void BinaryReader_System_IDisposable_Dispose_m8214 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.BinaryReader::get_BaseStream()
extern "C" Stream_t933 * BinaryReader_get_BaseStream_m8215 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Close()
extern "C" void BinaryReader_Close_m8216 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::Dispose(System.Boolean)
extern "C" void BinaryReader_Dispose_m8217 (BinaryReader_t1349 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::FillBuffer(System.Int32)
extern "C" void BinaryReader_FillBuffer_m8218 (BinaryReader_t1349 * __this, int32_t ___numBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read()
extern "C" int32_t BinaryReader_Read_m8219 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m8220 (BinaryReader_t1349 * __this, ByteU5BU5D_t822* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t BinaryReader_Read_m8221 (BinaryReader_t1349 * __this, CharU5BU5D_t326* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadCharBytes(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C" int32_t BinaryReader_ReadCharBytes_m8222 (BinaryReader_t1349 * __this, CharU5BU5D_t326* ___buffer, int32_t ___index, int32_t ___count, int32_t* ___bytes_read, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::Read7BitEncodedInt()
extern "C" int32_t BinaryReader_Read7BitEncodedInt_m8223 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.BinaryReader::ReadBoolean()
extern "C" bool BinaryReader_ReadBoolean_m8224 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.IO.BinaryReader::ReadByte()
extern "C" uint8_t BinaryReader_ReadByte_m8225 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32)
extern "C" ByteU5BU5D_t822* BinaryReader_ReadBytes_m8226 (BinaryReader_t1349 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.IO.BinaryReader::ReadChar()
extern "C" uint16_t BinaryReader_ReadChar_m8227 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.IO.BinaryReader::ReadDecimal()
extern "C" Decimal_t785  BinaryReader_ReadDecimal_m8228 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.IO.BinaryReader::ReadDouble()
extern "C" double BinaryReader_ReadDouble_m8229 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.IO.BinaryReader::ReadInt16()
extern "C" int16_t BinaryReader_ReadInt16_m8230 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.BinaryReader::ReadInt32()
extern "C" int32_t BinaryReader_ReadInt32_m8231 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.IO.BinaryReader::ReadInt64()
extern "C" int64_t BinaryReader_ReadInt64_m8232 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.IO.BinaryReader::ReadSByte()
extern "C" int8_t BinaryReader_ReadSByte_m8233 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.BinaryReader::ReadString()
extern "C" String_t* BinaryReader_ReadString_m8234 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.IO.BinaryReader::ReadSingle()
extern "C" float BinaryReader_ReadSingle_m8235 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.IO.BinaryReader::ReadUInt16()
extern "C" uint16_t BinaryReader_ReadUInt16_m8236 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.IO.BinaryReader::ReadUInt32()
extern "C" uint32_t BinaryReader_ReadUInt32_m8237 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.IO.BinaryReader::ReadUInt64()
extern "C" uint64_t BinaryReader_ReadUInt64_m8238 (BinaryReader_t1349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryReader::CheckBuffer(System.Int32)
extern "C" void BinaryReader_CheckBuffer_m8239 (BinaryReader_t1349 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
