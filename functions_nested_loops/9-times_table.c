#include "main.h"

/**
 * times_table - Début de ma fonction utilitaire pour afficher tables de multi
 *
 */

void times_table(void)
{
	int findetable, multiplicateur;

	for (findetable = 0; findetable < 10; findetable++)
	{
		for (multiplicateur = 0; multiplicateur < 10; multiplicateur++)
		{
			_putchar((0 * multiplicateur) + '0');
			_putchar(',');
			_putchar('.');
			_putchar((1 * multiplicateur) + '0');
			_putchar(',');
			_putchar('.');
			_putchar((2 * multiplicateur) + '0');
			_putchar(',');
			_putchar('.');
			_putchar((3 * multiplicateur) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((4 * multiplicateur) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((5 * multiplicateur) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((6 * multiplicateur) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((7 * multiplicateur) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((8 * multiplicateur) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar((9 * multiplicateur) + '0');
			_putchar('\n');
			}
	}
}
