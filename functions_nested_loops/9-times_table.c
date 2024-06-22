#include "main.h"

/**
 * times_table - Début de ma fonction utilitaire pour afficher tables de multi
 *
 */

void times_table(void)
{
	int ligne, colonne, resultat;

	for (ligne = 0; ligne <= 9; ligne++)
	{
		for (colonne = 0; colonne <= 9; colonne++)
		{
			resultat = (ligne * colonne);
			if (colonne != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (resultat >= 10)
			{
				_putchar((resultat / 10) + '0');
				_putchar((resultat % 10) + '0');
			}
			else if (resultat < 10 && colonne != 0)
			{
				_putchar(' ');
				_putchar((resultat % 10) + '0');
			}
			else
				_putchar((resultat % 10) + '0');
		}
			_putchar('\n');
	}
}
