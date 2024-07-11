#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a point to a 2D arrays of integers
 * @width: number of columns
 * @height: number of lines
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int ligne, colonne;

	if (width <= 0 || height <= 0) /** Vérification des dimensions */
	{
		return (NULL);
	}
/** Allocation de la mémoire pour chaque lignes du tableau */
	array = malloc(height * sizeof(int *));

	if (array == NULL) /** Si l'allocation échoue */
	{
		return (NULL);
	}
/** Allocation de la mémoire pour chaque colonne dans chaque ligne */
	for (ligne = 0; ligne < height; ligne++)
	{
		array[ligne] = malloc(width * sizeof(int));
		if (array[ligne] == NULL) /** Si l'allocation échoue */
		{
			/** Libération de la mémoire déjà allouée */
			for (colonne = 0; colonne < ligne; colonne++)
			{
				free(array[colonne]);
			}
		free(array);
		return (NULL);
		}
	}
	for (ligne = 0; ligne != height; ligne++) /**Init toutes les cases à 0 */
	{
		for (colonne = 0; colonne < width; colonne++)
		{
			array[ligne][colonne] = 0;
		}
	}
	return (array);
}
