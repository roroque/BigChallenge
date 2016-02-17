﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t971;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1070;
// System.Security.Cryptography.Oid
struct Oid_t1071;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t327;

#include "mscorlib_System_Object.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct  PublicKey_t1069  : public Object_t
{
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::_key
	AsymmetricAlgorithm_t971 * ____key_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t1070 * ____keyValue_1;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t1070 * ____params_2;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t1071 * ____oid_3;
};
struct PublicKey_t1069_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.PublicKey::<>f__switch$map9
	Dictionary_2_t327 * ___U3CU3Ef__switchU24map9_4;
};
