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

// System.Globalization.GregorianCalendar
struct GregorianCalendar_t1323;
// System.Int32[]
struct Int32U5BU5D_t56;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_GregorianCalendarTypes.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.GregorianCalendar::.ctor(System.Globalization.GregorianCalendarTypes)
extern "C" void GregorianCalendar__ctor_m8052 (GregorianCalendar_t1323 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::.ctor()
extern "C" void GregorianCalendar__ctor_m8053 (GregorianCalendar_t1323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.GregorianCalendar::get_Eras()
extern "C" Int32U5BU5D_t56* GregorianCalendar_get_Eras_m8054 (GregorianCalendar_t1323 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::set_CalendarType(System.Globalization.GregorianCalendarTypes)
extern "C" void GregorianCalendar_set_CalendarType_m8055 (GregorianCalendar_t1323 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetDayOfMonth(System.DateTime)
extern "C" int32_t GregorianCalendar_GetDayOfMonth_m8056 (GregorianCalendar_t1323 * __this, DateTime_t58  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.Globalization.GregorianCalendar::GetDayOfWeek(System.DateTime)
extern "C" int32_t GregorianCalendar_GetDayOfWeek_m8057 (GregorianCalendar_t1323 * __this, DateTime_t58  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetEra(System.DateTime)
extern "C" int32_t GregorianCalendar_GetEra_m8058 (GregorianCalendar_t1323 * __this, DateTime_t58  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetMonth(System.DateTime)
extern "C" int32_t GregorianCalendar_GetMonth_m8059 (GregorianCalendar_t1323 * __this, DateTime_t58  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetYear(System.DateTime)
extern "C" int32_t GregorianCalendar_GetYear_m8060 (GregorianCalendar_t1323 * __this, DateTime_t58  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
