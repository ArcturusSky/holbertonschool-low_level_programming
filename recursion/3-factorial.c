#include "main.h"

/**
 * factorial - Fonction permettant de calculer la factoriel d'un nb
 * @n: nombre don't on veut la factoriel
 *
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
