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
	if (d->age == NAN)
	{
		printf("(nil)");
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
