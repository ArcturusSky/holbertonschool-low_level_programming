#include "main.h"

/**
 * times_table - Début de ma fonction utilitaire pour afficher tables de multi
 *
 */

void times_table(void)
{
	int findetable, multiplicateur, resultat, chiffre;

	chiffre = 0;
	multiplicateur = 0;
	resultat = chiffre * multiplicateur;

	for (findetable = 0; findetable < 10; findetable++)
	{
		for (multiplicateur = 0; multiplicateur < 10; multiplicateur++, chiffre++)
		{
			_putchar((resultat / 10) + '0');
			_putchar((resultat % 10) + '0');
			_putchar(',');
			_putchar('.');
			_putchar('.');
			_putchar('\n');
			}
	}
}
