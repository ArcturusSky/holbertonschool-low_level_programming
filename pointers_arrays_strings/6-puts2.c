#include "main.h"

/**
 * puts2 - Function to print every other character of a string
 * @str: The string to be printed
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
	}
