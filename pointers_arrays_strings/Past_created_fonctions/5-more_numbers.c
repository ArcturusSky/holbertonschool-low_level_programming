#include "main.h"
/**
* more_numbers - fonction UTILITAIRE pour
* imprimer 0 à 14 en x10
* Return: rien
*
*/

void more_numbers(void)
{
int loop10;
int n;

	for (loop10 = 0; loop10 < 10; loop10++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
			_putchar(n / 10 + '0');
			}
		_putchar(n % 10 + '0');
		}
	_putchar('\n');
	}

}
