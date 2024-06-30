#include "main.h"

/**
 * reverse_array - Fonction permettant d'obtenir un string à l'envers
 * @a: array à retourner
 * @n: nombre d'élément de l'array
 * Return: rien
 */

void reverse_array(int *a, int n)
	{
		int *debut = a;
		int *fin = a + n - 1;
		int temp;

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
