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

// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t923;
// System.Byte[]
struct ByteU5BU5D_t822;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor()
extern "C" void TlsStream__ctor_m4978 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor(System.Byte[])
extern "C" void TlsStream__ctor_m4979 (TlsStream_t923 * __this, ByteU5BU5D_t822* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_EOF()
extern "C" bool TlsStream_get_EOF_m4980 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite()
extern "C" bool TlsStream_get_CanWrite_m4981 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanRead()
extern "C" bool TlsStream_get_CanRead_m4982 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanSeek()
extern "C" bool TlsStream_get_CanSeek_m4983 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Position()
extern "C" int64_t TlsStream_get_Position_m4984 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::set_Position(System.Int64)
extern "C" void TlsStream_set_Position_m4985 (TlsStream_t923 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length()
extern "C" int64_t TlsStream_get_Length_m4986 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadSmallValue(System.Int32)
extern "C" ByteU5BU5D_t822* TlsStream_ReadSmallValue_m4987 (TlsStream_t923 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Protocol.Tls.TlsStream::ReadByte()
extern "C" uint8_t TlsStream_ReadByte_m4988 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.TlsStream::ReadInt16()
extern "C" int16_t TlsStream_ReadInt16_m4989 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::ReadInt24()
extern "C" int32_t TlsStream_ReadInt24_m4990 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadBytes(System.Int32)
extern "C" ByteU5BU5D_t822* TlsStream_ReadBytes_m4991 (TlsStream_t923 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte)
extern "C" void TlsStream_Write_m4992 (TlsStream_t923 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int16)
extern "C" void TlsStream_Write_m4993 (TlsStream_t923 * __this, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::WriteInt24(System.Int32)
extern "C" void TlsStream_WriteInt24_m4994 (TlsStream_t923 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int32)
extern "C" void TlsStream_Write_m4995 (TlsStream_t923 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[])
extern "C" void TlsStream_Write_m4996 (TlsStream_t923 * __this, ByteU5BU5D_t822* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Reset()
extern "C" void TlsStream_Reset_m4997 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ToArray()
extern "C" ByteU5BU5D_t822* TlsStream_ToArray_m4998 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Flush()
extern "C" void TlsStream_Flush_m4999 (TlsStream_t923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::SetLength(System.Int64)
extern "C" void TlsStream_SetLength_m5000 (TlsStream_t923 * __this, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t TlsStream_Seek_m5001 (TlsStream_t923 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t TlsStream_Read_m5002 (TlsStream_t923 * __this, ByteU5BU5D_t822* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void TlsStream_Write_m5003 (TlsStream_t923 * __this, ByteU5BU5D_t822* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
