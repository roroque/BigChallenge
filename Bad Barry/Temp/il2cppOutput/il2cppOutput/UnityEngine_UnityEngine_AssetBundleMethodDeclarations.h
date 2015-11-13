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

// UnityEngine.AssetBundle
struct AssetBundle_t433;
// UnityEngine.Object
struct Object_t79;
struct Object_t79_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.Object[]
struct ObjectU5BU5D_t85;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset(System.String,System.Type)
extern "C" Object_t79 * AssetBundle_LoadAsset_m2486 (AssetBundle_t433 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
extern "C" Object_t79 * AssetBundle_LoadAsset_Internal_m2487 (AssetBundle_t433 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object[] UnityEngine.AssetBundle::LoadAssetWithSubAssets_Internal(System.String,System.Type)
extern "C" ObjectU5BU5D_t85* AssetBundle_LoadAssetWithSubAssets_Internal_m2488 (AssetBundle_t433 * __this, String_t* ___name, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;