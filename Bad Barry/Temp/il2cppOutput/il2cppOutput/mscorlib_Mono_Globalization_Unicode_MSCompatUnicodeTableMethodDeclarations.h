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

// Mono.Globalization.Unicode.TailoringInfo
struct TailoringInfo_t1219;
// System.Globalization.CultureInfo
struct CultureInfo_t701;
// Mono.Globalization.Unicode.Contraction[]
struct ContractionU5BU5D_t1233;
// Mono.Globalization.Unicode.Level2Map[]
struct Level2MapU5BU5D_t1234;
// System.String
struct String_t;
// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1217;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::.cctor()
extern "C" void MSCompatUnicodeTable__cctor_m7057 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Globalization.Unicode.TailoringInfo Mono.Globalization.Unicode.MSCompatUnicodeTable::GetTailoringInfo(System.Int32)
extern "C" TailoringInfo_t1219 * MSCompatUnicodeTable_GetTailoringInfo_m7058 (Object_t * __this /* static, unused */, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::BuildTailoringTables(System.Globalization.CultureInfo,Mono.Globalization.Unicode.TailoringInfo,Mono.Globalization.Unicode.Contraction[]&,Mono.Globalization.Unicode.Level2Map[]&)
extern "C" void MSCompatUnicodeTable_BuildTailoringTables_m7059 (Object_t * __this /* static, unused */, CultureInfo_t701 * ___culture, TailoringInfo_t1219 * ___t, ContractionU5BU5D_t1233** ___contractions, Level2MapU5BU5D_t1234** ___diacriticals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::SetCJKReferences(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void MSCompatUnicodeTable_SetCJKReferences_m7060 (Object_t * __this /* static, unused */, String_t* ___name, CodePointIndexer_t1217 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t1217 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Category(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Category_m7061 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level1(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Level1_m7062 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level2(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Level2_m7063 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Globalization.Unicode.MSCompatUnicodeTable::Level3(System.Int32)
extern "C" uint8_t MSCompatUnicodeTable_Level3_m7064 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorable(System.Int32,System.Byte)
extern "C" bool MSCompatUnicodeTable_IsIgnorable_m7065 (Object_t * __this /* static, unused */, int32_t ___cp, uint8_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsIgnorableNonSpacing(System.Int32)
extern "C" bool MSCompatUnicodeTable_IsIgnorableNonSpacing_m7066 (Object_t * __this /* static, unused */, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToKanaTypeInsensitive(System.Int32)
extern "C" int32_t MSCompatUnicodeTable_ToKanaTypeInsensitive_m7067 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.MSCompatUnicodeTable::ToWidthCompat(System.Int32)
extern "C" int32_t MSCompatUnicodeTable_ToWidthCompat_m7068 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::HasSpecialWeight(System.Char)
extern "C" bool MSCompatUnicodeTable_HasSpecialWeight_m7069 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHalfWidthKana(System.Char)
extern "C" bool MSCompatUnicodeTable_IsHalfWidthKana_m7070 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsHiragana(System.Char)
extern "C" bool MSCompatUnicodeTable_IsHiragana_m7071 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::IsJapaneseSmallLetter(System.Char)
extern "C" bool MSCompatUnicodeTable_IsJapaneseSmallLetter_m7072 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Globalization.Unicode.MSCompatUnicodeTable::get_IsReady()
extern "C" bool MSCompatUnicodeTable_get_IsReady_m7073 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Mono.Globalization.Unicode.MSCompatUnicodeTable::GetResource(System.String)
extern "C" IntPtr_t MSCompatUnicodeTable_GetResource_m7074 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Globalization.Unicode.MSCompatUnicodeTable::UInt32FromBytePtr(System.Byte*,System.UInt32)
extern "C" uint32_t MSCompatUnicodeTable_UInt32FromBytePtr_m7075 (Object_t * __this /* static, unused */, uint8_t* ___raw, uint32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJK(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void MSCompatUnicodeTable_FillCJK_m7076 (Object_t * __this /* static, unused */, String_t* ___culture, CodePointIndexer_t1217 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t1217 ** ___lv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.MSCompatUnicodeTable::FillCJKCore(System.String,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&,System.Byte*&,Mono.Globalization.Unicode.CodePointIndexer&,System.Byte*&)
extern "C" void MSCompatUnicodeTable_FillCJKCore_m7077 (Object_t * __this /* static, unused */, String_t* ___culture, CodePointIndexer_t1217 ** ___cjkIndexer, uint8_t** ___catTable, uint8_t** ___lv1Table, CodePointIndexer_t1217 ** ___cjkLv2Indexer, uint8_t** ___lv2Table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
