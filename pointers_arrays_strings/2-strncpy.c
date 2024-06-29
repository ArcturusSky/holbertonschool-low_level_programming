#include "main.h"

/**
 * _strncpy - Fonction qui sert à copier une string ailleurs
 * @dest: destination de la copie
 * @src: source de la copie
 * @n: ?
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
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
