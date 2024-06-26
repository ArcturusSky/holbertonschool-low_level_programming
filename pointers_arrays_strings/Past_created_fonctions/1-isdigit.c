#include "main.h"
/**
* _isdigit - Fonction utilitaire servant à vérifier les chiffres
* @c: lettre à tester si chiffre
* Return: 1
*/

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
		}
		else
		{
			return (0);
			}
}
