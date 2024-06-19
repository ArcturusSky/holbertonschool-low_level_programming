#include <stdio.h>

/**
* main - This is the entry point of the code
* Return: 0 Successful
*
*/

int main(void)
{
	char ae = 'a';
	char ep = 'f';
	char qz = 'r';

	while (ae <= 'd')
{
	putchar(ae);
	ae++;
	}
	while (ep <= 'p')
{
	putchar(ep);
	ep++;
	}
	while (qz <= 'z')
{
	putchar(qz);
	qz++;
	}
	putchar('\n');
	return (0);
}
