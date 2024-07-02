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
	char *holder = accept;

	int foundtrue; /** si char trouvé alors 1 si pas trouvé alors 0 */

	while (*s != '\0')
	{
		foundtrue = 0; /**initialise mon "true or false" */

		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				foundtrue = 1;
				break;
			}
			accept++;
		}
		if (foundtrue) /** Si trouvé est vrai (donc si = 1 ) */
		{
			break; /** alors sort de la grande boucle */
		}
		accept = holder;
		s++;
	}
return (accept);
}
