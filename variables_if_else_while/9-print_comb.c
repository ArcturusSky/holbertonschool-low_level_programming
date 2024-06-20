#include <stdio.h>

/**
* main - This is the entry point of the code
* Return: 0 Successful
*/

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		putchar(' ');
		if (n <= '8')
		putchar(',');
	}
	putchar('\n');
	return (0);
}
