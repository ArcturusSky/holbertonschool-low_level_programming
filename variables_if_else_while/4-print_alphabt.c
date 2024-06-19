#include <stdio.h>

/**
* main - This is the entry point of the code
* Return: 0 Successful
*
*/

int main(void)
{
	char az = 'a';

	while (az <= 'z')
{
	if (az != 'e' && az != 'q')
	{
	putchar(az);
	}
	az++;
	}
	putchar('\n');
	return (0);
}
