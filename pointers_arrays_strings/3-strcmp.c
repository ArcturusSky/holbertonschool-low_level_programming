#include "main.h"

/**
 * _strcmp - Fonction permettant de comparer deux strings
 * @s1: String 1 à tester
 * @s2: String 2 à tester
 * Return: entier neg si négatif, 0 si égal, entier si positif
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
