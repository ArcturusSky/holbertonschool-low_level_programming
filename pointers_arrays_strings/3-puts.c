#include "main.h"

/**
 * _puts - Fonction permettant de print un str
 * @str: string print
 * Return: rien
 */

void _puts(char *str)
	{
		while (*str != '\0')

		/**
		 * Permet de traverser le array vers lequel point s
		 * "*str" désigne littéralement ce tableau je n'ai pas besoin de
		 * de son adresse mémoire avec p = &s ou autre.
		 */
			{
			_putchar(*str);
			str++;
			}
	_putchar('\n');
	return;
	}