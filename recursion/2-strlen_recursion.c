#include "main.h"

/**
 * _strlen_recursion - Permet de compter la taille d'une string
 * @s: string à calculer
 *
 * Return: le nombre
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}