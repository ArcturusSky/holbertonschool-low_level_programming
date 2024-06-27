#include "main.h"

/**
 * rev_string - Fonction permettant d'obtenir un string à l'envers
 * @s: string à retourner
 * Return: rien
 */

void rev_string(char *s)
	{
		char *debut = s;
		char *fin = s;
		char temp;

		while (*fin != '\0')
			{
			fin++;
			}
			fin--;
		while (debut < fin)
		{
			temp = *debut;
			*debut = *fin;
			*fin = temp;
			debut++;
			fin--;
		}
	return;
	}
