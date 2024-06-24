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

#endif
