/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class pkginterface_InterfaceJavaC */

#ifndef _Included_pkginterface_InterfaceJavaC
#define _Included_pkginterface_InterfaceJavaC
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     pkginterface_InterfaceJavaC
 * Method:    createDeck
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_pkginterface_InterfaceJavaC_createDeck
  (JNIEnv *, jclass, jint);

/*
 * Class:     pkginterface_InterfaceJavaC
 * Method:    deleteDeck
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_pkginterface_InterfaceJavaC_deleteDeck
  (JNIEnv *, jclass);

/*
 * Class:     pkginterface_InterfaceJavaC
 * Method:    getVerticeColor
 * Signature: (II)C
 */
JNIEXPORT jchar JNICALL Java_pkginterface_InterfaceJavaC_getVerticeColor
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     pkginterface_InterfaceJavaC
 * Method:    modifyVertice
 * Signature: (CII)V
 */
JNIEXPORT void JNICALL Java_pkginterface_InterfaceJavaC_modifyVertice
  (JNIEnv *, jclass, jchar, jint, jint);

/*
 * Class:     pkginterface_InterfaceJavaC
 * Method:    isModifyVertice
 * Signature: (CII)I
 */
JNIEXPORT jint JNICALL Java_pkginterface_InterfaceJavaC_isModifyVertice
  (JNIEnv *, jclass, jchar, jint, jint);

/*
 * Class:     pkginterface_InterfaceJavaC
 * Method:    hasWinner
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_pkginterface_InterfaceJavaC_hasWinner
  (JNIEnv *, jclass);

/*
 * Class:     pkginterface_InterfaceJavaC
 * Method:    getWinner
 * Signature: ()C
 */
JNIEXPORT jchar JNICALL Java_pkginterface_InterfaceJavaC_getWinner
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
