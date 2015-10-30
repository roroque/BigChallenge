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
struct Dictionary_2_t1911;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1765;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t603;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2352;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t55;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2353;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t815;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1915;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m12520_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12520(__this, method) (( void (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2__ctor_m12520_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12521_gshared (Dictionary_2_t1911 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12521(__this, ___comparer, method) (( void (*) (Dictionary_2_t1911 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12521_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12522_gshared (Dictionary_2_t1911 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12522(__this, ___capacity, method) (( void (*) (Dictionary_2_t1911 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12522_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12523_gshared (Dictionary_2_t1911 * __this, SerializationInfo_t603 * ___info, StreamingContext_t604  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12523(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1911 *, SerializationInfo_t603 *, StreamingContext_t604 , const MethodInfo*))Dictionary_2__ctor_m12523_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12524_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12524(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1911 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12524_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12525_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12525(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1911 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12525_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12526_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12526(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1911 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12526_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12527_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12527(__this, ___key, method) (( bool (*) (Dictionary_2_t1911 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12527_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12528_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12528(__this, ___key, method) (( void (*) (Dictionary_2_t1911 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12528_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12529_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12529(__this, method) (( bool (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12529_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12530_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12530(__this, method) (( Object_t * (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12530_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12531_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12531(__this, method) (( bool (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12531_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12532_gshared (Dictionary_2_t1911 * __this, KeyValuePair_2_t1913  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12532(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1911 *, KeyValuePair_2_t1913 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12532_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12533_gshared (Dictionary_2_t1911 * __this, KeyValuePair_2_t1913  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12533(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1911 *, KeyValuePair_2_t1913 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12533_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12534_gshared (Dictionary_2_t1911 * __this, KeyValuePair_2U5BU5D_t2352* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12534(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1911 *, KeyValuePair_2U5BU5D_t2352*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12534_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12535_gshared (Dictionary_2_t1911 * __this, KeyValuePair_2_t1913  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12535(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1911 *, KeyValuePair_2_t1913 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12535_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12536_gshared (Dictionary_2_t1911 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12536(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1911 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12536_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12537_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12537(__this, method) (( Object_t * (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12537_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12538_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12538(__this, method) (( Object_t* (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12538_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12539_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12539(__this, method) (( Object_t * (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12539_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12540_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12540(__this, method) (( int32_t (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_get_Count_m12540_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m12541_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12541(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1911 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12541_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12542_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12542(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1911 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m12542_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12543_gshared (Dictionary_2_t1911 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12543(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1911 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12543_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12544_gshared (Dictionary_2_t1911 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12544(__this, ___size, method) (( void (*) (Dictionary_2_t1911 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12544_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12545_gshared (Dictionary_2_t1911 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12545(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1911 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12545_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1913  Dictionary_2_make_pair_m12546_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12546(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1913  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m12546_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m12547_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12547(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m12547_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12548_gshared (Dictionary_2_t1911 * __this, KeyValuePair_2U5BU5D_t2352* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12548(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1911 *, KeyValuePair_2U5BU5D_t2352*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12548_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m12549_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12549(__this, method) (( void (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_Resize_m12549_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12550_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12550(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1911 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m12550_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m12551_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12551(__this, method) (( void (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_Clear_m12551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12552_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12552(__this, ___key, method) (( bool (*) (Dictionary_2_t1911 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12552_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12553_gshared (Dictionary_2_t1911 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12553(__this, ___value, method) (( bool (*) (Dictionary_2_t1911 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m12553_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12554_gshared (Dictionary_2_t1911 * __this, SerializationInfo_t603 * ___info, StreamingContext_t604  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12554(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1911 *, SerializationInfo_t603 *, StreamingContext_t604 , const MethodInfo*))Dictionary_2_GetObjectData_m12554_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12555_gshared (Dictionary_2_t1911 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12555(__this, ___sender, method) (( void (*) (Dictionary_2_t1911 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12555_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12556_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12556(__this, ___key, method) (( bool (*) (Dictionary_2_t1911 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12556_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12557_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12557(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1911 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m12557_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1915 * Dictionary_2_get_Values_m12558_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12558(__this, method) (( ValueCollection_t1915 * (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_get_Values_m12558_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12559_gshared (Dictionary_2_t1911 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12559(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1911 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12559_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m12560_gshared (Dictionary_2_t1911 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12560(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1911 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12560_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12561_gshared (Dictionary_2_t1911 * __this, KeyValuePair_2_t1913  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12561(__this, ___pair, method) (( bool (*) (Dictionary_2_t1911 *, KeyValuePair_2_t1913 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12561_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1917  Dictionary_2_GetEnumerator_m12562_gshared (Dictionary_2_t1911 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12562(__this, method) (( Enumerator_t1917  (*) (Dictionary_2_t1911 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12562_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1005  Dictionary_2_U3CCopyToU3Em__0_m12563_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12563(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1005  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12563_gshared)(__this /* static, unused */, ___key, ___value, method)
