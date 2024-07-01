#include "main.h"

/**
 * _strspn - Fonction permettant de trouver le nb de bytes dans la string "s"
 * contenant seulement les bytes (character) de "accept"
 * @s: string testé
 * @accept: char recherché
 * Return: le compte
 */

unsigned int _strspn(char *s, char *accept)
{
	int count;
	int index;

	while (s[index] != '\0')
	{
		if (*s == *accept)
		{
			count++;
		}
		index++;
	}
return (count);
}
