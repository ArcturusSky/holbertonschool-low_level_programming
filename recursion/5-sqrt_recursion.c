#include "main.h"

/**
 * _squareroot_helper - Fonction permettant d'aider pour la récursion
 * @holder: nombre pour aider
 * @n: nombre à tester
 * Return: helper
 */

int _squareroot_helper(int holder, int n)
{

	if ((holder * holder) == n)
	{
	return (holder);
	}

	if ((holder * holder) > n)
	{
	return (-1);
	}

	if ((holder * holder) < n)
	{
	return (_squareroot_helper(holder + 1, n));
	}

	return (-1);
}

/**
 * _sqrt_recursion - Fonction permettant de retourner la racine carrée de n
 * @n: nombre à trouver la racine carré
 *
 * Return: valeur de la racine
 */

int _sqrt_recursion(int n)
{
	return (_squareroot_helper(0, n));
}
