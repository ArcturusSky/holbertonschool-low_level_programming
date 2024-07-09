#include "main.h"

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
