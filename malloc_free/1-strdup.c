#include "main.h"
#include <stdlib.h>

/**
 * _strcpy - Fonction qui sert à copier une string ailleurs
 * @dest: destination de la copie
 * @src: source de la copie
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
char *depart = dest;
	while (*src != '\0')

	{
		*dest = *src;
		dest++;
		src++;
	}
*dest = '\0';
return (depart);
}

/**
 * _strdup - Function that return a pointer to a newly
 * allocated space in memory, which conains a copy of the string
 * as a given parameter.
 * @str: string to copy
 *
 * Return: NULL if str NULL if success return pointer
 */

char *_strdup(char *str)
{
	unsigned int index = 0;
	unsigned int count = 0;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[index] != '\0')
	{
		count++;
		index++;
	}
	count++; /** one more index to include \0 caracter */

	duplicate = malloc(count * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL); /** Check if malloc failed */
	}

	_strcpy(duplicate, str);
	/** Call _strcpy */

	return (duplicate);
}
