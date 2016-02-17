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

// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_t663;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t182;
// System.String
struct String_t;
// System.Action`1<System.Boolean>
struct Action_1_t71;

#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C" Object_t * Social_get_Active_m3726 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern "C" Object_t * Social_get_localUser_m790 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Social::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
extern "C" void Social_ReportScore_m798 (Object_t * __this /* static, unused */, int64_t ___score, String_t* ___board, Action_1_t71 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
