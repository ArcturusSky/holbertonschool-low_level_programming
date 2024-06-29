#include "main.h"
#include <stdio.h>

/**
 * puts_half - Fonction utilitaire servant à imprimer la moitié d'un string
 * @str: string testé
 */

void puts_half(char *str)
{

int i = 0;
int counting = 0;

	while (str[i] != '\0')
	{
		counting++;
		i++;
	}
	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (i >= (counting / 2))
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
return;
}
