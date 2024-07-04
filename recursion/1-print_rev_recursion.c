#include "main.h"

/**
 * _print_rev_recursion - Fonction permettant de print un string en recursion
 * @s: string to print
 *
 * Return: 0
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

_print_rev_recursion(s + 1);
/** Début de l'empilement des charactères */

	_putchar(*s);
}
