#include "main.h"

/**
* print_line - Fonction utilitaire servant print une ligne droite
* @n: nb de _ à print pour faire une ligne
* Return: rien vu que void
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
_putchar('\n');
}
