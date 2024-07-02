#include "main.h"

	/**
	 * Fonction permettant de localiser une substring
	 * @haystack: où chercher
	 * @needle: ce que l'on cherche
	 */

char *_strstr(char *haystack, char *needle)
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
}

