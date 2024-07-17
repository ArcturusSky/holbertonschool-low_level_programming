#ifndef FUNCTIONPOINTERS_H
#define FUNCTIONPOINTERS_H
#include <stddef.h>

int _putchar(char c);
	/**Fonction utilitaire servant à remplacer putchar classique */

void print_name(char *name, void (*f)(char *));
	/**  Function that prints a name */

void array_iterator(int *array, size_t size, void (*action)(int));
	/**
	 * Function that executes a function given as a
	 * parameter on each elements of an array
	 */

int int_index(int *array, int size, int (*cmp)(int));
	/** Function that searches for an integer */

#endif
