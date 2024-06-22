#include <stdio.h>

/**
 * main - This is the entry point of the code
 * Return: 0 Successful
 */

int main(void)
{
unsigned long a, b, c, compteur;

a = 1;
b = 2;
c = (a + b);
compteur = 2;

printf("%lu, %lu, ", a, b);
while (compteur != 98)
{
	printf("%lu, ", c);
	a = b;
	b = c;
	c = (b + a);
	compteur++;
}
if (compteur == 98)
{
	printf("%lu", c);
	a = b;
	b = c;
	c = (b + a);
	compteur++;
	printf("\n");
}
return (0);
}
