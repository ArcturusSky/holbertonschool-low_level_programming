#include <stdio.h>

/**
* main - This is the entry point of the code
* Return: 0 Successful
*/

int main(void)
{
	int n = '0'

	for (int n = '0'; n <= '9'; n++)

	{
		putchar(n);
		if (n <= '8')
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
