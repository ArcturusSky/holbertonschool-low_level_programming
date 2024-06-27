#include "main.h"

/**
 * swap_int - Fonction permettant de swamp la valeur de deux entiers pointés
 * @a: pointer vers valeur a à changer
 * @b: pointeur vers valeur b à changer
 * Return: Rien car void
 */

void swap_int(int *a, int *b)
{
	int holder = *a;
	*a = *b;
	*b = holder;

return;
}
