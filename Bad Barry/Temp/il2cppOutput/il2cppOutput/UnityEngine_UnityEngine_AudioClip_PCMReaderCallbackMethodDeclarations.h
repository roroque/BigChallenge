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

// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t596;
// System.Object
struct Object_t;
// System.Single[]
struct SingleU5BU5D_t597;
// System.IAsyncResult
struct IAsyncResult_t317;
// System.AsyncCallback
struct AsyncCallback_t318;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Single.h"

// System.Void UnityEngine.AudioClip/PCMReaderCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PCMReaderCallback__ctor_m3429 (PCMReaderCallback_t596 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::Invoke(System.Single[])
extern "C" void PCMReaderCallback_Invoke_m3430 (PCMReaderCallback_t596 * __this, SingleU5BU5D_t597* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PCMReaderCallback_t596(Il2CppObject* delegate, SingleU5BU5D_t597* ___data);
// System.IAsyncResult UnityEngine.AudioClip/PCMReaderCallback::BeginInvoke(System.Single[],System.AsyncCallback,System.Object)
extern "C" Object_t * PCMReaderCallback_BeginInvoke_m3431 (PCMReaderCallback_t596 * __this, SingleU5BU5D_t597* ___data, AsyncCallback_t318 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip/PCMReaderCallback::EndInvoke(System.IAsyncResult)
extern "C" void PCMReaderCallback_EndInvoke_m3432 (PCMReaderCallback_t596 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
