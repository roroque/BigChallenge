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

// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1460;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1459;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1453;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.BaseFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Runtime.Serialization.ObjectRecord)
extern "C" void BaseFixupRecord__ctor_m8769 (BaseFixupRecord_t1460 * __this, ObjectRecord_t1459 * ___objectToBeFixed, ObjectRecord_t1459 * ___objectRequired, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.BaseFixupRecord::DoFixup(System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool BaseFixupRecord_DoFixup_m8770 (BaseFixupRecord_t1460 * __this, ObjectManager_t1453 * ___manager, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
