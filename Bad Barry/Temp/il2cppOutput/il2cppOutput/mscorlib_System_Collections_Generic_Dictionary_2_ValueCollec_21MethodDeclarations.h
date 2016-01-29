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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>
struct ValueCollection_t2482;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t2479;
// System.Collections.Generic.IEnumerator`1<LitJson.ObjectMetadata>
struct IEnumerator_1_t2733;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Object
struct Object_t;
// LitJson.ObjectMetadata[]
struct ObjectMetadataU5BU5D_t2477;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ObjectMetadata.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_22.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m18890_gshared (ValueCollection_t2482 * __this, Dictionary_2_t2479 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m18890(__this, ___dictionary, method) (( void (*) (ValueCollection_t2482 *, Dictionary_2_t2479 *, const MethodInfo*))ValueCollection__ctor_m18890_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18891_gshared (ValueCollection_t2482 * __this, ObjectMetadata_t728  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18891(__this, ___item, method) (( void (*) (ValueCollection_t2482 *, ObjectMetadata_t728 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m18891_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18892_gshared (ValueCollection_t2482 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18892(__this, method) (( void (*) (ValueCollection_t2482 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m18892_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18893_gshared (ValueCollection_t2482 * __this, ObjectMetadata_t728  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18893(__this, ___item, method) (( bool (*) (ValueCollection_t2482 *, ObjectMetadata_t728 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m18893_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18894_gshared (ValueCollection_t2482 * __this, ObjectMetadata_t728  ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18894(__this, ___item, method) (( bool (*) (ValueCollection_t2482 *, ObjectMetadata_t728 , const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m18894_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18895_gshared (ValueCollection_t2482 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18895(__this, method) (( Object_t* (*) (ValueCollection_t2482 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m18895_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m18896_gshared (ValueCollection_t2482 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m18896(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2482 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m18896_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18897_gshared (ValueCollection_t2482 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18897(__this, method) (( Object_t * (*) (ValueCollection_t2482 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m18897_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18898_gshared (ValueCollection_t2482 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18898(__this, method) (( bool (*) (ValueCollection_t2482 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m18898_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18899_gshared (ValueCollection_t2482 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18899(__this, method) (( bool (*) (ValueCollection_t2482 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m18899_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m18900_gshared (ValueCollection_t2482 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m18900(__this, method) (( Object_t * (*) (ValueCollection_t2482 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m18900_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m18901_gshared (ValueCollection_t2482 * __this, ObjectMetadataU5BU5D_t2477* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m18901(__this, ___array, ___index, method) (( void (*) (ValueCollection_t2482 *, ObjectMetadataU5BU5D_t2477*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m18901_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::GetEnumerator()
extern "C" Enumerator_t2483  ValueCollection_GetEnumerator_m18902_gshared (ValueCollection_t2482 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m18902(__this, method) (( Enumerator_t2483  (*) (ValueCollection_t2482 *, const MethodInfo*))ValueCollection_GetEnumerator_m18902_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,LitJson.ObjectMetadata>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m18903_gshared (ValueCollection_t2482 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m18903(__this, method) (( int32_t (*) (ValueCollection_t2482 *, const MethodInfo*))ValueCollection_get_Count_m18903_gshared)(__this, method)
