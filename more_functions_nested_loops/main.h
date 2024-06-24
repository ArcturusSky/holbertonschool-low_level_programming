#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
	/**Fonction utilitaire servant à remplacer putchar classique */

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
	/** fonction utilitaire permettant de dessiner un triangle */
#endif
