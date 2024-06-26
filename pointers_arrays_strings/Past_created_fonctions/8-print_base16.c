#include <stdio.h>

/**
* main - This is the entry point of the code
* Return: 0 Successful
*
*/

int main(void)
{
	int n = '0';
	char af = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (af != 'g')
	{
		putchar(af);
		af++;
	}
	putchar('\n');
	return (0);
}
