#ifndef MAIN_H
#define MAIN_H

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

#endif
