#include "main.h"

/**
 * _strchr - Fonction permettant de trouver un character dans un string
 * @s: string testé
 * @c: char recherché
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != ('\0'))
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (*s == c && c == '\0')
		{
			return (s);
		}
	}
	return (NULL);
}
