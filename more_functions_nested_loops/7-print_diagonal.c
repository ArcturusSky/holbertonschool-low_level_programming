#include "main.h"

/**
* print_diagonal - Fonction utilitaire servant print une ligne droite
* @n: nb de _ à print pour faire une diagonale
* Return: rien vu que void
*/

void print_diagonal(int n)
{
	int espace;
	int ligne;

	if (n <= 0)
	{
		_putchar ('\n');
	}

	for (ligne = 0; ligne < n; ligne++)
	{
		for (espace = 0; espace != ligne; espace++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}

}
