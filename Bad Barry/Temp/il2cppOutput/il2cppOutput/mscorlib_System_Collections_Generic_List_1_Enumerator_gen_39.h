﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_t713;
// LitJson.JsonData
struct JsonData_t58;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.List`1/Enumerator<LitJson.JsonData>
struct  Enumerator_t2321 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator<LitJson.JsonData>::l
	List_1_t713 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<LitJson.JsonData>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<LitJson.JsonData>::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator<LitJson.JsonData>::current
	JsonData_t58 * ___current_3;
};