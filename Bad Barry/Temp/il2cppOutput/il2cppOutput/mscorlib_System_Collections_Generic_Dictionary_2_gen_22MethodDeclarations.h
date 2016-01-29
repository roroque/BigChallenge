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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2116;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1952;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t684;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2673;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2674;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t760;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2120;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m14032_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m14032(__this, method) (( void (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2__ctor_m14032_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m14033_gshared (Dictionary_2_t2116 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m14033(__this, ___comparer, method) (( void (*) (Dictionary_2_t2116 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m14033_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m14034_gshared (Dictionary_2_t2116 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m14034(__this, ___capacity, method) (( void (*) (Dictionary_2_t2116 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m14034_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m14035_gshared (Dictionary_2_t2116 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m14035(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2116 *, SerializationInfo_t684 *, StreamingContext_t685 , const MethodInfo*))Dictionary_2__ctor_m14035_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m14036_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m14036(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m14036_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m14037_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m14037(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2116 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m14037_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m14038_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m14038(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2116 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m14038_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m14039_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m14039(__this, ___key, method) (( bool (*) (Dictionary_2_t2116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m14039_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m14040_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m14040(__this, ___key, method) (( void (*) (Dictionary_2_t2116 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m14040_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14041_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14041(__this, method) (( bool (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m14041_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14042_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14042(__this, method) (( Object_t * (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m14042_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14043_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14043(__this, method) (( bool (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m14043_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14044_gshared (Dictionary_2_t2116 * __this, KeyValuePair_2_t2118  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14044(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2116 *, KeyValuePair_2_t2118 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m14044_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14045_gshared (Dictionary_2_t2116 * __this, KeyValuePair_2_t2118  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14045(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2116 *, KeyValuePair_2_t2118 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m14045_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14046_gshared (Dictionary_2_t2116 * __this, KeyValuePair_2U5BU5D_t2673* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14046(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2116 *, KeyValuePair_2U5BU5D_t2673*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m14046_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14047_gshared (Dictionary_2_t2116 * __this, KeyValuePair_2_t2118  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14047(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2116 *, KeyValuePair_2_t2118 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m14047_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m14048_gshared (Dictionary_2_t2116 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m14048(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2116 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m14048_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14049_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14049(__this, method) (( Object_t * (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m14049_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14050_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14050(__this, method) (( Object_t* (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m14050_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14051_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14051(__this, method) (( Object_t * (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m14051_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m14052_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m14052(__this, method) (( int32_t (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_get_Count_m14052_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m14053_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m14053(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2116 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m14053_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m14054_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m14054(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2116 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m14054_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m14055_gshared (Dictionary_2_t2116 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m14055(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2116 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m14055_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m14056_gshared (Dictionary_2_t2116 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m14056(__this, ___size, method) (( void (*) (Dictionary_2_t2116 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m14056_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m14057_gshared (Dictionary_2_t2116 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m14057(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2116 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m14057_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2118  Dictionary_2_make_pair_m14058_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m14058(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2118  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m14058_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m14059_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m14059(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m14059_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m14060_gshared (Dictionary_2_t2116 * __this, KeyValuePair_2U5BU5D_t2673* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m14060(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2116 *, KeyValuePair_2U5BU5D_t2673*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m14060_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m14061_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m14061(__this, method) (( void (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_Resize_m14061_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m14062_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m14062(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2116 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m14062_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m14063_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m14063(__this, method) (( void (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_Clear_m14063_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m14064_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m14064(__this, ___key, method) (( bool (*) (Dictionary_2_t2116 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m14064_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m14065_gshared (Dictionary_2_t2116 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m14065(__this, ___value, method) (( bool (*) (Dictionary_2_t2116 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m14065_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m14066_gshared (Dictionary_2_t2116 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m14066(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2116 *, SerializationInfo_t684 *, StreamingContext_t685 , const MethodInfo*))Dictionary_2_GetObjectData_m14066_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m14067_gshared (Dictionary_2_t2116 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m14067(__this, ___sender, method) (( void (*) (Dictionary_2_t2116 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m14067_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m14068_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m14068(__this, ___key, method) (( bool (*) (Dictionary_2_t2116 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m14068_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m14069_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m14069(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2116 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m14069_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2120 * Dictionary_2_get_Values_m14070_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m14070(__this, method) (( ValueCollection_t2120 * (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_get_Values_m14070_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m14071_gshared (Dictionary_2_t2116 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m14071(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2116 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m14071_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m14072_gshared (Dictionary_2_t2116 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m14072(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2116 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m14072_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m14073_gshared (Dictionary_2_t2116 * __this, KeyValuePair_2_t2118  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m14073(__this, ___pair, method) (( bool (*) (Dictionary_2_t2116 *, KeyValuePair_2_t2118 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m14073_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2122  Dictionary_2_GetEnumerator_m14074_gshared (Dictionary_2_t2116 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m14074(__this, method) (( Enumerator_t2122  (*) (Dictionary_2_t2116 *, const MethodInfo*))Dictionary_2_GetEnumerator_m14074_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t764  Dictionary_2_U3CCopyToU3Em__0_m14075_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m14075(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t764  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m14075_gshared)(__this /* static, unused */, ___key, ___value, method)
