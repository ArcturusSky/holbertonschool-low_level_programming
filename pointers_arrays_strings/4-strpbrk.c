#include "main.h"

/**
 * _strpbrk - Fonction permettant de rechercher la première occurrence
 * dans la chaîne "s" de l'un des caractères de la chaîne "accept"
 * @s: string testé
 * @accept: chars recherchés
 * Return: le pointeur vers le 1er character trouvé
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			/** Return pointer to the matching byte */
			}
			a++;
		}
		s++;
	}
return (NULL);
/** Return NULL if no matching byte is found */
}
