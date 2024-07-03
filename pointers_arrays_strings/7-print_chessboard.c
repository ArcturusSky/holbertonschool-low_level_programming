#include "main.h"

/**
 * print_chessboard - Fonction permettant d'imprimer un échiquer
 * @a: longueur de l'échiquier
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int ilong = 0;
	int ilarge = 0;

	while (*a[ilong] != '\0')
	{
		while (*a[ilarge] != '\0')
		{
			_putchar(a[ilong][ilarge]);
			ilarge++;
		}
		ilarge = 0;
		ilong++;
		_putchar('\n');
	}
return;
}
