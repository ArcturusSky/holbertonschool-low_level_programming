#include "main.h"

/**
 * _pow_recursion - Fonction permettant de retourner la valeur de x puissance y
 * @x: nombre de base
 * @y: puissance
 *
 * Return: valleur de x puissance y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
		if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));

}
