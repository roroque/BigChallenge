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

// Mono.Security.X509.X509Extension
struct X509Extension_t806;
// Mono.Security.ASN1
struct ASN1_t770;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t358;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C" void X509Extension__ctor_m4092 (X509Extension_t806 * __this, ASN1_t770 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void X509Extension__ctor_m4093 (X509Extension_t806 * __this, X509Extension_t806 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C" void X509Extension_Decode_m4094 (X509Extension_t806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Encode()
extern "C" void X509Extension_Encode_m4095 (X509Extension_t806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C" String_t* X509Extension_get_Oid_m4096 (X509Extension_t806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C" bool X509Extension_get_Critical_m4097 (X509Extension_t806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C" ASN1_t770 * X509Extension_get_Value_m4098 (X509Extension_t806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C" bool X509Extension_Equals_m4099 (X509Extension_t806 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C" int32_t X509Extension_GetHashCode_m4100 (X509Extension_t806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C" void X509Extension_WriteLine_m4101 (X509Extension_t806 * __this, StringBuilder_t358 * ___sb, int32_t ___n, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C" String_t* X509Extension_ToString_m4102 (X509Extension_t806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;