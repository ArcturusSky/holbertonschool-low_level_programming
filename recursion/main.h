#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

int _putchar(char c);
	/**Fonction utilitaire servant à remplacer putchar classique */

void _puts_recursion(char *s);
	/** Fonction permettant de print un string mais en récursion */

void _print_rev_recursion(char *s);
	/** Fonction permettant de print un string à l'envers mais en récursion */

int _strlen_recursion(char *s);
	/** Fonction permettant de calculer la taille d'une string */

int factorial(int n);
	/** Fonction permettant de calculer la factoriel d'un nombre */

int _pow_recursion(int x, int y);
	/** Fonction permettant de retourner la valeur de x puissance y */

int _sqrt_recursion(int n);
	/** Fonction permettant de retourner la valeur de la racine carrée de n */

int is_prime_number(int n);
	/** Fonction permettant de retourner 1 si n est un nombre premier */

#endif
