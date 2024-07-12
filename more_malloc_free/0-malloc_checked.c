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
	unsigned int *memory;

	memory = malloc(b);
	/**
	 * Directly allocate (b)
	 * no need for sizeof since the byte size with
	 * sizeof has already been given in the 0-main.c
	 */

	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);

}
