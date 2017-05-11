/**
 * @file deck.h
 * @autho PATA Gwendal - OLIVIER Thomas
 * @date Avril 2017
 * @brief Fichier de prototype du tablier de jeu.
 */

#ifndef __DECK_H__
#define __DECK_H__

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "vertice.h"
#include "edge.h"


/**
 * @brief Structure du tablier de jeu.
 * @typedef Structure du tablier de jeu
 */
typedef struct s_deck* Deck;

extern Deck global_deck;

/**
 * @brief Crée un nouveau plateau de jeu.
 * @param size : Taille du tablier de jeu.
 * @return Retourne un plateau de jeu initialiser.
 */
Deck deck_create(unsigned int size);

/**
 * @brief Cherche un sommet dans un plateau de jeu en fonction de ces coordonnées.
 * @param deck : Plateau de jeu dans lequel on cherche.
 * @param abscisse : Coordonnée à chercher.
 * @param ordonnee : Coordonnée à chercher.
 * @return Retourne le sommet chercher.
 */
Vertice deck_get_vertice(Deck deck, unsigned int abscisse,
                                    unsigned int ordonnee);

/**
 * @brief Vérifie si un sommet est une bordure.
 * @param deck : Plateau de jeu dans lequel on vérifie.
 * @param vertice : Sommet à vérifier.
 * @return Retourne si le sommet est bien un sommet bordure ou non.
 * @returns 0 : Non ce n'est pas un sommet bordure.
 * @returns 1 : Oui c'est un sommet bordure.
 */
int deck_vertice_is_border(Deck deck, Vertice vertice);

/**
 * @brief Affiche le tablier de jeu trois fois, coordonnée, couleur et toutes les arêtes.
 * @param deck : Tablier à afficher.
 */
void deck_print(Deck deck);

/**
 * @brief Affiche le tablier de jeu avec les coordonnées des sommets.
 * @param deck : Tablier à afficher.
 */
void deck_print_coordinates(Deck deck);

/**
 * @brief Affiche le tablier de jeu avec les couleurs des sommets.
 * @param deck : Tablier à afficher.
 */
void deck_print_color(Deck deck);

/**
 * @brief Affiche toutes les arêtes d'un tablier de jeu.
 * @param deck : Tablier à afficher
 */
void deck_print_edge(Deck deck);

/**
 * @brief Récupère un sommet bordure en fonction de ces caractèristiques.
 * @param deck : Le tablier de jeu où il faut chercher.
 * @param color : La couleur de la bordure. (BLACK/WHITE)
 * @param number : Le numéro de la bordure. (1/2)
 * @return Retourne le sommet bordure voulu.
 */
Vertice deck_get_border(Deck deck, char color, int number);

/**
 * @brief Fonction qui calcule le nombre d'arêtes il y a dans un tablier sans compter les doublons.
 * @param size : Taille d'un tablier.
 * @return Retourne le nombre d'arêtes possible dans une tablier de 'size' sommet.
 */
unsigned int deck_get_number_edge(unsigned int size);

/**
 * @brief Supprime un tablier de jeu.
 * @param deck : Tablier à supprimer.
 */
void deck_delete(Deck deck);

/**
 * @brief Libérer les zonnes mémoires du tablier.
 * @param deck : Tablier à libérer.
 */
void deck_free(Deck deck);

/**
 * @brief Fonction qui vérifie si un sommet peut être modifier ou non par un joueur.
 * @param deck : Tablier de jeu à vérifier.
 * @param color : Couleur vers laquel le sommet sera modifié.
 * @param abscisse : Abscisse du sommet à modifier.
 * @param ordonnee : Ordonnée du sommet à modifier.
 * @return Retourne si l'opération de modification est possible ou non.
 * @returns 0 : Non elle n'est pas possible.
 * @returns 1 : Oui elle est possible.
 */
int deck_vertice_modify_is_possible(Deck deck, char color, int abscisse, int ordonnee);

/**
 * @brief Fonction qui modifie la couleur d'un sommet.
 * @param deck : Tablier de jeu à modifier.
 * @param color : Couleur vers laquel le sommet sera modifié.
 * @param abscisse : Abscisse du sommet à modifier.
 * @param ordonnee : Ordonnée du sommet à modifier.
 */
void deck_vertice_modify(Deck deck, char color, int abscisse, int ordonnee);

#endif