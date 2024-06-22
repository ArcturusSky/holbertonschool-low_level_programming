#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Fonction uti pour print les nbs entier jusqu'à 98
 * @n: input à compter jusqu'à 98
 *
 */

void print_to_98(int n)
{
	if (n < 99)
		while (n < 99)
		{
			printf("%d, ", n);
			n++;
			}

	else if (n > 97)
		while (n > 97)
		{
			printf("%d, ", n);
			n--;
			}
	else
	{
		printf("%d", n);
		}

	printf("\n");

}
