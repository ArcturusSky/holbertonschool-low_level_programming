#include "main.h"

/**
* print_square - Fonction utilitaire servant print un rectangle
* @size: size of the square
* Return: rien vu que void
*/

void print_square(int size)
{


		while (size > 0)
	{
		_putchar('#');
		size--;
	}

_putchar('\n');
}
