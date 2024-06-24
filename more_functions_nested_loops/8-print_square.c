#include "main.h"

/**
* print_square - Fonction utilitaire servant print un rectangle
* @size: size of the square
* Return: rien vu que void
*/

void print_square(int size)
{
	int loop;
	int keepsize;

	keepsize = size;
for (loop = 0; loop < size; loop++)
{
	while (size >= 0)
	{
		_putchar('#');
		size--;
	}
	size = keepsize;
_putchar('\n');
}
}
