#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type "struct dog"
 * @d: instance created
 * @name: String name of the dog
 * @age: Float age of the dog
 * @owner: String name of the owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
