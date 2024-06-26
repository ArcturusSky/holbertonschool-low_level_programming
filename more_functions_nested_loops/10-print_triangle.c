#include "main.h"

/**
* print_triangle - Fonction utilitaire servant print un triangle
* @n: nb de _ à print pour faire un triangle
* Return: rien vu que void
*/

void print_triangle(int n)
{
	int espace;
	int ligne;
	int hashtag;
	int minus;

	minus = 1;
	hashtag = 0;

	if (n <= 0)
	{
		_putchar ('\n');
	}

		for (ligne = 0; ligne < n; ligne++)
		{
			hashtag = 0;
			for (espace = n - minus; espace != 0; espace--)
			{
				_putchar(' ');
			}
			while (hashtag != minus)
			{
				_putchar(35);
				hashtag++;
			}
			minus++;
			_putchar('\n');
		}
}
