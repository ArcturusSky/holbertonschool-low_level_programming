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
#endif
