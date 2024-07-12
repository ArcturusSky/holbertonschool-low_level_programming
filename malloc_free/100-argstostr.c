#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument counts
 * @av: argument vectors
 *
 * Return: NULL or pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int argc_count;
	int argv_index;
	int argv_char_index = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (argc_count = 1; argc_count != ac; argc_count++)
	{
		for (argv_index = 0; argv_index != '\0'; argv_index)
		{
			for (argv_char_index = 0; argv_char_index != '\0'; argv_char_index)
			{
				_putchar(argv_char_index);
			}
			_putchar("\n");
		}

	}

}
