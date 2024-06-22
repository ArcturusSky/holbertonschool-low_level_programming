#include <stdio.h>

/**
 * main - This is the entry point of the code
 * Return: 0 Successful
 */

int main(void)
{
int a, b, c, compteur;

a = 1;
b = 2;
c = (a + b);
compteur = 0;

while (compteur != 97)
{
	printf("%d, ", c);
	a = b;
	b = c;
	c = (b + a);
	compteur++;
}
if (compteur == 97)
{
	printf("%d", c);
	a = b;
	b = c;
	c = (b + a);
	compteur++;
	printf("\n");
}
return (0);
}
