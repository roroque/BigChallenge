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

// Slot
struct Slot_t86;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t133;
// ItemData
struct ItemData_t81;

#include "codegen/il2cpp-codegen.h"

// System.Void Slot::.ctor()
extern "C" void Slot__ctor_m379 (Slot_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::Start()
extern "C" void Slot_Start_m380 (Slot_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slot_OnDrop_m381 (Slot_t86 * __this, PointerEventData_t133 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::slots2Completed()
extern "C" bool Slot_slots2Completed_m382 (Slot_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::IsInPanel1(ItemData)
extern "C" bool Slot_IsInPanel1_m383 (Slot_t86 * __this, ItemData_t81 * ___droppedItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
