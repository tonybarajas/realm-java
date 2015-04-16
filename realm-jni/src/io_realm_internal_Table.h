/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_realm_internal_Table */

#ifndef _Included_io_realm_internal_Table
#define _Included_io_realm_internal_Table
#ifdef __cplusplus
extern "C" {
#endif
#undef io_realm_internal_Table_INFINITE
#define io_realm_internal_Table_INFINITE -1LL
#undef io_realm_internal_Table_INTEGER_DEFAULT_VALUE
#define io_realm_internal_Table_INTEGER_DEFAULT_VALUE 0LL
#undef io_realm_internal_Table_PRIMARY_KEY_CLASS_COLUMN_INDEX
#define io_realm_internal_Table_PRIMARY_KEY_CLASS_COLUMN_INDEX 0LL
#undef io_realm_internal_Table_PRIMARY_KEY_FIELD_COLUMN_INDEX
#define io_realm_internal_Table_PRIMARY_KEY_FIELD_COLUMN_INDEX 1LL
#undef io_realm_internal_Table_NO_PRIMARY_KEY
#define io_realm_internal_Table_NO_PRIMARY_KEY -2LL
/*
 * Class:     io_realm_internal_Table
 * Method:    createNative
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_createNative
  (JNIEnv *, jobject);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeClose
  (JNIEnv *, jclass, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeIsValid
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_Table_nativeIsValid
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeEquals
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_Table_nativeEquals
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeIsRootTable
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_Table_nativeIsRootTable
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeAddColumn
 * Signature: (JILjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeAddColumn
  (JNIEnv *, jobject, jlong, jint, jstring);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeAddColumnLink
 * Signature: (JILjava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeAddColumnLink
  (JNIEnv *, jobject, jlong, jint, jstring, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeRemoveColumn
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeRemoveColumn
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeRenameColumn
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeRenameColumn
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeUpdateFromSpec
 * Signature: (JLio/realm/internal/TableSpec;)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeUpdateFromSpec
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeClear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeClear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetColumnCount
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetColumnCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetTableSpec
 * Signature: (J)Lio/realm/internal/TableSpec;
 */
JNIEXPORT jobject JNICALL Java_io_realm_internal_Table_nativeGetTableSpec
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetColumnName
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_Table_nativeGetColumnName
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetColumnIndex
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetColumnIndex
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetColumnType
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_io_realm_internal_Table_nativeGetColumnType
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeRemove
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeRemove
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeRemoveLast
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeRemoveLast
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeMoveLastOver
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeMoveLastOver
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeAddEmptyRow
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeAddEmptyRow
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertLinkList
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertLinkList
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetSortedView
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetSortedView
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetSortedViewMulti
 * Signature: (J[J[Z)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetSortedViewMulti
  (JNIEnv *, jobject, jlong, jlongArray, jbooleanArray);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertFloat
 * Signature: (JJJF)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertFloat
  (JNIEnv *, jobject, jlong, jlong, jlong, jfloat);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertDouble
 * Signature: (JJJD)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertDouble
  (JNIEnv *, jobject, jlong, jlong, jlong, jdouble);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertLong
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertLong
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertBoolean
 * Signature: (JJJZ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong, jboolean);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertDate
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertDate
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertString
 * Signature: (JJJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertString
  (JNIEnv *, jobject, jlong, jlong, jlong, jstring);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertMixed
 * Signature: (JJJLio/realm/internal/Mixed;)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertMixed
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertByteArray
 * Signature: (JJJ[B)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertSubtable
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertSubtable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeInsertDone
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeInsertDone
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetLong
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetLong
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetBoolean
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_Table_nativeGetBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetFloat
 * Signature: (JJJ)F
 */
JNIEXPORT jfloat JNICALL Java_io_realm_internal_Table_nativeGetFloat
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetDouble
 * Signature: (JJJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_Table_nativeGetDouble
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetDateTime
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetDateTime
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetString
 * Signature: (JJJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_Table_nativeGetString
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetByteArray
 * Signature: (JJJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_io_realm_internal_Table_nativeGetByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetMixedType
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_io_realm_internal_Table_nativeGetMixedType
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetMixed
 * Signature: (JJJ)Lio/realm/internal/Mixed;
 */
JNIEXPORT jobject JNICALL Java_io_realm_internal_Table_nativeGetMixed
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetLink
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetLink
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetLinkTarget
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetLinkTarget
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetSubtable
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetSubtable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetSubtableDuringInsert
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetSubtableDuringInsert
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetSubtableSize
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetSubtableSize
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeClearSubtable
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeClearSubtable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetRowPtr
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetRowPtr
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetLong
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeSetLong
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetBoolean
 * Signature: (JJJZ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeSetBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong, jboolean);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetFloat
 * Signature: (JJJF)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeSetFloat
  (JNIEnv *, jobject, jlong, jlong, jlong, jfloat);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetDouble
 * Signature: (JJJD)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeSetDouble
  (JNIEnv *, jobject, jlong, jlong, jlong, jdouble);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetDate
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeSetDate
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetString
 * Signature: (JJJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeSetString
  (JNIEnv *, jobject, jlong, jlong, jlong, jstring);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetByteArray
 * Signature: (JJJ[B)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeSetByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetMixed
 * Signature: (JJJLio/realm/internal/Mixed;)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeSetMixed
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetLink
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeSetLink
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeAddInt
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeAddInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetPrimaryKey
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeSetPrimaryKey
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSetIndex
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeSetIndex
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeUnsetIndex
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeUnsetIndex
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeHasIndex
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_Table_nativeHasIndex
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeIsNullLink
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_Table_nativeIsNullLink
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeNullifyLink
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeNullifyLink
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSumInt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeSumInt
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeMaximumInt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeMaximumInt
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeMinimumInt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeMinimumInt
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeAverageInt
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_Table_nativeAverageInt
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSumFloat
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_Table_nativeSumFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeMaximumFloat
 * Signature: (JJ)F
 */
JNIEXPORT jfloat JNICALL Java_io_realm_internal_Table_nativeMaximumFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeMinimumFloat
 * Signature: (JJ)F
 */
JNIEXPORT jfloat JNICALL Java_io_realm_internal_Table_nativeMinimumFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeAverageFloat
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_Table_nativeAverageFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeSumDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_Table_nativeSumDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeMaximumDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_Table_nativeMaximumDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeMinimumDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_Table_nativeMinimumDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeAverageDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_Table_nativeAverageDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeMaximumDate
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeMaximumDate
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeMinimumDate
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeMinimumDate
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeCountLong
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeCountLong
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeCountFloat
 * Signature: (JJF)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeCountFloat
  (JNIEnv *, jobject, jlong, jlong, jfloat);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeCountDouble
 * Signature: (JJD)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeCountDouble
  (JNIEnv *, jobject, jlong, jlong, jdouble);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeCountString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeCountString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeWhere
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeWhere
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindFirstInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindFirstInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindFirstBool
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindFirstBool
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindFirstFloat
 * Signature: (JJF)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindFirstFloat
  (JNIEnv *, jobject, jlong, jlong, jfloat);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindFirstDouble
 * Signature: (JJD)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindFirstDouble
  (JNIEnv *, jobject, jlong, jlong, jdouble);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindFirstDate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindFirstDate
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindFirstString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindFirstString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindAllInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindAllInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindAllBool
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindAllBool
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindAllFloat
 * Signature: (JJF)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindAllFloat
  (JNIEnv *, jobject, jlong, jlong, jfloat);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindAllDouble
 * Signature: (JJD)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindAllDouble
  (JNIEnv *, jobject, jlong, jlong, jdouble);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindAllDate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindAllDate
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeFindAllString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeFindAllString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeLowerBoundInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeLowerBoundInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeUpperBoundInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeUpperBoundInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativePivot
 * Signature: (JJJIJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativePivot
  (JNIEnv *, jobject, jlong, jlong, jlong, jint, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetDistinctView
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_Table_nativeGetDistinctView
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeGetName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_Table_nativeGetName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeOptimize
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_Table_nativeOptimize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeToJson
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_Table_nativeToJson
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeToString
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_Table_nativeToString
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_Table
 * Method:    nativeRowToString
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_Table_nativeRowToString
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
