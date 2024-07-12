#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: allocated value
 *
 * Return: if fail exit (98)
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *memory = 0;

	memory = malloc(b * sizeof(unsigned int));

	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);

}
