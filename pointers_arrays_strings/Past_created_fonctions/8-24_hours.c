#include "main.h"

/**
 * jack_bauer - Début de ma fonction utilitaire pour compter sa journée
 *
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			/** Affiche le chiffre des dizaines des heures */
			_putchar((h % 10) + '0');
			/**  Affiche le chiffre des unités des heures */
			_putchar(':');
			_putchar((m / 10) + '0');
			/** Affiche le chiffre des dizaines des minutes */
			_putchar((m % 10) + '0');
			/** Affiche le chiffre des unités des minutes */
			_putchar('\n');
			}
	}
}
