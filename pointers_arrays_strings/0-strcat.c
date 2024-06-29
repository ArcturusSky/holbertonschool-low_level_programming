#include "main.h"

/**
 * _strcat - Fonction qui sert à concactener deux string
 * @dest: destination
 * @src: source
 * Return: dest
 */


char *_strcat(char *dest, char *src)
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
