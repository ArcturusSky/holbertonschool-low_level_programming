#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - Represent a dog basic attribute
 * @name: String for the dogs's name
 * @age: float for dog's age
 * @owner: String for dog's owner name
 *
 * Description: A simple structure to store basic dog data.
 */

typedef struct dog
{
	char *name;		/** Pointer because it's a string */
	float age;		/** Float for dog's age */
	char *owner;	/** String for dog's owner */
} dog_t;/**
 * Creating an alias for 'struct dog' equal to
 * "typedef struct dog dog_t;"
 */


void init_dog(struct dog *d, char *name, float age, char *owner);
	/**
	 * Function that initialize a variable of type `struct dog`
	 */

void print_dog(struct dog *d);
	/**
	 * Function that print a struct dog
	 */

dog_t *new_dog(char *name, float age, char *owner);
	/**
	 * Function that create a new dog.
	 */

void free_dog(dog_t *d);
	/**
	 * Function that frees dogs.
	 */
#endif
