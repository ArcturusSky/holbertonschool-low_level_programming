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
	int size1, size2, index, totalsize;
	char *conca_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	index = 0;
	for (size1 = 0 ; s1[index] != '\0' ; index++)
	{
		size1++;
	}
	index = 0;
		for (size2 = 0 ; s2[index] != '\0' ; index++)
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
	_strncat(conca_string, s1, size1); /** _strncat to add s1 to conca_string */
	_strncat(conca_string, s2, size2); /**_strncat to add s2 to conca_string */

	conca_string[totalsize] = '\0'; /** adding \0 character to conca_string */

	return (conca_string);
}
