#include "main.h"

/**
 * print_rev - Fonction permettant de print un string à l'envers
 * @s: string print
 * Return: rien
 */

void print_rev(char *s)
	{
		long int count_for_reverse;

		count_for_reverse = 0;

		while (*s != '\0')

			{
			count_for_reverse++;
			s++;
			}
		while (count_for_reverse != 0)
		{
			count_for_reverse--;
			s--;
			_putchar(*s);
		}

	_putchar('\n');
	return;
	}
