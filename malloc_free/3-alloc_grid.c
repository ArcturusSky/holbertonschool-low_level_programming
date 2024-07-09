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
	int sizeuni = 0;
	int memorysize = 0;
	

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	sizeuni = height * width;
	memorysize = malloc(sizeuni * sizeof(int));
	if (memorysize == NULL)
	{
		return (NULL);
	}

	return (memorysize);
}
