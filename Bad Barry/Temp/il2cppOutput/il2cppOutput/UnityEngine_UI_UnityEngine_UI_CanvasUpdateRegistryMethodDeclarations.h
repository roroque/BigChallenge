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

// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t244;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t413;
// UnityEngine.Transform
struct Transform_t47;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.CanvasUpdateRegistry::.ctor()
extern "C" void CanvasUpdateRegistry__ctor_m1190 (CanvasUpdateRegistry_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::.cctor()
extern "C" void CanvasUpdateRegistry__cctor_m1191 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::get_instance()
extern "C" CanvasUpdateRegistry_t244 * CanvasUpdateRegistry_get_instance_m1192 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::ObjectValidForUpdate(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_ObjectValidForUpdate_m1193 (CanvasUpdateRegistry_t244 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::CleanInvalidItems()
extern "C" void CanvasUpdateRegistry_CleanInvalidItems_m1194 (CanvasUpdateRegistry_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::PerformUpdate()
extern "C" void CanvasUpdateRegistry_PerformUpdate_m1195 (CanvasUpdateRegistry_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::ParentCount(UnityEngine.Transform)
extern "C" int32_t CanvasUpdateRegistry_ParentCount_m1196 (Object_t * __this /* static, unused */, Transform_t47 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::SortLayoutList(UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement)
extern "C" int32_t CanvasUpdateRegistry_SortLayoutList_m1197 (Object_t * __this /* static, unused */, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_RegisterCanvasElementForLayoutRebuild_m1198 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::TryRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_TryRegisterCanvasElementForLayoutRebuild_m1199 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m1200 (CanvasUpdateRegistry_t244 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_RegisterCanvasElementForGraphicRebuild_m1201 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::TryRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_TryRegisterCanvasElementForGraphicRebuild_m1202 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m1203 (CanvasUpdateRegistry_t244 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild_m1204 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m1205 (CanvasUpdateRegistry_t244 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m1206 (CanvasUpdateRegistry_t244 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingLayout()
extern "C" bool CanvasUpdateRegistry_IsRebuildingLayout_m1207 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingGraphics()
extern "C" bool CanvasUpdateRegistry_IsRebuildingGraphics_m1208 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
