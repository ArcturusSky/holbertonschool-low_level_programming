#include "main.h"

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

	while (*dest != ('\0'))
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
*dest = '\0';
return (depart);
}
