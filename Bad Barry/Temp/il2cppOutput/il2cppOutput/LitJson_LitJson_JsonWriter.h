﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t752;
// LitJson.WriterContext
struct WriterContext_t749;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_t750;
// System.Char[]
struct CharU5BU5D_t307;
// System.Text.StringBuilder
struct StringBuilder_t424;
// System.IO.TextWriter
struct TextWriter_t751;

#include "mscorlib_System_Object.h"

// LitJson.JsonWriter
struct  JsonWriter_t731  : public Object_t
{
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_t749 * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_t750 * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t307* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t424 * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t751 * ___writer_10;
};
struct JsonWriter_t731_StaticFields{
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t752 * ___number_format_0;
};
