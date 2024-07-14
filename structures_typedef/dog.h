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
