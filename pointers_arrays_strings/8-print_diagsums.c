#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Fonction permettant de calculer la somme
 * de deux diagonal d'une matrice d'entier (un carré)
 * @a: tableau
 * @size: taille du tableau
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int iligne = 0;
	int icolonne = 0;
	int sumDp = 0;
	int sumDs = 0;
	int indexuni;
	/** sumDp/Ds stands for "sum diagonal principale/secondaire" */

	for ( ; iligne < size ; iligne++)
	{
		icolonne = 0;
			while (iligne != icolonne)
			{
				icolonne++;
			}
			if (iligne == icolonne)
			{
				indexuni = (iligne * size + icolonne);
				sumDp = sumDp + a[indexuni];
			}
	}
	iligne = 0;
	icolonne = 0;
	for ( ; iligne < size ; iligne++)
	{
		icolonne = 0;
			while (iligne + icolonne != (size - 1))
			{
				icolonne++;
			}
			if (iligne + icolonne == (size - 1))
			{
				indexuni = (iligne * size + icolonne);
				sumDs = sumDs + a[indexuni];
			}
		}

printf("%d, %d\n", sumDp, sumDs);
return;
}
