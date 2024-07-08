#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function that creates an array of chars
 * initialized with a specific char.
 * @size: size of the array
 * @c: char to initiaized the array with.
 *
 * Return: NULL if size = 0 or fail, if not retunr pointer.
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int index = 0;

	if (size == 0)
	{
		return (NULL);
	}
	for ( ; index != size; index++)
	{
		array[index] = c;
	}
	return (array);

}
