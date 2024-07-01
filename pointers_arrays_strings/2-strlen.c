#include "main.h"

/**
 * _strlen - Fonction permettant connaître la taill d'une string
 * @s: string à compter
 * Return: lengh
 */

int _strlen(char *s)
{
	int count;

	count = 0;

	while (*s != '\0')

	/**
	 * Permet de traverser le array vers lequel point s
	 * "*s" désigne littéralement ce tableau je n'ai pas besoin de
	 * de son adresse mémoire avec p = &s ou autre.
	 */
	{
		count++;
		s++;
	}

	return (count);
}
