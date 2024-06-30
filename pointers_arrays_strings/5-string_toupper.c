#include "main.h"

/**
 * string_toupper - Fonction changeant les minuscules par des majuscules
 * @str: charactère à échanger
 * Return: pointeur vers la chaîne convertie
 */


char *string_toupper(char *str)
{
	char *conversion = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;

	}
	return (conversion);
}
