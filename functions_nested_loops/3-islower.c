#include "main.h"
/**
* _islower - Fonction utilitaire servant à vérifier les minuscules
* @c: lettre à tester si elle est en minuscule
* Return: 1
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
		}
		else
		{
			return (0);
			}
}
