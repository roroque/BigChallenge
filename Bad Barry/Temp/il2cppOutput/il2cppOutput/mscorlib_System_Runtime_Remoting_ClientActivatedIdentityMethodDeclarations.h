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

// System.Runtime.Remoting.ClientActivatedIdentity
struct ClientActivatedIdentity_t1604;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.MarshalByRefObject
struct MarshalByRefObject_t1047;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.ClientActivatedIdentity::.ctor(System.String,System.Type)
extern "C" void ClientActivatedIdentity__ctor_m9746 (ClientActivatedIdentity_t1604 * __this, String_t* ___objectUri, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientActivatedIdentity::GetServerObject()
extern "C" MarshalByRefObject_t1047 * ClientActivatedIdentity_GetServerObject_m9747 (ClientActivatedIdentity_t1604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientActivatedIdentity::OnLifetimeExpired()
extern "C" void ClientActivatedIdentity_OnLifetimeExpired_m9748 (ClientActivatedIdentity_t1604 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
