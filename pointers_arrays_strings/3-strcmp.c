#include "main.h"

/**
 * _strcmp - Fonction permettant de comparer deux strings
 * @s1: String 1 à tester
 * @s2: String 2 à tester
 * Return: -1 si négatif, 0 si égal, 1 si positif
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 < s2)
	{
		return (-15);
	}
	if (s1 == s2)
	{
		return (0);
	}
	if (s1 > s2)
	{
		return (15);
	}

return (0);
}
