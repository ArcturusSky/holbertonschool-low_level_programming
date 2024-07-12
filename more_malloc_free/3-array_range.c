#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Function that creates and arrays of integers
 * @min: begining value (included)
 * @max: end value (included)
 *
 * Return: pointer to newly created array
 *
 */

int *array_range(int min, int max)
{
	int *new_array;
	int count;
	int index = 0;
	int holder = min;

	if (min > max)
	{
		return (NULL);
	}

	count = (max - min) + 1;

	new_array = malloc(count * sizeof(int));

	if (new_array == NULL)
	{
		return (NULL);
	}
	holder = min;

	for (index = 0; index < count ; index++)
	{
		new_array[index] = holder;
		holder++;
	}


	return (new_array);
}
