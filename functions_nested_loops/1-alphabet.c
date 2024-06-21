#include "main.h"

/**
 * main - Point d'entrée du code, début de la fonction
 * PRINCIPALE qui va appeler la fonction secondaire ensuite.
 * Return: 0 Successful
 *
 */

int main(void)
{

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
return (0);
}
