﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t11;
// UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder>
struct ObjectPool_1_t392;
// UnityEngine.Events.UnityAction`1<UnityEngine.UI.LayoutRebuilder>
struct UnityAction_1_t393;
// System.Predicate`1<UnityEngine.Component>
struct Predicate_1_t394;
// UnityEngine.Events.UnityAction`1<UnityEngine.Component>
struct UnityAction_1_t395;

#include "mscorlib_System_Object.h"

// UnityEngine.UI.LayoutRebuilder
struct  LayoutRebuilder_t391  : public Object_t
{
	// UnityEngine.RectTransform UnityEngine.UI.LayoutRebuilder::m_ToRebuild
	RectTransform_t11 * ___m_ToRebuild_0;
	// System.Int32 UnityEngine.UI.LayoutRebuilder::m_CachedHashFromTransform
	int32_t ___m_CachedHashFromTransform_1;
};
struct LayoutRebuilder_t391_StaticFields{
	// UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder> UnityEngine.UI.LayoutRebuilder::s_Rebuilders
	ObjectPool_1_t392 * ___s_Rebuilders_2;
	// UnityEngine.Events.UnityAction`1<UnityEngine.UI.LayoutRebuilder> UnityEngine.UI.LayoutRebuilder::<>f__am$cache3
	UnityAction_1_t393 * ___U3CU3Ef__amU24cache3_3;
	// System.Predicate`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache4
	Predicate_1_t394 * ___U3CU3Ef__amU24cache4_4;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache5
	UnityAction_1_t395 * ___U3CU3Ef__amU24cache5_5;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache6
	UnityAction_1_t395 * ___U3CU3Ef__amU24cache6_6;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache7
	UnityAction_1_t395 * ___U3CU3Ef__amU24cache7_7;
	// UnityEngine.Events.UnityAction`1<UnityEngine.Component> UnityEngine.UI.LayoutRebuilder::<>f__am$cache8
	UnityAction_1_t395 * ___U3CU3Ef__amU24cache8_8;
};
