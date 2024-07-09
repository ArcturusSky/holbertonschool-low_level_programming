#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - Fonction qui sert à concactener deux string
 * @dest: destination
 * @src: source
 * @n: nombre de bytes limite
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
char *depart = dest;
int count = 0;

	while (*dest != ('\0'))
	{
		dest++;
	}
	while (*src != '\0' && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}

	if (count < n)
	{
	*dest = '\0';
	}


return (depart);
}


/**
 * str_concat - Concatenates two strings while allowing
 * the exact right ammount of memory space
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL if terminated or faillure, if not return pointer
 */

char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int index = 0;
	int totalsize = 0;
	char *conca_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[index] != '\0')
	{
		size1++;
		index++;
	}
	index = 0;
		while (s2[index] != '\0')
	{
		size2++;
		index++;
	}

	totalsize = (size1 + size2) + 1; /** one more index to include \0 caracter */
	conca_string = malloc(totalsize * sizeof(char));

	if (conca_string == NULL)
	{
		return (NULL); /** Check if malloc failed */
	}

	_strncat(conca_string, s1, size1);
	/** Call _strncat to concatenate the strings */
	_strncat(conca_string, s2, size2);
	/** Call _strncat to concatenate the strings */

	conca_string[totalsize] = '\0';

	return (conca_string);
}
