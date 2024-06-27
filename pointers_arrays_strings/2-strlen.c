#include "main.h"

/**
 * _strlen - Fonction permettant connaître la taill d'une string
 * @s: string à compter
 * Return: lengh
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
