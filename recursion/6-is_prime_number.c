#include "main.h"

/**
 * is_prime_number_helper - Fonction auxilliaire pour is_prime_number
 * @n: nombre testé
 * @test: diviseur
 *
 * Return: 0
 */


int is_prime_number_helper(int n, int test)
{
	if (test * test > n)
	/** si test² dépasse n alors forcément il est premier */
	{
		return (1);
	}
	if (n % test == 0)
	/** Si n est divisible par test, n n'est pas premier */
	{
		return (0);
	}
	return (is_prime_number_helper(n, test + 1));
}


/**
 * is_prime_number - Fonction retournant 1 si n est un nombre premier
 * @n: nombre testé
 *
 * Return: 0
 */


int is_prime_number(int n)
{
	if (n <= 1)
	/** Si n est <= 1, ce n'est pas un nombre premier */
	{
		return (0);
	}

	return (is_prime_number_helper(n, 2));
	/** Appel initial avec test = 2 */
}
