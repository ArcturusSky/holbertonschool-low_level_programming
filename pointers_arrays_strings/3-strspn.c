#include "main.h"

/**
 * _strspn - Fonction permettant de trouver un character dans un string
 * @s: string testé
 * @accept: char recherché
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (s != ("/0") ||  *s != c)
	{
		while (*s != c)
		{
			s++;
		}
		return (s);
	}
	return (NULL);
}
