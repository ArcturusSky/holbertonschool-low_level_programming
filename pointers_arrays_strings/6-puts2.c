#include "main.h"

/**
 * puts2 - Fonction permettant de print une 2 lettres sur 2
 * @str: string print
 * Return: rien
 */

void puts2(char *str)
	{
	int i = 0;
		while (str[i] != '\0')
			{
				if (str[i] % 2 == 0)
				{
					_putchar(str[i]);
					i++;
				}
			}
	_putchar('\n');
	}
