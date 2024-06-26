#include "main.h"
/**
* print_alphabet_x10 - fonction UTILITAIRE pour
* imprimer l'alphabet en minuscule x10
* Return: rien ici puisque que c'est "void" print_alphabet_x10 pas int
*
*/

void print_alphabet_x10(void)
{
	int loop10 = 0;

		while (loop10 < 10)
		{
			char az = 'a';

			while (az <= 'z')
			{
				_putchar(az);
				az++;
			}
		_putchar('\n');
		loop10++;
		}
		return;
}
