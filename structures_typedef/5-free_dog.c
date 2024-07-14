#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that free dogs.
 * @d: instance to free
 *
 * Return: NULL if FAIL
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d);
}