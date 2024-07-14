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

struct dog
{
	char *name;		/** Pointer because it's a string */
	float age;		/** Float for dog's age */
	char *owner;	/** String for dog's owner */
};

void init_dog(struct dog *d, char *name, float age, char *owner);
	/**
	 * Function that initialize a variable of type `struct dog`
	 */

void print_dog(struct dog *d);
	/**
	 * Function that print a struct dog
	 */
#endif
