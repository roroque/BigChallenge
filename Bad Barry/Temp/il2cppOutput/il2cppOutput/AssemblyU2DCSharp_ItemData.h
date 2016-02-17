﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Item
struct Item_t92;
// Inventory
struct Inventory_t85;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// ItemData
struct  ItemData_t91  : public MonoBehaviour_t2
{
	// Item ItemData::item
	Item_t92 * ___item_2;
	// System.Int32 ItemData::amount
	int32_t ___amount_3;
	// System.Int32 ItemData::slot
	int32_t ___slot_4;
	// Inventory ItemData::inv
	Inventory_t85 * ___inv_5;
	// UnityEngine.Vector2 ItemData::offset
	Vector2_t8  ___offset_6;
};
