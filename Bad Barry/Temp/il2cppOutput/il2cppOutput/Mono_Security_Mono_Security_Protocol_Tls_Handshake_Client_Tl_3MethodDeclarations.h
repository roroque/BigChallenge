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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange
struct TlsClientKeyExchange_t785;
// Mono.Security.Protocol.Tls.Context
struct Context_t731;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientKeyExchange__ctor_m4192 (TlsClientKeyExchange_t785 * __this, Context_t731 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsSsl3()
extern "C" void TlsClientKeyExchange_ProcessAsSsl3_m4193 (TlsClientKeyExchange_t785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsTls1()
extern "C" void TlsClientKeyExchange_ProcessAsTls1_m4194 (TlsClientKeyExchange_t785 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessCommon(System.Boolean)
extern "C" void TlsClientKeyExchange_ProcessCommon_m4195 (TlsClientKeyExchange_t785 * __this, bool ___sendLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
