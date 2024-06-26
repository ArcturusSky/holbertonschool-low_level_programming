#include <stdio.h>

/**
* main - This is the entry point of the code
* Return: 0 Successful
*
*/

int main(void)
{
	char za = 'z';

	while (za >= 'a')
{
	putchar(za);
	za--;
	}
	putchar('\n');
	return (0);
}
