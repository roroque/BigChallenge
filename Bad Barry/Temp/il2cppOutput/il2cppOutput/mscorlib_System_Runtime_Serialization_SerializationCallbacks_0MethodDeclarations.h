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

// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t1653;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t833;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
extern "C" void SerializationCallbacks__ctor_m9954 (SerializationCallbacks_t1653 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
extern "C" void SerializationCallbacks__cctor_m9955 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasSerializedCallbacks()
extern "C" bool SerializationCallbacks_get_HasSerializedCallbacks_m9956 (SerializationCallbacks_t1653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
extern "C" bool SerializationCallbacks_get_HasDeserializedCallbacks_m9957 (SerializationCallbacks_t1653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
extern "C" ArrayList_t833 * SerializationCallbacks_GetMethodsByAttribute_m9958 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___attr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationCallbacks_Invoke_m9959 (Object_t * __this /* static, unused */, ArrayList_t833 * ___list, Object_t * ___target, StreamingContext_t685  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnSerializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationCallbacks_RaiseOnSerializing_m9960 (SerializationCallbacks_t1653 * __this, Object_t * ___target, StreamingContext_t685  ___contex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnSerialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationCallbacks_RaiseOnSerialized_m9961 (SerializationCallbacks_t1653 * __this, Object_t * ___target, StreamingContext_t685  ___contex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationCallbacks_RaiseOnDeserializing_m9962 (SerializationCallbacks_t1653 * __this, Object_t * ___target, StreamingContext_t685  ___contex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationCallbacks_RaiseOnDeserialized_m9963 (SerializationCallbacks_t1653 * __this, Object_t * ___target, StreamingContext_t685  ___contex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
extern "C" SerializationCallbacks_t1653 * SerializationCallbacks_GetSerializationCallbacks_m9964 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
