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

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t828;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t76;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t826;
// System.String
struct String_t;
// System.Array
struct Array_t;
// Mono.Security.Protocol.Tls.TlsCipherSuite
struct TlsCipherSuite_t869;
// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t865;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"

// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void CipherSuiteCollection__ctor_m4207 (CipherSuiteCollection_t828 * __this, int32_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * CipherSuiteCollection_System_Collections_IList_get_Item_m4208 (CipherSuiteCollection_t828 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void CipherSuiteCollection_System_Collections_IList_set_Item_m4209 (CipherSuiteCollection_t828 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool CipherSuiteCollection_System_Collections_ICollection_get_IsSynchronized_m4210 (CipherSuiteCollection_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * CipherSuiteCollection_System_Collections_ICollection_get_SyncRoot_m4211 (CipherSuiteCollection_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * CipherSuiteCollection_System_Collections_IEnumerable_GetEnumerator_m4212 (CipherSuiteCollection_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Contains(System.Object)
extern "C" bool CipherSuiteCollection_System_Collections_IList_Contains_m4213 (CipherSuiteCollection_t828 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t CipherSuiteCollection_System_Collections_IList_IndexOf_m4214 (CipherSuiteCollection_t828 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void CipherSuiteCollection_System_Collections_IList_Insert_m4215 (CipherSuiteCollection_t828 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Remove(System.Object)
extern "C" void CipherSuiteCollection_System_Collections_IList_Remove_m4216 (CipherSuiteCollection_t828 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.RemoveAt(System.Int32)
extern "C" void CipherSuiteCollection_System_Collections_IList_RemoveAt_m4217 (CipherSuiteCollection_t828 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::System.Collections.IList.Add(System.Object)
extern "C" int32_t CipherSuiteCollection_System_Collections_IList_Add_m4218 (CipherSuiteCollection_t828 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.String)
extern "C" CipherSuite_t826 * CipherSuiteCollection_get_Item_m4219 (CipherSuiteCollection_t828 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int32)
extern "C" CipherSuite_t826 * CipherSuiteCollection_get_Item_m4220 (CipherSuiteCollection_t828 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::set_Item(System.Int32,Mono.Security.Protocol.Tls.CipherSuite)
extern "C" void CipherSuiteCollection_set_Item_m4221 (CipherSuiteCollection_t828 * __this, int32_t ___index, CipherSuite_t826 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Item(System.Int16)
extern "C" CipherSuite_t826 * CipherSuiteCollection_get_Item_m4222 (CipherSuiteCollection_t828 * __this, int16_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::get_Count()
extern "C" int32_t CipherSuiteCollection_get_Count_m4223 (CipherSuiteCollection_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::get_IsFixedSize()
extern "C" bool CipherSuiteCollection_get_IsFixedSize_m4224 (CipherSuiteCollection_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::get_IsReadOnly()
extern "C" bool CipherSuiteCollection_get_IsReadOnly_m4225 (CipherSuiteCollection_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::CopyTo(System.Array,System.Int32)
extern "C" void CipherSuiteCollection_CopyTo_m4226 (CipherSuiteCollection_t828 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.CipherSuiteCollection::Clear()
extern "C" void CipherSuiteCollection_Clear_m4227 (CipherSuiteCollection_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.String)
extern "C" int32_t CipherSuiteCollection_IndexOf_m4228 (CipherSuiteCollection_t828 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.CipherSuiteCollection::IndexOf(System.Int16)
extern "C" int32_t CipherSuiteCollection_IndexOf_m4229 (CipherSuiteCollection_t828 * __this, int16_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::Add(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern "C" CipherSuite_t826 * CipherSuiteCollection_Add_m4230 (CipherSuiteCollection_t828 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherType, int32_t ___hashType, int32_t ___exchangeType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBytes, uint8_t ___ivSize, uint8_t ___blockSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.TlsCipherSuite)
extern "C" TlsCipherSuite_t869 * CipherSuiteCollection_add_m4231 (CipherSuiteCollection_t828 * __this, TlsCipherSuite_t869 * ___cipherSuite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SslCipherSuite Mono.Security.Protocol.Tls.CipherSuiteCollection::add(Mono.Security.Protocol.Tls.SslCipherSuite)
extern "C" SslCipherSuite_t865 * CipherSuiteCollection_add_m4232 (CipherSuiteCollection_t828 * __this, SslCipherSuite_t865 * ___cipherSuite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CipherSuiteCollection::cultureAwareCompare(System.String,System.String)
extern "C" bool CipherSuiteCollection_cultureAwareCompare_m4233 (CipherSuiteCollection_t828 * __this, String_t* ___strA, String_t* ___strB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
