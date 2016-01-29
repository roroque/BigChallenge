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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2538;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1952;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t684;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2748;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2749;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t760;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2543;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__24.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m19563_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m19563(__this, method) (( void (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2__ctor_m19563_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m19564_gshared (Dictionary_2_t2538 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m19564(__this, ___comparer, method) (( void (*) (Dictionary_2_t2538 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m19564_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m19566_gshared (Dictionary_2_t2538 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m19566(__this, ___capacity, method) (( void (*) (Dictionary_2_t2538 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m19566_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m19568_gshared (Dictionary_2_t2538 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m19568(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2538 *, SerializationInfo_t684 *, StreamingContext_t685 , const MethodInfo*))Dictionary_2__ctor_m19568_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19570_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m19570(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m19570_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m19572_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m19572(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m19572_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m19574_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m19574(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m19574_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m19576_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m19576(__this, ___key, method) (( bool (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m19576_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m19578_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m19578(__this, ___key, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m19578_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19580_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19580(__this, method) (( bool (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19580_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19582_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19582(__this, method) (( Object_t * (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19582_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19584_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19584(__this, method) (( bool (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19584_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19586_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2_t2540  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19586(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2538 *, KeyValuePair_2_t2540 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19586_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19588_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2_t2540  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19588(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2538 *, KeyValuePair_2_t2540 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19588_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19590_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2U5BU5D_t2748* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19590(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2538 *, KeyValuePair_2U5BU5D_t2748*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19590_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19592_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2_t2540  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19592(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2538 *, KeyValuePair_2_t2540 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19592_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m19594_gshared (Dictionary_2_t2538 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m19594(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2538 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m19594_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19596_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19596(__this, method) (( Object_t * (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19596_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19598_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19598(__this, method) (( Object_t* (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19598_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19600_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19600(__this, method) (( Object_t * (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19600_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m19602_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m19602(__this, method) (( int32_t (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_get_Count_m19602_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m19604_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m19604(__this, ___key, method) (( bool (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m19604_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m19606_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m19606(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m19606_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m19608_gshared (Dictionary_2_t2538 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m19608(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2538 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m19608_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m19610_gshared (Dictionary_2_t2538 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m19610(__this, ___size, method) (( void (*) (Dictionary_2_t2538 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m19610_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m19612_gshared (Dictionary_2_t2538 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m19612(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2538 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m19612_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2540  Dictionary_2_make_pair_m19614_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m19614(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2540  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m19614_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m19616_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m19616(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m19616_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m19618_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2U5BU5D_t2748* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m19618(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2538 *, KeyValuePair_2U5BU5D_t2748*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m19618_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m19620_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m19620(__this, method) (( void (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_Resize_m19620_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m19622_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m19622(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m19622_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m19624_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m19624(__this, method) (( void (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_Clear_m19624_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m19626_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m19626(__this, ___key, method) (( bool (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m19626_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m19628_gshared (Dictionary_2_t2538 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m19628(__this, ___value, method) (( bool (*) (Dictionary_2_t2538 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m19628_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m19630_gshared (Dictionary_2_t2538 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m19630(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2538 *, SerializationInfo_t684 *, StreamingContext_t685 , const MethodInfo*))Dictionary_2_GetObjectData_m19630_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m19632_gshared (Dictionary_2_t2538 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m19632(__this, ___sender, method) (( void (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m19632_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m19634_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m19634(__this, ___key, method) (( bool (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m19634_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m19636_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m19636(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2538 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m19636_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2543 * Dictionary_2_get_Values_m19638_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m19638(__this, method) (( ValueCollection_t2543 * (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_get_Values_m19638_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m19640_gshared (Dictionary_2_t2538 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m19640(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m19640_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m19642_gshared (Dictionary_2_t2538 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m19642(__this, ___value, method) (( bool (*) (Dictionary_2_t2538 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m19642_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m19644_gshared (Dictionary_2_t2538 * __this, KeyValuePair_2_t2540  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m19644(__this, ___pair, method) (( bool (*) (Dictionary_2_t2538 *, KeyValuePair_2_t2540 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m19644_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2545  Dictionary_2_GetEnumerator_m19646_gshared (Dictionary_2_t2538 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m19646(__this, method) (( Enumerator_t2545  (*) (Dictionary_2_t2538 *, const MethodInfo*))Dictionary_2_GetEnumerator_m19646_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t764  Dictionary_2_U3CCopyToU3Em__0_m19648_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m19648(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t764  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m19648_gshared)(__this /* static, unused */, ___key, ___value, method)
