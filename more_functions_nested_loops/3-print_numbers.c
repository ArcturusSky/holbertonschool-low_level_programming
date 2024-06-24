#include "main.h"
/**
 * print_numbers - fonction UTILITAIRE pour imprimer les chiffres de 0 à 9
 * Return: rien ici puisque que c'est "void" print_numbers pas int
 *
 */

void print_numbers(void)
{
	int n = 0;

		while (n <= 9)
		{
			_putchar('0' + n);
			n++;
		}
		_putchar('\n');
		return;
}
