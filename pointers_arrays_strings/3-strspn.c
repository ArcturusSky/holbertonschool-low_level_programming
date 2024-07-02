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
	int count = 0;
	char *holder = s;

    /** ai = accept index */

	while (*accept != '\0')
	{
		while (*s != '\0')
		{
			if (*s == *accept)
			{
				count++;
				s++;
				break;
			}
			else
			{
			s++;
			}
		}
		s = holder;
		accept++;
	}
	count++;
return (count);
}
