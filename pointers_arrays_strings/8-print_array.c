#include "main.h"
#include <stdio.h>

/**
 * print_array - Fonction uti servait à print
 * un certain nombre "n" dans un array
 * @a: array à print
 * @n: nombre d'élément à print
 */

void print_array(int *a, int n)
{
	int index;

	index = 0;

if (n > 0)
{
	while (index != (n - 1))
	{
		printf("%d, ",  a[index]);
		index++;
	}
}
	printf("%d\n", a[index]);
}
