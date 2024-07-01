#include "main.h"

/**
 * _memcpy - Fonction permettant de copier la zone mémoire d'un endroit
 * vers un autre (en gros la valeur)
 * @src: mémoire source
 * @dest: mémoire destination
 * @n: nombre de bytes qui doivent être recouverts
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0 ; count != n ; count++)
	{
		dest[count] = *src;
		src++;
		dest++;
	}

	return (dest);

}
