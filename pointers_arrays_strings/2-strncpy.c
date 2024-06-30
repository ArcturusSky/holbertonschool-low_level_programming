#include "main.h"

/**
 * _strncpy - Fonction qui sert à copier un string
 * @dest: destination
 * @src: source
 * @n: nombre de bytes limite
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
char *depart = dest;
int count = 0;

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
