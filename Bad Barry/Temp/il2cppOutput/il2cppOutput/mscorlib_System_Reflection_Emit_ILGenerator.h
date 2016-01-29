﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t802;
// System.Reflection.Emit.LocalBuilder[]
struct LocalBuilderU5BU5D_t1388;
// System.Reflection.Emit.ILTokenInfo[]
struct ILTokenInfoU5BU5D_t1389;
// System.Reflection.Emit.ILGenerator/LabelData[]
struct LabelDataU5BU5D_t1390;
// System.Reflection.Emit.ILGenerator/LabelFixup[]
struct LabelFixupU5BU5D_t1391;
// System.Reflection.Module
struct Module_t1379;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1392;

#include "mscorlib_System_Object.h"

// System.Reflection.Emit.ILGenerator
struct  ILGenerator_t1373  : public Object_t
{
	// System.Byte[] System.Reflection.Emit.ILGenerator::code
	ByteU5BU5D_t802* ___code_1;
	// System.Int32 System.Reflection.Emit.ILGenerator::code_len
	int32_t ___code_len_2;
	// System.Int32 System.Reflection.Emit.ILGenerator::max_stack
	int32_t ___max_stack_3;
	// System.Int32 System.Reflection.Emit.ILGenerator::cur_stack
	int32_t ___cur_stack_4;
	// System.Reflection.Emit.LocalBuilder[] System.Reflection.Emit.ILGenerator::locals
	LocalBuilderU5BU5D_t1388* ___locals_5;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_token_fixups
	int32_t ___num_token_fixups_6;
	// System.Reflection.Emit.ILTokenInfo[] System.Reflection.Emit.ILGenerator::token_fixups
	ILTokenInfoU5BU5D_t1389* ___token_fixups_7;
	// System.Reflection.Emit.ILGenerator/LabelData[] System.Reflection.Emit.ILGenerator::labels
	LabelDataU5BU5D_t1390* ___labels_8;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_labels
	int32_t ___num_labels_9;
	// System.Reflection.Emit.ILGenerator/LabelFixup[] System.Reflection.Emit.ILGenerator::fixups
	LabelFixupU5BU5D_t1391* ___fixups_10;
	// System.Int32 System.Reflection.Emit.ILGenerator::num_fixups
	int32_t ___num_fixups_11;
	// System.Reflection.Module System.Reflection.Emit.ILGenerator::module
	Module_t1379 * ___module_12;
	// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ILGenerator::token_gen
	Object_t * ___token_gen_13;
};
struct ILGenerator_t1373_StaticFields{
	// System.Type System.Reflection.Emit.ILGenerator::void_type
	Type_t * ___void_type_0;
};
