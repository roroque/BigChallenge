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

// UnityEngine.AnimationCurve
struct AnimationCurve_t606;
struct AnimationCurve_t606_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t698;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m3466 (AnimationCurve_t606 * __this, KeyframeU5BU5D_t698* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3467 (AnimationCurve_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3468 (AnimationCurve_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3469 (AnimationCurve_t606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3470 (AnimationCurve_t606 * __this, KeyframeU5BU5D_t698* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t606_marshal(const AnimationCurve_t606& unmarshaled, AnimationCurve_t606_marshaled& marshaled);
extern "C" void AnimationCurve_t606_marshal_back(const AnimationCurve_t606_marshaled& marshaled, AnimationCurve_t606& unmarshaled);
extern "C" void AnimationCurve_t606_marshal_cleanup(AnimationCurve_t606_marshaled& marshaled);
