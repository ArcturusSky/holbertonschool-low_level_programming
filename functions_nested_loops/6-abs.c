#include "main.h"
/**
 * _abs - Fonction uti servant à computer les valeurs absolues en int
 * @n: nombre à tester
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	n = -n;
	return (n);
}
