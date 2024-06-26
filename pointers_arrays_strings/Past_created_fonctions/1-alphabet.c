#include "main.h"
/**
 * print_alphabet - fonction UTILITAIRE pour imprimer l'alphabet
 * Return: rien ici puisque que c'est "void" print_alphabet pas int
 *
 */

void print_alphabet(void)
{
	char az = 'a';

		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		_putchar('\n');
		return;
}
