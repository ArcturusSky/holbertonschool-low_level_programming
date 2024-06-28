#include "main.h"

/**
 * puts2 - Fonction permettant de print une 2 lettres sur 2
 * @str: string print
 * Return: rien
 */

void puts2(char *str)
	{
		while (*str != '\0')
			{
			_putchar(*str);
			str += 2;
			}
	_putchar('\n');
	return;
	}
