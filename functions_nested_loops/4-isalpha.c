#include "main.h"
/**
* _isalpha - Fonction utilitaire servant à vérifier les minuscules
* @c: lettre à tester si c est un caractère alphanumerique
* Return: 1
*/

int _isalpha(int c)
{

	if (c >= 65 && c <= 90) /** 65 en ASCII = A et 90 = Z */
	{
		return (1);
		}
		else if (c >= 97 && c <= 122) /** 97 en ASCII = a et 122 = z*/
		{
			return (1);
			}
		else
		{
			return (0);
		}
}
