#include "dog.h"
#include <stdio.h>
#include <math.h>

/**
 * print_dog - Function that print a struct dog
 * @d: instance of the structure.
 *
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
	printf("Name: %s\n", d->name);
	}
	if (d->age == NAN)
	{
		printf("(nil)");
	}
	else
	{
		printf("Age: %.6f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
	printf("Owner: %s\n", d->owner);
	}
}
