#include "dog.h"
#include "math.h"
#include <stdlib.h>
#include "main.h"

/**
 * new_dog - Function that creates a new dog
 * @name: String to the name
 * @age: Flaot for age
 * @owner: String for owner
 *
 * Return: NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *copyname;
	char *copyowner;
	dog_t *new_dog_instance;

	copyname = malloc(sizeof(name));

	if (copyname == NULL)
	{
		return (NULL);
	}
	copyowner = malloc(sizeof(owner));

	if (copyowner == NULL)
	{
		free(copyname);
		return (NULL);
	}

	_strcpy(copyname, name);
	_strcpy(copyowner, owner);

	new_dog_instance = malloc(sizeof(dog_t));

	if (new_dog_instance == NULL)
	{
		free(copyname);
		free(copyowner);
		return (NULL);
	}

	new_dog_instance->name = copyname;
	new_dog_instance->age = age;
	new_dog_instance->owner = copyowner;

	return (new_dog_instance);

}
