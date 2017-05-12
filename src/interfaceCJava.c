#include <jni.h>
#include "../header/version2_InterfaceJavaC.h"
#include <stdlib.h>
#include <stdio.h>

#include "../header/deck.h"

Deck global_deck;

/*
 * Class:     version2_InterfaceJavaC
 * Method:    createDeck
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_version2_InterfaceJavaC_createDeck
  (JNIEnv *env, jclass class, jint size)
{
    extern Deck global_deck;
    global_deck = deck_create(size);
    return;
}

/*
 * Class:     version2_InterfaceJavaC
 * Method:    deleteDeck
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_version2_InterfaceJavaC_deleteDeck
  (JNIEnv *env, jclass class)
{
    extern Deck global_deck;
    deck_delete(global_deck);
    return;
}

/*
 * Class:     version2_InterfaceJavaC
 * Method:    getVerticeColor
 * Signature: (II)C
 */
JNIEXPORT jchar JNICALL Java_version2_InterfaceJavaC_getVerticeColor
  (JNIEnv *env, jclass class, jint abscisse, jint ordonnee)
{
    extern Deck global_deck;
    Vertice vertice;
    
    vertice = deck_get_vertice(global_deck, abscisse, ordonnee);
    return vertice_get_color(vertice);
}

/*
 * Class:     version2_InterfaceJavaC
 * Method:    modifyVertice
 * Signature: (CII)V
 */
JNIEXPORT void JNICALL Java_version2_InterfaceJavaC_modifyVertice
  (JNIEnv *env, jclass class, jchar color, jint abscisse, jint ordonnee)
{
    extern Deck global_deck;
    deck_vertice_modify(global_deck, color, abscisse, ordonnee);
    return;
}

/*
 * Class:     version2_InterfaceJavaC
 * Method:    isModifyVertice
 * Signature: (CII)I
 */
JNIEXPORT jint JNICALL Java_version2_InterfaceJavaC_isModifyVertice
  (JNIEnv *env, jclass class, jchar color, jint abscisse, jint ordonnee)
{
    extern Deck global_deck;
    return deck_vertice_modify_is_possible(global_deck, color, abscisse, ordonnee);
}
