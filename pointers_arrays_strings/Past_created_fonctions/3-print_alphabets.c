#include <stdio.h>

/**
* main - This is the entry point of the code
* Return: 0 Successful
*
*/

int main(void)
{
	char az = 'a';
	char AZ = 'A';

	while (az <= 'z')
{
	putchar(az);
	az++;
	}
	while (AZ <= 'Z')
{
	putchar(AZ);
	AZ++;
	}
	putchar('\n');
	return (0);
}
