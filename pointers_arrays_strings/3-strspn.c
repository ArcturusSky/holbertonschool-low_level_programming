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
	char *holder = accept;

	int foundtrue; /** si char trouvé alors 1 si pas trouvé alors 0 */

	while (*s != '\0')
	{
		foundtrue = 0; /**initialise mon "true or false" */

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				foundtrue = 1;
				break;
			}
			accept++;
		}
		if (!foundtrue) /** Si "trouvé" n'est pas vrai (donc si pas = 1) */
		{
			break; /** alors sort de la grande boucle */
		}

		accept = holder;
		s++;
	}
return (count);
}
