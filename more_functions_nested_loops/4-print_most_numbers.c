#include "main.h"

/**
* print_most_numbers - Fonction uti pour print 0 à 9 sans 2 et 4
* Return: 0 Successful
*
*/

void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
{
	if (n != 2 && n != 4)
		{
		_putchar('0' + n);
		}
	n++;
	}
	_putchar('\n');
}
