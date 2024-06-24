#include "main.h"
/**
* _isupper - Fonction utilitaire servant à vérifier les majuscules
* @c: lettre à tester si elle est en MAJUSCULE
* Return: 1
*/

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
		}
		else
		{
			return (0);
			}
}
