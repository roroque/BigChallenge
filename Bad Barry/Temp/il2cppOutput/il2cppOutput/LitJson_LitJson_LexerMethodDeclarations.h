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

// LitJson.Lexer
struct Lexer_t765;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t766;
// LitJson.FsmContext
struct FsmContext_t773;

#include "codegen/il2cpp-codegen.h"

// System.Boolean LitJson.Lexer::get_EndOfInput()
extern "C" bool Lexer_get_EndOfInput_m4031 (Lexer_t765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::get_Token()
extern "C" int32_t Lexer_get_Token_m4032 (Lexer_t765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.Lexer::get_StringValue()
extern "C" String_t* Lexer_get_StringValue_m4033 (Lexer_t765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.cctor()
extern "C" void Lexer__cctor_m4034 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
extern "C" void Lexer__ctor_m4035 (Lexer_t765 * __this, TextReader_t766 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
extern "C" int32_t Lexer_HexValue_m4036 (Object_t * __this /* static, unused */, int32_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::PopulateFsmTables()
extern "C" void Lexer_PopulateFsmTables_m4037 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
extern "C" uint16_t Lexer_ProcessEscChar_m4038 (Object_t * __this /* static, unused */, int32_t ___esc_char, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
extern "C" bool Lexer_State1_m4039 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
extern "C" bool Lexer_State2_m4040 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
extern "C" bool Lexer_State3_m4041 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
extern "C" bool Lexer_State4_m4042 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
extern "C" bool Lexer_State5_m4043 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
extern "C" bool Lexer_State6_m4044 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
extern "C" bool Lexer_State7_m4045 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
extern "C" bool Lexer_State8_m4046 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
extern "C" bool Lexer_State9_m4047 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
extern "C" bool Lexer_State10_m4048 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
extern "C" bool Lexer_State11_m4049 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
extern "C" bool Lexer_State12_m4050 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
extern "C" bool Lexer_State13_m4051 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
extern "C" bool Lexer_State14_m4052 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
extern "C" bool Lexer_State15_m4053 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
extern "C" bool Lexer_State16_m4054 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
extern "C" bool Lexer_State17_m4055 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
extern "C" bool Lexer_State18_m4056 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
extern "C" bool Lexer_State19_m4057 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
extern "C" bool Lexer_State20_m4058 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
extern "C" bool Lexer_State21_m4059 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
extern "C" bool Lexer_State22_m4060 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
extern "C" bool Lexer_State23_m4061 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
extern "C" bool Lexer_State24_m4062 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
extern "C" bool Lexer_State25_m4063 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
extern "C" bool Lexer_State26_m4064 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
extern "C" bool Lexer_State27_m4065 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
extern "C" bool Lexer_State28_m4066 (Object_t * __this /* static, unused */, FsmContext_t773 * ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::GetChar()
extern "C" bool Lexer_GetChar_m4067 (Lexer_t765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LitJson.Lexer::NextChar()
extern "C" int32_t Lexer_NextChar_m4068 (Lexer_t765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer::NextToken()
extern "C" bool Lexer_NextToken_m4069 (Lexer_t765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.Lexer::UngetChar()
extern "C" void Lexer_UngetChar_m4070 (Lexer_t765 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
