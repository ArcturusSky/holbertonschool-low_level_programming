#include "main.h"
/**
* more_numbers - fonction UTILITAIRE pour
* imprimer 0 à 14 en x10
* Return: rien
*
*/

void more_numbers(void)
{
	int loop10 = 0;

		while (loop10 < 10)
		{
			int n = 0;

			while (n <= 9)
			{
				_putchar('0' + n);
				n++;
				while (n <= 14)
				{
					_putchar('S' + n);
				}
			}
		_putchar('\n');
		loop10++;
		}
		return;
}
