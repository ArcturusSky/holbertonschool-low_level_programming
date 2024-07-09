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

}
