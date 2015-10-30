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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1763;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1765;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t603;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2338;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t55;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2339;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t815;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1771;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m10531_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10531(__this, method) (( void (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2__ctor_m10531_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10533_gshared (Dictionary_2_t1763 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10533(__this, ___comparer, method) (( void (*) (Dictionary_2_t1763 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10533_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10535_gshared (Dictionary_2_t1763 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10535(__this, ___capacity, method) (( void (*) (Dictionary_2_t1763 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10535_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10537_gshared (Dictionary_2_t1763 * __this, SerializationInfo_t603 * ___info, StreamingContext_t604  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10537(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1763 *, SerializationInfo_t603 *, StreamingContext_t604 , const MethodInfo*))Dictionary_2__ctor_m10537_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10539_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10539(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1763 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10539_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10541_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10541(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1763 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10541_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10543_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10543(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1763 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10543_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10545_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10545(__this, ___key, method) (( bool (*) (Dictionary_2_t1763 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10545_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10547_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10547(__this, ___key, method) (( void (*) (Dictionary_2_t1763 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10547_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10549_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10549(__this, method) (( bool (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10549_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10551_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10551(__this, method) (( Object_t * (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10553_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10553(__this, method) (( bool (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10553_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10555_gshared (Dictionary_2_t1763 * __this, KeyValuePair_2_t1766  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10555(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1763 *, KeyValuePair_2_t1766 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10555_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10557_gshared (Dictionary_2_t1763 * __this, KeyValuePair_2_t1766  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10557(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1763 *, KeyValuePair_2_t1766 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10557_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10559_gshared (Dictionary_2_t1763 * __this, KeyValuePair_2U5BU5D_t2338* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10559(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1763 *, KeyValuePair_2U5BU5D_t2338*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10559_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10561_gshared (Dictionary_2_t1763 * __this, KeyValuePair_2_t1766  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10561(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1763 *, KeyValuePair_2_t1766 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10561_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10563_gshared (Dictionary_2_t1763 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10563(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1763 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10563_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10565_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10565(__this, method) (( Object_t * (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10565_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10567_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10567(__this, method) (( Object_t* (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10567_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10569_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10569(__this, method) (( Object_t * (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10569_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10571_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10571(__this, method) (( int32_t (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_get_Count_m10571_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m10573_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10573(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1763 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10573_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10575_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10575(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1763 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m10575_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10577_gshared (Dictionary_2_t1763 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10577(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1763 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10577_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10579_gshared (Dictionary_2_t1763 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10579(__this, ___size, method) (( void (*) (Dictionary_2_t1763 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10579_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10581_gshared (Dictionary_2_t1763 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10581(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1763 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10581_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1766  Dictionary_2_make_pair_m10583_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10583(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1766  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m10583_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m10585_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10585(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m10585_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10587_gshared (Dictionary_2_t1763 * __this, KeyValuePair_2U5BU5D_t2338* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10587(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1763 *, KeyValuePair_2U5BU5D_t2338*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10587_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m10589_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10589(__this, method) (( void (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_Resize_m10589_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10591_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10591(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1763 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m10591_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m10593_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10593(__this, method) (( void (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_Clear_m10593_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10595_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10595(__this, ___key, method) (( bool (*) (Dictionary_2_t1763 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10595_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10597_gshared (Dictionary_2_t1763 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10597(__this, ___value, method) (( bool (*) (Dictionary_2_t1763 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m10597_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10599_gshared (Dictionary_2_t1763 * __this, SerializationInfo_t603 * ___info, StreamingContext_t604  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10599(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1763 *, SerializationInfo_t603 *, StreamingContext_t604 , const MethodInfo*))Dictionary_2_GetObjectData_m10599_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10601_gshared (Dictionary_2_t1763 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10601(__this, ___sender, method) (( void (*) (Dictionary_2_t1763 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10601_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10603_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10603(__this, ___key, method) (( bool (*) (Dictionary_2_t1763 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10603_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10605_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10605(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1763 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m10605_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1771 * Dictionary_2_get_Values_m10607_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10607(__this, method) (( ValueCollection_t1771 * (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_get_Values_m10607_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10609_gshared (Dictionary_2_t1763 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10609(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1763 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10609_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m10611_gshared (Dictionary_2_t1763 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10611(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1763 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10611_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10613_gshared (Dictionary_2_t1763 * __this, KeyValuePair_2_t1766  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10613(__this, ___pair, method) (( bool (*) (Dictionary_2_t1763 *, KeyValuePair_2_t1766 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10613_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1773  Dictionary_2_GetEnumerator_m10615_gshared (Dictionary_2_t1763 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10615(__this, method) (( Enumerator_t1773  (*) (Dictionary_2_t1763 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10615_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1005  Dictionary_2_U3CCopyToU3Em__0_m10617_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10617(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1005  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10617_gshared)(__this /* static, unused */, ___key, ___value, method)
