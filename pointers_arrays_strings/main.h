#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

int _putchar(char c);
	/**Fonction utilitaire servant à remplacer putchar classique */

void print_alphabet(void);
	/** Fonction utilitaire servant à imprimer l'alphabet en minuscule */

void print_alphabet_x10(void);
	/** Fonction utilitaire servant à imprimer l'alphabet en minuscule 10 fois */

int _islower(int c);
	/**
	 * Fonction utilitaire servant à vérifier les minuscules
	 * si minuscules return 1
	 * sinon 0
	 */

int _isalpha(int c);
	/**
	 * Fonction utilitaire servant à vérifier les caractères
	 * si caractère alphanumerique return 1
	 * sinon 0
	 */

int print_sign(int n);
	/**
	 * Fonction utilitaire servant à print le signe d'un nombre
	 * si positif return 1, si 0 return 0, si negatif return -1
	 * sinon 0
	 */

int _abs(int);
	/** Fonction utilitaire servant à computer les valeurs absolues en int */

int print_last_digit(int);
	/** Fonction utilitaire servant print le dernier digit */

void jack_bauer(void);
	/** Fonction utilitaire permettant chaque min de la journée de Jack Bauer */

void times_table(void);
	/** Fonction uti permettant de print la "9 times table" commençant par 0 */

int add(int, int);
	/**
	* add - Fonction utilitaire pour additioner deux entiers
	* Return: the sum
	*
	*/
void print_to_98(int n);
	/** Fonction uti pour print tous les nbs naturels de n à 98, suivi d'un \n */

int _isupper(int c);
	/**
	 * Fonction utilitaire servant à vérifier les Majuscules
	 * si MAJUSCULES return 1
	 * sinon 0
	 */

int _isdigit(int c);
	/**
	 * Fonction utilitaire servant à vérifier les chiffres
	 * si chiffres return 1
	 * sinon 0
	 */

int mul(int, int);
	/**
	* mul - Fonction utilitaire pour multiplier deux entiers
	* Return: the result
	*/

void print_numbers(void);
	/** Fonction utilitaire servant à imprimer les chiffres de 0 à 9 */

void print_most_numbers(void);
	/** Fonction utilitaire servant à print les chiffres de 0 à 9 sans 2 et 4 */

void more_numbers(void);
	/** Fonction utilitaire servant à imprimer les chiffres de 0 à 14 fois 10*/

void print_line(int n);
	/** Fonction utilitaire permettant de dessiner une ligne droite */

void print_diagonal(int n);
	/** Fonction utilitaire permettant de dessiner une ligne diagonale */

void print_square(int size);
	/** Fonction utilitaire permettant de dessiner un carré */

void print_triangle(int size);
	/** Fonction utilitaire permettant de dessiner un triangle */

void reset_to_98(int *n);
	/** Fonction utilitaire permettant d'update la valeur pointée à 98 */

void swap_int(int *a, int *b);
	/** Fonction utilitaire permettant de swap la valeur de deux entiers */

int _strlen(char *s);
	/** Fonction utilitaire retournant la taille d'un string */

void _puts(char *str);
	/** Fonction utilitaire permettant de print le string */

void print_rev(char *s);
	/** Fonction utilitaire permettant d'imprimer le string à l'envers */

#endif
