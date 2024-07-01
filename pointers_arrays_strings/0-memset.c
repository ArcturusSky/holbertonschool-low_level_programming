#include "main.h"

/**
 * _memset - Fonction permettant d'enregistrer un byte (ou valeur)
 * dans la mémoire sélectionnée
 * @s: mémoire selectionnée
 * @b: byte ou valeur à ajouter
 * @n: nombre de bytes qui doivent être recouverts
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0 ; count != n ; count++)
	{
		*s = b;
		s++;
	}

	return (s);

}
